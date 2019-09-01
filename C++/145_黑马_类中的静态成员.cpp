#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//静态成员变量 

//1、所有对象都共享同一份静态成员
//2、在编译阶段就分配了内存
//3、必须在类内声明、类外初始化

class Person
{
public:
	Person()
	{
		// m_A = 100; 不要在构造函数给静态成员变量初始化，已经晚了

	}

	//只能访问静态成员变量
	static void func()//静态成员函数 只有一份
	{
		cout << "func静态成员函数调用" << endl;
		m_A = 1000; //静态成员变量可以修改
		//m_C = 555; //在静态函数中，非静态成员变量无法修改
	}

	//非静态成员函数 
	//可以访问静态变量和非静态成员变量
	void func2()
	{
		m_C = 444;
		m_A = 555;
	}
	int m_C;
	static int m_A;

private:
	static int m_B; //私有静态成员变量

	static void func3() //私有静态成员函数 类外访问不到
	{
		cout << "func3静态成员函数调用" << endl;
	}
};

//静态成员变量的类外初始化
int Person::m_A = 100;  //若不初始化会 则程序会出错

int Person::m_B = 100;


//1、基本语法
void test01()
{
	Person p1;
	Person p2;

	//通过p1修改m_A，p2访问时候也是999，
	//原因共享同一份数据
	p1.m_A = 999;
	cout << p2.m_A << endl;
}

//2、静态成员变量和函数的访问方式
void test02()
{
	//1、通过对象访问
	Person p1;
	cout << p1.m_A << endl;
	p1.func();
	
	
	//2、直接通过类名访问
	Person::m_A;
	Person::func();

	//访问不到 私有权限下静态成员函数
	//Person::func3(); 

}


//3、静态成员变量也是有访问权限的
void test03()
{
	Person p1;
	p1.m_A;//公共权限

	//p1.m_B;//私有权限 无法访问
}


int main() {

	//test01();



	system("pause");
	return EXIT_SUCCESS;
}
