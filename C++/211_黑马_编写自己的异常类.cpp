#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//提供自己越界异常类
class myOutOfRangeException :public exception
{
public:
	
	myOutOfRangeException(const char * errorInfo)
	{
		//const char * 可以隐式类型转换为 string
		this->m_Error = errorInfo;
	}

	myOutOfRangeException(string errorInfo)
	{
		this->m_Error = errorInfo;
	}


	~myOutOfRangeException()
	{
		cout << "析构函数调用" << endl;
	}


	//重写父类虚函数  what

	/*
	virtual char const* what() const
	{
	return _Data._What ? _Data._What : "Unknown exception";
	}
	*/

	 char const * what()const
	{
		return this->m_Error.c_str();
	}


	string m_Error;
};



class Person
{
public:

	Person(int age)
	{
		if (age < 0 || age > 150)
		{
			throw myOutOfRangeException("我自己的异常 年龄必须在0~150之间");
		}

		this->m_Age = age;
	}

	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}

	int m_Age;
};



void test01()
{
	try
	{
		Person p1(1000);
	}
	catch (exception & e)
	{
		cout << e.what() << endl;
		cout << "12345" << endl;
	}
}

int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}



