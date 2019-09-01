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
		cout << "showPerson函数调用" << endl;
	}

	void showAge()
	{

		//因为 p 指向NULL，所以this指针也指向空  
		//因此 this == NULL;

		if (this == NULL)
		{
			cout << "this 指针指向空" << endl;
			return;
		}

		cout << "showAge函数调用 age = " << m_Age << endl;
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

