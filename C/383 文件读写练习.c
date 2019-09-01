#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//获取文件有效行数  
int getFileLines(FILE * file)
{
	if (file == NULL)
	{
		return -1;
	}

	char buf[1024];
	int lines = 0;
	while (fgets(buf, 1024, file) != NULL)
	{
		lines++;		
	}



	//将文件光标 置首
	fseek(file, 0, SEEK_SET);


	return lines;
}

//将文件中的数据放入到pArray的数组中
void readFileData(FILE * file, char ** pArray, int len)
{
	if (file == NULL)
	{
		return;
	}
	if (pArray == NULL)
	{
		return;
	}
	if (len <= 0)
	{
		return;
	}

	char buf[1024] = { 0 };
	int index = 0;

	while (fgets(buf, 1024, file) != NULL)
	{
		int currentLen = strlen(buf) + 1;
		buf[strlen(buf) - 1] = '\0';

		char * currentP = malloc(sizeof(char) * currentLen);
		strcpy(currentP, buf);
		//pArray是一个二维数组，里面存放一级指针
		pArray[index++] = currentP;

		memset(buf, 0, 1024);
	}
}

//打印数组  二维数组存的是一维指针，指向文件中每一行字符串
void showFileData(char ** pArray, int len)
{
	for (int i = 0; i < len;i++)
	{
		printf("%d行的数据为：    %s\n", i + 1, pArray[i]);
	}
}

//释放堆区空间
void freeSpace(char ** pArray, int len)
{

	for (int i = 0;i < len;i++)
	{
		if (pArray[i] != NULL)
		{
			//释放内层空间
			printf("%s被释放了\n", pArray[i]);
			free(pArray[i]);
			pArray[i] = NULL;
		}
	}

	//释放外层
	free(pArray);
	pArray = NULL;
}


void test01()
{
	//打开文件
	FILE * file = fopen("./test.txt", "r");
	if (file == NULL)
	{
		printf("打开文件失败\n");
		return;
	}
	
	//获取文件有效行数
	int len = getFileLines(file);
	printf("文件的有效行数为：%d\n", len);
	char ** pArray = malloc(sizeof(char *) * len);

	//将文件中的数据放入到pArray的数组中
	readFileData(file, pArray, len);

	//打印数组
	showFileData(pArray, len);

	//释放堆区空间
	freeSpace(pArray, len);
	pArray = NULL;

	//关闭文件
	fclose(file);
	file = NULL;
}

int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
