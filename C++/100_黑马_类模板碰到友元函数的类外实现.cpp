#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//先让编译器看到类声明
template<class T1, class T2>class Person;

//再让编译器看到友元函数声明
template<class T1, class T2>void printPerson(Person<T1, T2>&p);


//友元函数的类外实现1
template<class T1, class T2>
void printPerson2(Person<T1, T2>&p)
{
	cout << "姓名：" <<p.m_Name << " 年龄：" <<p.m_Age << endl;
}

template<class T1,class T2>
class Person
{
	friend void printPerson<>(Person<T1, T2>&p);

	friend void printPerson2<>(Person<T1, T2>&p);

public:

	Person(T1 name,T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};


//友元函数的类外实现2
template<class T1, class T2>
void printPerson(Person<T1, T2>&p)
{
cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
}


void test01()
{
	Person<string, int>p1("wangjunjie", 25);
	
	printPerson(p1);
	printPerson2(p1);
}
int main()
{

	test01();


	system("pause");
	return EXIT_SUCCESS;

}
