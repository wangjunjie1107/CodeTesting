#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:

	Person() {};

	//初始化列表给属性赋值
	Person(int a, int b, int c):m_A(a),m_B(b),m_C(c)
	{
		
	}

	int m_A;
	int m_B;
	int m_C;
};

void test01()
{
	Person p(10, 20, 30);

	cout << "m_A = " << p.m_A << endl;
	cout << "m_B = " << p.m_B << endl;
	cout << "m_C = " << p.m_C << endl;

	Person p2(100, 200, 300);
	cout << "m_A = " << p2.m_A << endl;
	cout << "m_B = " << p2.m_B << endl;
	cout << "m_C = " << p2.m_C << endl;

	Person p3;//要有默认构造函数
}


int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
