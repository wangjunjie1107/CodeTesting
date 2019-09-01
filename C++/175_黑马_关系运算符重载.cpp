#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	string m_Name;
	int m_Age;
	
	Person() {};
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	bool operator==(const Person & p)
	{
		return this->m_Age == p.m_Age && this->m_Name == p.m_Name;
	}

	bool operator!=(const Person & p)
	{
		return !(this->m_Age == p.m_Age && this->m_Name == p.m_Name);
	
	}

};
void test01()
{
	Person p1("wangjunjie", 18);
	Person p2("wangjunjie", 18);

	if (p1 == p2)
	{
		cout << "相等" << endl;
	}
	else if (p1 != p2)
	{
		cout << "不相等" << endl;
	}
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
