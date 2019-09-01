#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


//仿函数  本质不是函数，而是对象，
//将这样的对象 也称为 函数对象
//仿函数 非常灵活，没有固定写法


class MyClassPrint
{
public:
	//重载 （）运算符  调用起来像函数 因此称作仿函数
	void operator()(string text)
	{
		cout << text << endl;
	}
};



class MyClassAdd
{
public:
	//重载 （）运算符  调用起来像函数 因此称作仿函数
	void operator()(int a, int b)
	{
		cout << a + b << endl;
	}
};


void test01()
{
	string str1 = "wangjunjie";
	int a = 10;
	int b = 20;

	MyClassPrint p1;
	MyClassAdd p2;


	p1(str1);
	p2(a, b);
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
