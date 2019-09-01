#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Base1
{
public:
	Base1()
	{
		this->m_A = 10;
	}
	int m_A;
	

protected:
	double m_B;
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
// class 子类： 继承方式 父类1 ， 继承方式 父类2 
class Son :public Base1, public Base2
{
public:

	int m_C;
	int m_D;
};

void test01()
{
	Son s;
	//如果两个父类中 拥有同名成员，必须加作用域区分
	cout << "Base 1 m_A = " << s.Base1::m_A << endl;
	cout << "Base 2 m_A = " << s.Base2::m_A << endl;
	//cout << "m_B = " << s.m_B << endl;
	cout << "sizeof Base1 = " << sizeof(Base1) << endl; // 16 内存对齐
	cout << "sizeof Base2 = " << sizeof(Base2) << endl; // 4 

	cout << "sizeof Son = " << sizeof(Son) << endl; // 32 内存对齐
}

int main() {

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
