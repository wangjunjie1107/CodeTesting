#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;


class Person
{
public:

	void func()
	{
		//谁调用成员函数，this指针就指向谁
		this->m_A = 100; 
		
		//对于非静态成员变量，非静态成员函数 做了区分的操作
		m_A = 100;
		m_B = 100;
	}

	static void func2()
	{
		//m_A = 100; 非静态成员变量 不可以访问
		m_B = 100;
	}

	int m_A;		//0-7
	double m_C;		//8-15
	static int m_B;
};

int Person::m_B = 10;

void test01()
{
	//空类占用的内存空间？ 1
	//通过空类也是可以实例化对象的,每个对象在内存中都应该有独一无二的地址
	//空类也可以 创建数组，每个元素也应该是独一无二的内存空间 
	//Person p1;
	//Person p2;
	//Person pArray[10]; //pArray[0] pArray[1]

	Person p;
	p.func();//this指针 指向 被调用的成员函数 所属的对象。

	Person p2;
	p2.func();

	//1、非静态成员变量		属于类的对象上

	//2、静态成员变量		不属于类对象上
	//3、非静态成员函数		不属于类对象上  只有一份实例
	//4、静态成员函数		不属于类对象上  只有一份实例

	cout << "sizeof = " << sizeof(p) << endl;//16
	
}

int main() 
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

