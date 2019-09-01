#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//�ṩ�Լ�Խ���쳣��
class myOutOfRangeException :public exception
{
public:
	
	myOutOfRangeException(const char * errorInfo)
	{
		//const char * ������ʽ����ת��Ϊ string
		this->m_Error = errorInfo;
	}

	myOutOfRangeException(string errorInfo)
	{
		this->m_Error = errorInfo;
	}


	~myOutOfRangeException()
	{
		cout << "������������" << endl;
	}


	//��д�����麯��  what

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
			throw myOutOfRangeException("���Լ����쳣 ���������0~150֮��");
		}

		this->m_Age = age;
	}

	~Person()
	{
		cout << "Person��������������" << endl;
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



