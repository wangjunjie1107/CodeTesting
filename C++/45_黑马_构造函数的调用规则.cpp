#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//1、C++编译器会默认给一个类 至少添加3个函数  
// 默认构造  空实现
// 析构函数  空实现
// 拷贝构造  值拷贝


//2、如果我们提供了 有参构造函数，那么编译器就不提供默认构造函数了，但是依然提供拷贝构造函数

//3、如果我们提供了  拷贝构造函数，那么编译器就不提供 其他普通构造函数了

class Person
{
public:

	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}


	Person(int a)
	{
		cout << "Person的有参构造函数调用" << endl;
	}

	//拷贝构造  //值传递的本质 就是调用 拷贝构造函数
	Person(const Person &p)
	{
		cout << "Person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age; //默认的拷贝构造函数  会写这行代码
	}

	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}

	int m_Age;
};

void test01()
{
	Person p1;//默认构造函数调用
	p1.m_Age = 100;

	Person p2 = p1;//隐式转换法 Person p2 = Person(p1);
	cout << "p2的年龄为： " << p2.m_Age << endl;

}
int main() 
{
	test01();
	
	system("pause");
	return EXIT_SUCCESS;
}
