#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>

char buf[1024] = { 0 }; //ȫ�ֱ���

int reverse(char *str)
{
	if (str == NULL)
	{
		printf("�ַ���Ϊ�գ�\n");
		return -1;
	}

	//�����ݹ���ý�������
	if (*str == '\0')
	{
		return 0;
	}

	reverse(str + 1);
	printf("%c", *str); //��ӡstrָ���ַ����ĵ�һ����ĸ

	return 0;
}


void test()
{
	char str[] = "abcdefg";
	reverse(str);
}


int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
