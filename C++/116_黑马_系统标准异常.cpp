#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <stdexcept>  //标准异常头文件

class Person
{
public:
	Person(int age)
	{
		if (age < 0 || age>150)
		{
			throw out_of_range("年龄越界！");
		}
		this->m_Age = age;
	}

	int m_Age;
};


void test01()
{
	try
	{
		Person p1(160);
	}
	catch (exception & e)
	{
		cout << e.what() << endl;
	}
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

















