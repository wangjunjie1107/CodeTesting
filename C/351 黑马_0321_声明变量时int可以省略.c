#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>

int main()
{
	//在声明整型变量时，如果声明中已经至少有了一个其他的说明符，关键字int可以省略。
	//例如：unsigned short int a;  unsigned short a ;这两个声明语句是等价的。

	unsigned short int a = 10;
	unsigned short b = 20;

	printf("a = %d\n", a);
	printf("b = %d\n", b);

	system("pause");
	return EXIT_SUCCESS;
}
