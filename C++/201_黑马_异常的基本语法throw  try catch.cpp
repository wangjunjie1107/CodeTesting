#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


/*
	异常的关键字：throw、 try、 catch


	如果异常没有任何的处理，程序自动调用terminate函数，使程序中断掉


	栈解旋：
		从try开始起，到throw抛出异常前，
		所有栈上的对象都被自动释放，释放的顺序与构造相反，
		这个过程称为栈解旋

	捕获到的异常，如果不想处理，想继续向上抛出，让上一级处理，利用关键字 throw

	其他类型异常 用...可以捕获
*/




//自定义 异常类
class MyException
{
public:
	void printError()
	{
		cout << "我自己的异常" << endl;
	}
};


//栈解旋调用
class Person
{
public:
	Person()
	{
		cout << "Person默认构造函数调用" << endl;
	}

	~Person()
	{
		cout << "Person析构函数调用" << endl;
	}
};


int myDivision(int a, int b)
{
	if (b == 0)
	{
		//抛出异常

		//从try开始起，到throw抛出异常前，
		//所有栈上的对象都被自动释放，释放的顺序与构造相反，
		//这个过程称为栈解旋

		Person p1;

		//异常类
		//throw MyException();  //匿名对象 本条语句执行完 立即释放

		MyException p2;
		throw p2;	//抛出实例化对象
	}

	return a / b;
}


void test01()
{
	int a = 10;
	int b = 0;

	try
	{
		int ret = myDivision(a, b);
	}
	catch (int)
	{
		cout << "int类型异常捕获" << endl;
	}
	catch (double)
	{
		//捕获到的异常，如果不想处理，想继续向上抛出，让上一级处理，利用关键字 throw
		throw;
		cout << "double类型异常捕获" << endl;
	}
	catch (char)
	{
		cout << "char类型异常捕获" << endl;
	}
	catch (MyException e)
	{
		e.printError();
	}
	catch (...) //其他类型异常 用...可以捕获
	{
		cout << "其他类型异常捕获" << endl;
	}
}


int main() 
{

	try
	{
		test01();
	}
	catch (double)
	{
		cout << "main 函数中的double类型异常捕获" << endl;
	}
	catch (...)
	{
		cout << "main 函数中的其他类型异常捕获" << endl;
	}

	//如果异常没有任何的处理，程序自动调用terminate函数，使程序中断掉



	system("pause");
	return EXIT_SUCCESS;
}
