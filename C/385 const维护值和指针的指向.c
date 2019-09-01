#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void test01()
{
	int a = 555;
	int const * p1;  //不可以修改指针的值，能修改指针的指向
	p1 = &a;//可以修改指针的指向
	*p1 = 100;//不可以修改指针的值

	int * const p2 = &a; // 不可以修改指针的指向，能修改指针的值
	*p2 = 100;//可以修改指针的值
	p2 = NULL;//不可以修改指针的指向

	int arr[] = { 555,555 };
	arr = NULL;//数组名是指针常量 不可以修改指向
	*arr = 100;// 可以修改值
}
int main() 
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
