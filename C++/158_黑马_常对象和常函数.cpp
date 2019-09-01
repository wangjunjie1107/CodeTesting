#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Person
{
public:

	int m_Age;

	// 如果加了mutable的关键字，
	// 这样的成员属性即使在常函数或者常对象中，也可以修改
	mutable int m_Height;
	

	Person(int age)
	{
		this->m_Age = age;
	}

	//this指针的本质 指针常量
	//每个非静态成员函数内部都加了this指针
	//this指针的类型 Person * const this 
	//指针指向不可以修改 指针指向的值可以修改

	//如果想让指针指向的值 也不可以修改 
	//const Person * const this



	//当成员函数后面写了const，这个函数称为常函数
	void showAge()const //const修饰的是this指针 
	{
		//this = NULL;//错误
		//this->m_Age = 200; //this指针指向的值不可以修改
	
		//mutable修饰的对象可修改
		this->m_Height = 180;
	}

	void showAge2()
	{
		//常对象不可以调用普通函数，
		//因为普通函数内部可以对属性修改
		m_Age = 1000;
	}
};

void test01()
{
	Person p1(100);

	p1.showAge(); //普通对象也可以调用常函数

	//普通对象 只要public的变量都可以修改
	p1.m_Age = 200;
	p1.m_Height = 200;

	
}

void test02()
{
	//常对象
	const Person p1(10);

	//p1.m_Age = 111;//error  不可修改
	
	//加了关键字  mutable  的变量 m_Height，
	//在常对象上也可以修改
	p1.m_Height = 222;
	
	
	p1.showAge(); //常对象可以调用常函数

	//p1.showAge2();//error 常对象不可以调用普通函数


	
}
