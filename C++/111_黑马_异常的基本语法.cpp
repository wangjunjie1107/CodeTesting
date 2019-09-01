#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//定义自己的错误类
class myException
{
public:
	void printError()
	{
		cout << "我自己的异常" << endl;
	}
};


//被检测的函数
int myDivision(int a, int b)
{
	if (b == 0)
	{
		//抛出异常
		//throw 1;  //int
		//throw 2.1; //double
		//throw 'a';//char
		//throw "aaa";//其他类型
		throw myException();//自己的错误类

	}
	return a / b;
}



void test01()
{
	int a = 10;
	int b = 0;
	
	//检测异常
	try
	{
		myDivision(a, b);
	}
	//接收异常
	catch (int)
	{
		//捕获到的异常，如果不想处理，想继续向上抛出
		//让上一级处理，利用关键字 throw
		throw;
		cout << "int类型的异常抛出" << endl;
	}
	catch (double)
	{
		cout << "double类型的异常抛出" << endl;
	}
	catch (char)
	{
		cout << "char类型的异常抛出" << endl;
	}
	catch (myException error)
	{
		error.printError();
	}
	catch (...)//其他类型异常 用...可以捕获
	{
		cout << "其他类型的异常抛出" << endl;
	}
}
int main()
{
	try
	{
		test01();
	}
	catch(int)
	{
		cout << "main函数中的int类型的异常抛出" << endl;
	}
	catch (double)
	{
		cout << "main 函数中的double类型异常捕获" << endl;
	}
	catch (...)
	{
		cout << "main函数中的其他类型的异常抛出" << endl;
	}


	//如果出现异常，但是异常没有任何的处理，
	//程序自动调用terminate函数，使程序中断掉


	system("pause");
	return EXIT_SUCCESS;
}
