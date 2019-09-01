#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Base1
{
public:
	Base1()
	{
		this->m_A = 10;
	}

	int m_A;
};

class Base2
{
public:
	Base2()
	{
		this->m_A = 20;
	}

	int m_A;
};


//多继承语法
//class 子类： 继承方式 父类1， 继承方式 父类2
class Son :public Base1, public Base2
{
public:
	int m_C;
	int m_D;
};

void test01()
{
	Son s;

	cout << "Base 1 m_A = " << s.Base1::m_A << endl;
	cout << "Base 2 m_A = " << s.Base2::m_A << endl;
	cout << "sizeof son = " << sizeof(Son) << endl; // 16


}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
