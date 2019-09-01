#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;

class Person
{
public:

	Person(int age)
	{
		this->m_Age = age;
	}


	//this指针的本质  指针常量
	// 每个非静态成员函数内部都加了this指针  
	// this指针的类型  Person * const this  
	//this指针的指向不可以修改、指针指向的值可以修改
	// 如果想让指针指向的值 也不可以修改  const Person * const this
	
	//const修饰的是this指针
	//当成员函数后面写了const，这个函数称为常函数
	//常函数
	void showAge() const
	{
		//this = NULL;//this指针的指向不可以修改
		//this->m_Age = 200;//不加const时，this指针指向的值可以修改

		this->m_height = 122; //加了mutable以后，就可以修改
		
		cout << m_height << endl;
		cout << m_Age << endl;
	}

	void showAge2()
	{
		m_Age = 100;//常对象不可以调用普通函数，因为普通函数内部可以对属性修改
	}

	int m_Age;

	//如果加了mutable的关键字，这样的成员属性即使在常函数或者常对象中，也可以修改
	mutable int m_height;
};

void test01()
{
	Person p1(100);
	p1.showAge();
}

void test02()
{
	//常对象
	const Person p1(10);
	//p1.m_Age = 20;  常对象 不可以直接修改成员变量

	p1.showAge();//常对象可以调用常函数
	//p1.showAge2(); //常对象不可以调用普通函数，因为普通函数中可以修改成员变量

	p1.m_height = 200; //m_Height比较特殊，在常对象上也可以修改
}
int main() 
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

