#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyException
{
public:
	MyException()
	{
		cout << "MyExceptionĬ�Ϲ������" << endl;
	}
	MyException(const MyException & e)
	{
		cout << "MyException�����������" << endl;
	}
	~MyException()
	{
		cout << "MyException������������" << endl;
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

	// throw MyException();   MyException e  ���ÿ������캯���������µ��쳣����
	// throw MyException();   MyException& e  �����ÿ������죬�Ƽ�ʹ�� ������������������ú󣬻��ӳ���������������
	// throw &MyException();   MyException* e  ������ǰ�ͷţ��������e���Ƿ�����
	// throw new MyException();   MyException* e Ҫ�����ͷ� delete e
	catch (MyException e)
	{
		cout << "�ҵ��쳣����" << endl;
		//delete e;
	}
}


int main()
{
	test01();


	system("pause");
	return EXIT_SUCCESS;
}
