#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	int a[] = { 1,2,3,4,5 };
	int * b = a + 2;

	//数组下标可以为负值，只要提前定义了
	printf("%d\n", b[-1]);

	system("pause");
	return EXIT_SUCCESS;
}
