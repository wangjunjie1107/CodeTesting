#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	int m_Age;

	Person() {};

	Person(int age)
	{
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "showPerson�ĺ�������" << endl;
	}

	void showAge()
	{
		if (this == NULL)
		{
			return;
		}
		cout << "showAge�������� age = " << m_Age << endl;
	}
};

void test01()
{
	Person * p1 = NULL;

	p1->showPerson();
	p1->showAge();
}

int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}

