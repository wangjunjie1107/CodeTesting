#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


template<class TYPENAME,class TYPEAGE = int>
class Person
{
public:
	Person(TYPENAME name,TYPEAGE age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	void showPerson()
	{
		cout << "������ " << this->m_Name << "  ���䣺" << this->m_Age << endl;
	}


	TYPENAME m_Name;
	TYPEAGE m_Age;
};

void test01()
{
	//��ģ��ʹ��ʱ�򣬲��������Զ������Ƶ�
	//ֻ������ʾָ������
	Person<string>p1("Tom", 20);
	p1.showPerson();

}


int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;

}
