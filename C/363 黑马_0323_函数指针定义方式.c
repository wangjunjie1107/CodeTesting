#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void func(int a, char b)
{
	printf("%d,  %c\n", a, b);
}

void test01()
{
	//先定义出函数的类型，在通过类型定义函数指针
	// 定义出一个函数类型，返回值是void，形参列表（int，char）;
	typedef void(myFunc)(int, char);
	myFunc * p = func;

	p(10, 'a');
}

void test02()
{
	//先定义出函数指针的类型，再通过类型定义函数指针变量
	typedef void(*myFunc)(int, char);
	myFunc p = func;

	p(100, 'b');
}

void test03()
{
	//直接定义函数指针
	void(*p)(int, char) = func;

	p(2000, 'a');
}
int main()
{
	//test01();
	/*test02();*/
	test03();
	system("pause");
	return EXIT_SUCCESS;
}
