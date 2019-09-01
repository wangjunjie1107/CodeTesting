#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


//ģ���� Ҳ����ʹ��Ĭ�ϲ���
template<class T1,class T2>
class Person
{
public:

	Person() {};

	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "������ " << this->m_Name << " ���䣺 " << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;

};

//1������ָ������
void doWork(Person<string, int>&p)
{
	cout << "----------------------\n";
	p.showPerson();
}

void test01()
{
	Person<string, int>p1("Tom1", 100);
	doWork(p1);
}

//2��������ģ�廯
template<class T1,class T2>
void doWork2(Person<T1, T2> & p)
{
	cout << "----------------------\n";

	cout << "T1 = " << typeid(T1).name() << endl;
	cout << "T2 = " << typeid(T2).name() << endl;
	p.showPerson();
}

void test02()
{
	Person<string, int>p2("Tom2", 200);
	doWork2(p2);
}


//3������ģ�廯
template<class T3>
void doWork3(T3 & p)
{
	cout << "----------------------\n";

	cout << "T3 = " << typeid(T3).name() << endl;
	p.showPerson();
}

void test03()
{
	Person<string, int>p3("Tom3", 300);
	doWork3(p3);
}


int main()
{

	test01();
	test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}
