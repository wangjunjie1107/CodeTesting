#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int fun(int a, int b)
{
	printf("%d\n", a + b);
	return a + b;
}
int main()
{
	//int(*pf)(int, int) = &fun;//函数名在使用时总是由编译器把它转换为函数指针,
								//所以可以省略&符号
								//&操作符只是显式地说明了编译器将隐式执行的任务。

	int(*pf)(int, int) = fun;//函数名在使用时总是由编译器把它转换为函数指针

	int sum = pf(20, 30);

	printf("%d\n", sum);
	system("pause");
	return EXIT_SUCCESS;
}
