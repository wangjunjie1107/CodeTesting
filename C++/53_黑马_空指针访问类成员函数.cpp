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

	void showPerson()
	{
		cout << "showPerson��������" << endl;
	}

	void showAge()
	{

		//��Ϊ p ָ��NULL������thisָ��Ҳָ���  
		//��� this == NULL;

		if (this == NULL)
		{
			cout << "this ָ��ָ���" << endl;
			return;
		}

		cout << "showAge�������� age = " << m_Age << endl;
	}

	int m_Age;
};

void test01()
{
	Person * p = NULL;
	p->showPerson();
	p->showAge();
}
int main() 
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

