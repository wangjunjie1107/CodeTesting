#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

//先让编译器看到Person类声明
template<class T1, class T2>class Person;

//再让编译器看到友元函数的存在    函数模板 printPerson
template<class T1, class T2>  void printPerson(Person<T1, T2>& p);


template<class T1, class T2>  
void printPerson2(Person<T1, T2>& p)
{
	cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;

}

template<class T1, class T2>
class Person
{
	//函数模板做友元函数的类外实现  必须先将此函数模板做声明 
	friend void printPerson<>(Person<T1, T2>& p);

	friend void printPerson2<>(Person<T1, T2>& p);

public:

	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};

//函数模板做 友元函数 的类外实现
template<class T1, class T2>
void printPerson(Person<T1, T2>& p)
{
	cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
}


void test01()
{
	Person<string, int>p("Tom", 222);

	printPerson(p);
	printPerson2(p);
}

int main() {

	test01();

	system("pause");
	return EXIT_SUCCESS;
}











