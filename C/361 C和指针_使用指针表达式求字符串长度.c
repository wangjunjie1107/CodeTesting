#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void stringlen(char * string)
{
	int length = 0;

	while(*string++ != NULL)
	{
		length++;
	}

	printf("�ַ�������Ϊ��%d\n", length);
}

int main()
{
	char * string = "wangjunjie";
	stringlen(string);//���ַ������� ������������

	system("pause");
	return EXIT_SUCCESS;
}
