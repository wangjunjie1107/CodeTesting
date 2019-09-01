#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

template<class T1,class T2>
class Person
{
	friend void showPerson(Person<T1,T2> & p)
	{
		//友元可以访问类内私有属性
		cout << "姓名： " << p.m_Name << " 年龄：" << p.m_Age << endl;
	}

public:
	Person(T1 name, T2 age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

private:
	T1 m_Name;
	T2 m_Age;
};


void test01()
{
	Person<string, int>p1("wangjunjie", 25);
	showPerson(p1);

	
}

int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
