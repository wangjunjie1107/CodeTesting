#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Base
{
public:
	Base()
	{
		this->m_A = 10;
	}

	void func()
	{
		cout << "Base下的func调用" << endl;
	}

	void func(int a)
	{
		cout << "Base下的func（int a)调用" << endl;
	}

	int m_A;
};


class Son :public Base
{
public:
	Son()
	{
		this->m_A = 20;
	}


	void func()
	{
		cout << "Son下的func调用" << endl;
	}

	int m_A;
};

//非静态 同名的成员变量
void test01()
{
	Son s;
	//此时访问的是子类中的 m_A
	cout << "Son ... m_A = " << s.m_A << endl;
	
	//如果想访问父类中同名的成员变量  需要加作用域
	cout << "Base ... m_A = " << s.Base::m_A << endl;
}

//非静态 同名 成员函数
void test02()
{
	Son s; 

	s.func();
	//如果想访问父类中同名的成员函数，需要加作用域
	s.Base::func();

	//如果子类出现了和父类同名的成员函数，
	//子类的成员函数会 隐藏掉 父类中所有同名的成员函数
	//子类重定义父类的成员函数，如果想调用父类中同名成员函数，必须加作用域
	s.Base::func(10);
}


int main()
{

	test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
