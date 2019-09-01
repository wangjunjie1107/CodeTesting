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

	//жиди==КХ
	bool operator==(Person & p)
	{
		return this->m_Age == p.m_Age && this->m_Name == p.m_Name;
	}

	//жиди != КХ
	bool operator!=(Person & p)
	{
		return !(this->m_Age == p.m_Age && this->m_Name == p.m_Name);
	}

	string m_Name;
	int m_Age;
};


void test01()
{
	Person p1("Tom", 19);
	Person p2("Tom", 18);

	if (p1 == p2)
	{
		cout << "p1 == p2" << endl;
	}
	else
	{
		cout << "p1!=p2" << endl;
	}

	if (p1 != p2)
	{
		cout << "p1!=p2" << endl;
	}
	else
	{
		cout << "p1==p2" << endl;
	}

}
int main()
{
	test01();
	
	system("pause");
	return EXIT_SUCCESS;

}
