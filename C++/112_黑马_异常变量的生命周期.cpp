#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyException
{
public:
	MyException()
	{
		cout << "MyException默认构造调用" << endl;
	}
	MyException(const MyException & e)
	{
		cout << "MyException拷贝构造调用" << endl;
	}
	~MyException()
	{
		cout << "MyException析构函数调用" << endl;
	}
};


void doWork()
{
	throw MyException();
}

void test01()
{
	try
	{
		doWork();
	}

	// throw MyException();   MyException e  调用拷贝构造函数，创建新的异常对象
	// throw MyException();   MyException& e  不调用拷贝构造，推荐使用 编译器看到对类的引用后，会延长变量的生命周期
	// throw &MyException();   MyException* e  对象被提前释放，如果操作e，非法操作
	// throw new MyException();   MyException* e 要管理释放 delete e
	catch (MyException e)
	{
		cout << "我的异常捕获" << endl;
		//delete e;
	}
}


int main()
{
	test01();


	system("pause");
	return EXIT_SUCCESS;
}
