#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//ģ���� Ҳ����ʹ��Ĭ�ϲ���
template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	void showPerson()
	{
		cout << "����: " << this->m_Name << "  ���䣺 " << this->m_Age << endl;
	}


	T1 m_Name;
	T2 m_Age;
};

//1��ָ����������
void doWork1(Person<string, int> & p1)
{
	p1.showPerson();
}

void test01()
{
	Person<string, int>p1("wangjunjie", 18);
	doWork1(p1);
}

//2��������ģ�廯
template<class T1,class T2>
void doWork2(Person<T1, T2> & p2)
{
	p2.showPerson();
}

void test02()
{
	Person<string, int>p2("wangjunjie", 18);
	doWork1(p2);
}

//2����ģ�廯
template<class T>
void doWork3(T & p3)
{
	p3.showPerson();
}

void test03()
{
	Person<string, int>p3("wangjunjie", 18);
	doWork3(p3);
}


int main()
{
	cout << "ָ����������" << endl;
	test01();

	cout << "������ģ�廯" << endl;
	test02();

	cout << "����ģ�廯" << endl;
	test03();

	

	system("pause");
	return EXIT_SUCCESS;

}
