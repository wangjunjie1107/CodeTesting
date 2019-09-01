#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

//���ñ���������Person������
template<class T1, class T2>class Person;

//���ñ�����������Ԫ�����Ĵ���    ����ģ�� printPerson
template<class T1, class T2>  void printPerson(Person<T1, T2>& p);


template<class T1, class T2>  
void printPerson2(Person<T1, T2>& p)
{
	cout << "������ " << p.m_Name << " ���䣺 " << p.m_Age << endl;

}

template<class T1, class T2>
class Person
{
	//����ģ������Ԫ����������ʵ��  �����Ƚ��˺���ģ�������� 
	friend void printPerson<>(Person<T1, T2>& p);

	friend void printPerson2<>(Person<T1, T2>& p);

public:

	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};

//����ģ���� ��Ԫ���� ������ʵ��
template<class T1, class T2>
void printPerson(Person<T1, T2>& p)
{
	cout << "������ " << p.m_Name << " ���䣺 " << p.m_Age << endl;
}


void test01()
{
	Person<string, int>p("Tom", 222);

	printPerson(p);
	printPerson2(p);
}

int main() {

	test01();

	system("pause");
	return EXIT_SUCCESS;
}











