#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


class Person
{
public:
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	string m_Name;
	int m_Age;
};

template<class T>
bool myCompare(T &a, T &b)
{
	return a == b;
}


template<> bool myCompare(Person &a, Person &b)
{
	if (a.m_Age == b.m_Age && a.m_Name == b.m_Name)
	{
		return true;
	}
	else
		return false;
}

void test()
{
	Person p1("wangjunjie",18);
	Person p2("wangjunjie", 18);

	if (myCompare(p1, p2))
	{
		cout << "p1==p2" << endl;
	}
	else
		cout << "p1!=p2" << endl;

}
int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;

}
