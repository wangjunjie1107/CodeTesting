#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class BaseException
{
public:
	virtual void printError() = 0;//纯虚函数
};

//空指针异常
class NULLPointerException :public BaseException
{
public:
	virtual void printError()
	{
		cout << "空指针异常" << endl;
	}
};

//越界异常
class OutOfRangeException :public BaseException
{
public:
	virtual void printError()
	{
		cout << "越界异常" << endl;
	}
};

void doWork()
{
	//throw NULLPointerException();  //空指针异常
	throw OutOfRangeException();//越界异常
}


void test01()
{
	try
	{
		doWork();
	}
	catch (BaseException & e)
	{
		e.printError();
	}
}


int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
