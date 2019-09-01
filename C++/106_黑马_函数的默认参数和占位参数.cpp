#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



//1、默认参数 
//可以给形参加默认值，如果传入值，就用用户传的实参，如果没有就用默认值

int func(int a, int b = 20, int c = 20)
{
	return a + b + c;
}

void test01()
{
	int a = 10;
	int b = 100;
	cout << func(a, b) << endl;//10+100+20 = 130
}


//注意事项2： 函数的声明和实现 只能有一个有默认参数 
//如果两个都有 则属于重定义 报错
//int func2(int a = 10, int b = 10);
int func2(int a = 10, int b = 10)
{
	return a + b;
}

void test02()
{
	func2();
}

//2、占位参数
//在形参中 只写数据类型，起到占位用途，调入时候必须传入实参
//占位参数 用途：运算符重载会用到 <<左移运算符重载
//占位参数，也可以有默认参数
int func3(int a, int = 10)
{
	return a;
}

void test03()
{
	func3(10);
}


int main()
{
	//test01();
	//test02();
	test03();



	system("pause");
	return EXIT_SUCCESS;
}

