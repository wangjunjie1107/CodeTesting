#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
	friend ostream & operator<<(ostream & cout, const Person & p);
public:
	Person(int a,int b) 
	{ 
		this->m_A = a;
		this->m_B = b; 
	};

	
	//通过成员函数重载  
	//p1 << cout;  //可以通过 但是不符合语法
	ostream & operator<<(ostream & cout)
	{
		cout << this->m_A << endl;
		cout << this->m_B << endl;

		return cout;
	}

private:
	int m_A;
	int m_B;
};

ostream & operator<<(ostream & cout, const Person & p)
{
	cout << p.m_A << "   " << p.m_B << endl;
	return cout;
}

//测试成员函数重载<<
void test01()
{
	Person p1(10, 10);
	p1 << cout;  //可以通过 但是不符合语法
	//cout << p1; //无法通过
}

//测试全局函数重载<<
void test02()
{
	Person p2(20, 20);
	cout << p2;  //符合语法 可以通过
}

int main() 
{

	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
