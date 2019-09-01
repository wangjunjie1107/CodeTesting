#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<stdexcept>


//提供自己的异常类
class myOutOfRangeException :public exception
{
public:
	//拷贝构造
	myOutOfRangeException(const char * errInfo)
	{
		this->m_Error = string(errInfo);//const char * 可以隐式类型转换为 string
	}

	//有参构造
	myOutOfRangeException(string errInfo)
	{
		this->m_Error = errInfo;
	}

	//析构函数
	virtual ~myOutOfRangeException() {};

	virtual const char * what() const //函数名后的const表示此函数是一个常函数
	{
		//string不会隐式转为 const char *
		//string 转 const char * 调用成员函数  .c_str();
		return this->m_Error.c_str();
	}



	string m_Error;//内部维护错误信息的字符串
};


class Person
{
public:
	Person(int age)
	{
		if (age < 0 || age > 150)
		{
			//有参构造
			//myOutOfRangeException("我自己的异常，年龄越界！") 
			
			throw myOutOfRangeException("我自己的异常，年龄越界！");
		}

		this->m_Age = age;
	}

	int m_Age;
};

void test()
{
	try
	{
		Person p1(160);
	}
	catch (exception & e)
	{
		//exception & e  父类指针引用
		//e.what()  多态的使用  父类指针指向子类对象
		cout << e.what() << endl;
	}
}

int main()
{
	test();


	system("pause");
	return EXIT_SUCCESS;
}
