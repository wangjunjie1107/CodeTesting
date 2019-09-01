#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//字符串翻转
// abcdefg --> gfedcba

//第一种方式，利用数组下标
void reverseString01(char *str)
{
	int len = strlen(str);
	int start = 0;
	int end = len - 1;

	while (start < end)
	{
		char temp = str[start];

		str[start] = str[end];

		str[end] = temp;

		start++;
		end--;
	}
}

//第二种方式 ；利用指针
void reverseString01(char *str)
{
	int len = strlen(str);

	char * start = str; //指向第一个字符的指针
	char * end = str + len - 1; //指向最后一个字符的指针

	while (start++ < end--)
	{
		//交换元素
		char temp = *start;
		*start = *end;
		*end = temp;
	}
}

int main()
{
	char str[] = "abcdefg";

	//reverseString01(str);

	reverseString02(str);

	printf("%s\n", str);
	system("pause");
	return EXIT_SUCCESS;
}
