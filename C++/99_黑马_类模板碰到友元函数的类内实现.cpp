#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

template<class T1,class T2>
class Person
{
	friend void printPerson(Person<T1, T2>&p)
	{
		cout << "ÐÕÃû£º" << p.m_Name << " ÄêÁä£º" << p.m_Age << endl;
	}
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

void test01()
{
	Person<string, int>p1("wangjunjie", 25);
	
	printPerson(p1);
}
int main()
{

	test01();


	system("pause");
	return EXIT_SUCCESS;

}
