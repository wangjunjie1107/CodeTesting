#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


template<class T1, class T2>
class Person
{
public:
	
	Person(T1 nam,T2 age);

	void showPerson();

	T1 m_Name;
	T2 m_Age;
};

template<class T1, class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}

template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "ÐÕÃû£º " << this->m_Name << endl;
	cout << "ÄêÁä£º " << this->m_Age << endl;

}


void test()
{
	Person<string, int>p1("wangjunjie", 25);
	p1.showPerson();
}
int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;

}
