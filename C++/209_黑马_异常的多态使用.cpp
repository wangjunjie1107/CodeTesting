#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


//异常的基类
class BaseException
{
public:
	virtual void pointError()
	{

	}
};

//空指针异常
class NULLPointerException :public BaseException
{
public:
	 void pointError()
	{
		cout << "空指针异常" << endl;
	}
};

//越界异常
class OutOfRangeException :public BaseException
{
public:
	 void pointError()
	{
		cout << "越界异常" << endl;
	}
};


void doWork(int * a,int len)
{
	if (a == NULL)
	{
		throw NULLPointerException();
	}
	else if (len > 5)
	{
		throw OutOfRangeException();
	}
}

void test()
{
	int b = 2; 
	int * a = NULL ;
	int len = 6;

	try
	{
		doWork(a,len);
	}
	catch(BaseException & e)
	{
		e.pointError(); //父类指针指向子类对象  多态的使用 
	}

}

int main()
{
	test();

	system("pause");
	return 0;
}




