#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//父类
class Base
{
public:
	Base()
	{
		cout << "Base默认构造函数调用" << endl;
	}
	~Base()
	{
		cout << "Base析构函数调用" << endl;
	}
};

//其他类
class Other
{
public:
	Other()
	{
		cout << "Other默认构造函数调用" << endl;
	}
	~Other()
	{
		cout << "Other析构函数调用" << endl;
	}
};

//子类
class Son:public Base
{
public:
	Son()
	{
		cout << "Son默认构造函数调用" << endl;
	}
	~Son()
	{
		cout << "Son析构函数调用" << endl;
	}

	Other other; 
};



void test01()
{
	//当创建子类对象时，先调用父类构造函数，再调用其他类对象构造，
	//再调用自身构造，析构的顺序与构造相反。
	Son son; 
}

class Base2
{
public:
	Base2(int a)
	{
		this->m_A = a;
		cout << "Base2默认构造函数调用" << endl;
	}
	~Base2()
	{
		cout << "Base2析构函数调用" << endl;
	}

	int m_A;
};


class Son2 :public Base2
{
public:
	//利用初始化列表方式 显式地调用父类中其他的构造函数
	Son2(int a = 1000) :Base2(a)
	{
		cout << "Son2默认构造函数调用" << endl;
	}
	~Son2()
	{
		cout << "Son2析构函数调用" << endl;
	}
};


//父类中 有些函数 子类是不会继承下去的
// 默认构造   拷贝构造   析构   operator=

void test02()
{
	Son2 s;
	cout << s.m_A << endl;
}



int main()
{

	test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
