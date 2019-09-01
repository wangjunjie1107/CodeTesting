#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

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

class Son :public Base
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
	//Base base;
	Son son;  //当创建子类对象时候，先调用父类构造函数，再调用其他类对象构造，再调用自身构造，析构的顺序与构造相反
}


class Base2
{
public:
	Base2(int a)
	{
		this->m_A = a;
		cout << "Base2有参构造函数调用" << endl;
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
	Son2(int a = 1000) :Base2(a)  //利用初始化列表方式 显示调用父类中其他的构造函数
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


int main() {

	//test01();
	test02();

	system("pause");
	return 0;
}
