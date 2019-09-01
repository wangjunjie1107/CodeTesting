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

	printf("字符串长度为：%d\n", length);
}

int main()
{
	char * string = "wangjunjie";
	stringlen(string);//求字符串长度 不包括结束符

	system("pause");
	return EXIT_SUCCESS;
}
