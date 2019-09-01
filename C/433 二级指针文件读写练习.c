#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 

//获取文件的有效行数
int getFileLines(FILE * fp)
{
	if (fp == NULL)
	{
		return -1;
	}

	char buf[1024];
	int lines = 0;

	while (fgets(buf, 1024, fp) != NULL)
	{
		if (buf[0] != '\n')
		{
			lines++;
			printf("第 %d 行： %s", lines, buf);
			//printf("strlen buf = %d\n",strlen(buf));  // 对于文件中的字符串来说  strlen 会计算字符串后的换行符 
		}
	}
	printf("\n");
	//将文件光标置首
	fseek(fp, 0, SEEK_SET);

	return lines;
}


//将文件中的数据放入到pArray的数组中
void readFileData(FILE * fp, char ** pArray)
{
	if (fp == NULL)
	{
		return;
	}
	if (pArray == NULL)
	{
		return;
	}


	char buf[1024] = { 0 };
	int index = 0;
	while (fgets(buf, 1024, fp) != NULL)
	{
		if (buf[0] == '\n')
		{
			continue; //遇到空行直接跳过
		}

		//计算开辟每个字符串的大小
		int currentLen = strlen(buf) + 1;

		//字符串最后的字符改为 \0  对于文件中的字符串来说  最后一个字符是换行符 
		//但是文件中最后一行的末尾可能不是换行符，而是文件结束符
		//所以进行判断   如果行末是 换行符 就替换最后的字符 
		//如果不是 就不进行替换  因为最后一行的最后一个字符 可能会是字符  而不是换行符。
		//最后一个字符  之后  可能是 文件结束符  并不读取到数组中 
		if(buf[strlen(buf) - 1] == '\n')
		{
		 
			buf[strlen(buf) - 1] = '\0';  //对于文件中的字符串来说  strlen 会计算字符串后的换行符 

		} 
		
		
		//开辟堆空间 一级指针指向字符串
		char * currentP = malloc(sizeof(char) + currentLen);

		//将文件中读取的内容，放入开辟的空间中
		strcpy(currentP, buf);

		//将开辟空间的数据，放入我们维护的数组中
		//二级指针数组 存放 一级指针
		pArray[index++] = currentP;
		
		//清空buf
		memset(buf, 0, 1024);
	}
}

//打印数组
void showFileData(char ** pArray, int len)
{
	int i;
	for (i = 0; i < len;i++)
	{
		printf("第 %d 行的数据为：%s\n", i + 1, pArray[i]);
	}
}

//释放堆区空间
void freeSpace(char ** pArray, int len)
{
	int i;
	for (i = 0;i < len;i++)
	{
		if (*pArray != NULL)
		{
			free(*pArray);
			*pArray = NULL;
		}
	}
	free(pArray);
	pArray = NULL;
}
void test01()
{
	//打开文件
	FILE * fp = fopen("./test.txt", "r+");
	if (fp == NULL)
	{
		printf("文件打开失败\n");
		return;
	}

	//获取文件有效函数
	int len = getFileLines(fp);
	printf("文件的有效行数为：%d\n", len);
	
	//根据读取的有效行数，开辟字符串指针数组
	char ** pArray = malloc(sizeof(char *) * len);

	//将文件中的数据放入到pArray的数组中
	readFileData(fp, pArray);

	//打印数组
	showFileData(pArray, len);

	//释放堆区空间
	freeSpace(pArray, len);
	pArray = NULL;


	//关闭文件指针
	fclose(fp);
	fp = NULL;
}


int main()
{
	//char * p = "wangjunjie";
	//printf("strlen p = %d\n",strlen(p)); //对于在栈区字符串常量 不计算最后的换行符 
	 
	test01();

	system("pause");
	return EXIT_SUCCESS;
}


