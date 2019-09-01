#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//��ȡ�ļ���Ч����  
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



	//���ļ���� ����
	fseek(file, 0, SEEK_SET);


	return lines;
}

//���ļ��е����ݷ��뵽pArray��������
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
		//pArray��һ����ά���飬������һ��ָ��
		pArray[index++] = currentP;

		memset(buf, 0, 1024);
	}
}

//��ӡ����  ��ά��������һάָ�룬ָ���ļ���ÿһ���ַ���
void showFileData(char ** pArray, int len)
{
	for (int i = 0; i < len;i++)
	{
		printf("%d�е�����Ϊ��    %s\n", i + 1, pArray[i]);
	}
}

//�ͷŶ����ռ�
void freeSpace(char ** pArray, int len)
{

	for (int i = 0;i < len;i++)
	{
		if (pArray[i] != NULL)
		{
			//�ͷ��ڲ�ռ�
			printf("%s���ͷ���\n", pArray[i]);
			free(pArray[i]);
			pArray[i] = NULL;
		}
	}

	//�ͷ����
	free(pArray);
	pArray = NULL;
}


void test01()
{
	//���ļ�
	FILE * file = fopen("./test.txt", "r");
	if (file == NULL)
	{
		printf("���ļ�ʧ��\n");
		return;
	}
	
	//��ȡ�ļ���Ч����
	int len = getFileLines(file);
	printf("�ļ�����Ч����Ϊ��%d\n", len);
	char ** pArray = malloc(sizeof(char *) * len);

	//���ļ��е����ݷ��뵽pArray��������
	readFileData(file, pArray, len);

	//��ӡ����
	showFileData(pArray, len);

	//�ͷŶ����ռ�
	freeSpace(pArray, len);
	pArray = NULL;

	//�ر��ļ�
	fclose(file);
	file = NULL;
}

int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
