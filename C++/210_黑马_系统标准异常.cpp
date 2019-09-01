#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

#include<exception>  //标准异常头文件


class Person
{
public:
	Person(int age)
	{
		if (age > 150)
		{
			throw out_of_range("年龄过大！");  //抛出子类异常
		}
		else if (age < 0)
		{
			throw length_error("年龄过小！");
		}


		this->m_Age = age;
	}

	int m_Age;
};

void test01()
{
	try
	{
		Person p2(-1);  //测试错误
	}
	catch (out_of_range & e)
	{
		cout<< e.what() << endl;
	}
	catch (length_error & e)
	{
		cout << e.what() << endl;
	}
	catch(exception & e)  //所有的异常的父类
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




