#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	Person() {};
	Person(int a,int b):m_A(a),m_B(b){}

	//通过成员函数重载+运算符
	/*Person operator+(Person & p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}*/
	int m_A;
	int m_B;
};

//通过全局函数实现加号运算符重载
Person operator+(Person & p1, Person & p2)
{
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

//通过全局函数实现加号运算符重载
Person operator+(Person & p1, int num)
{
	Person temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}

//通过全局函数实现乘号运算符重载
Person operator*(Person & p1, int num)
{
	Person temp;
	temp.m_A = p1.m_A * num;
	temp.m_B = p1.m_B * num;
	return temp;
}

void test01()
{
	//有参构造函数调用
	Person p1(10, 10);
	Person p2(10, 10);

	//成员函数 本质调用
	//Person p3 = p1.operator+(p2);
	//p3 = p1 + p2;//简化
	
	//全局函数 本质调用
	//Person p4 = operator+(p1,p2);
	//p4 = p1 + p2;//简化



	Person p5 = p1 + p2;
	cout << "p5的m_A = " << p5.m_A << " p5的m_B = " << p5.m_B << endl;
	
	//运算符重载 可不可以发生函数重载？ 可以
	//以下两个全局函数发生重载
	//Person operator+(Person & p1, Person & p2)
	//Person operator+(Person & p1, int num)
	Person p6 = p1 + 200;
	cout << "p6的m_A = " << p6.m_A << " p6的m_B = " << p6.m_B << endl;


	//运算符重载 乘法
	Person p7 = p1 * 123;
	cout << "p7的m_A = " << p7.m_A << " p7的m_B = " << p7.m_B << endl;

}

int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
