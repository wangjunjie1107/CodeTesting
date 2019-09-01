#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 

//��ȡ�ļ�����Ч����
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
			printf("�� %d �У� %s", lines, buf);
			//printf("strlen buf = %d\n",strlen(buf));  // �����ļ��е��ַ�����˵  strlen ������ַ�����Ļ��з� 
		}
	}
	printf("\n");
	//���ļ��������
	fseek(fp, 0, SEEK_SET);

	return lines;
}


//���ļ��е����ݷ��뵽pArray��������
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
			continue; //��������ֱ������
		}

		//���㿪��ÿ���ַ����Ĵ�С
		int currentLen = strlen(buf) + 1;

		//�ַ��������ַ���Ϊ \0  �����ļ��е��ַ�����˵  ���һ���ַ��ǻ��з� 
		//�����ļ������һ�е�ĩβ���ܲ��ǻ��з��������ļ�������
		//���Խ����ж�   �����ĩ�� ���з� ���滻�����ַ� 
		//������� �Ͳ������滻  ��Ϊ���һ�е����һ���ַ� ���ܻ����ַ�  �����ǻ��з���
		//���һ���ַ�  ֮��  ������ �ļ�������  ������ȡ�������� 
		if(buf[strlen(buf) - 1] == '\n')
		{
		 
			buf[strlen(buf) - 1] = '\0';  //�����ļ��е��ַ�����˵  strlen ������ַ�����Ļ��з� 

		} 
		
		
		//���ٶѿռ� һ��ָ��ָ���ַ���
		char * currentP = malloc(sizeof(char) + currentLen);

		//���ļ��ж�ȡ�����ݣ����뿪�ٵĿռ���
		strcpy(currentP, buf);

		//�����ٿռ�����ݣ���������ά����������
		//����ָ������ ��� һ��ָ��
		pArray[index++] = currentP;
		
		//���buf
		memset(buf, 0, 1024);
	}
}

//��ӡ����
void showFileData(char ** pArray, int len)
{
	int i;
	for (i = 0; i < len;i++)
	{
		printf("�� %d �е�����Ϊ��%s\n", i + 1, pArray[i]);
	}
}

//�ͷŶ����ռ�
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
	//���ļ�
	FILE * fp = fopen("./test.txt", "r+");
	if (fp == NULL)
	{
		printf("�ļ���ʧ��\n");
		return;
	}

	//��ȡ�ļ���Ч����
	int len = getFileLines(fp);
	printf("�ļ�����Ч����Ϊ��%d\n", len);
	
	//���ݶ�ȡ����Ч�����������ַ���ָ������
	char ** pArray = malloc(sizeof(char *) * len);

	//���ļ��е����ݷ��뵽pArray��������
	readFileData(fp, pArray);

	//��ӡ����
	showFileData(pArray, len);

	//�ͷŶ����ռ�
	freeSpace(pArray, len);
	pArray = NULL;


	//�ر��ļ�ָ��
	fclose(fp);
	fp = NULL;
}


int main()
{
	//char * p = "wangjunjie";
	//printf("strlen p = %d\n",strlen(p)); //������ջ���ַ������� ���������Ļ��з� 
	 
	test01();

	system("pause");
	return EXIT_SUCCESS;
}


