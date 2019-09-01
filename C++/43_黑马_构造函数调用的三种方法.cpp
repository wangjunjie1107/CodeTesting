#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

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

	Person(const Person &p)
	{
		cout << "Person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
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

	//1、括号法
	Person p1(10);//有参构造函数调用

	p1.m_Age = 18;
	Person p2(p1); //拷贝构造函数

	//不要用括号法 调用默认构造函数
	//编译器会认为是函数调用
	//Person p();

	//2、显示法
	Person p3 = Person(10);//显式有参构造函数调用
	Person p4 = Person(p3);//显示拷贝构造函数调用

	
	//匿名对象 特点：当本行执行完毕，立即释放
	//相当于有参构造函数调用
	Person(10);

	// 编译器会认为写了 Person p4  
	//如果已经有p4就是重定义 匿名对象放到右值没问题
	Person(p4);

	////隐式转换法  可读性低
	Person p5 = 10;// 相当于 Person p5 = Person(10); 
	Person p6 = p5; // 隐式转为 Person p6 = Person(p5);
}
int main() 
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
