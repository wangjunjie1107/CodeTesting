#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class BaseException
{
public:
	virtual void printError() = 0;//���麯��
};

//��ָ���쳣
class NULLPointerException :public BaseException
{
public:
	virtual void printError()
	{
		cout << "��ָ���쳣" << endl;
	}
};

//Խ���쳣
class OutOfRangeException :public BaseException
{
public:
	virtual void printError()
	{
		cout << "Խ���쳣" << endl;
	}
};

void doWork()
{
	//throw NULLPointerException();  //��ָ���쳣
	throw OutOfRangeException();//Խ���쳣
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
