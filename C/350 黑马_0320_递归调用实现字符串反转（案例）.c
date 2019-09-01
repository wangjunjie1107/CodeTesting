#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>

char buf[1024] = { 0 }; //全局变量

int reverse(char *str)
{
	if (str == NULL)
	{
		printf("字符串为空！\n");
		return -1;
	}

	//函数递归调用结束条件
	if (*str == '\0')
	{
		return 0;
	}

	reverse(str + 1);
	printf("%c", *str); //打印str指向字符串的第一个字母

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
