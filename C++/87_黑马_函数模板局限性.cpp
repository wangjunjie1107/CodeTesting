#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>


class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};
//ģ�岢������ͨ��
//���������������ͣ����Ծ��廯ʵ�֣��������

template<class T>
bool myCompare(T &a, T &b)
{
	return a == b;
}


//���þ��廯ʵ�֣����������������
//�﷨��template<> ����ֵ���� ������(�����������ͣ�
template<> bool myCompare(Person &a, Person &b)
{
	cout << "���廯ʵ��" << endl;
	if (a.m_Name == b.m_Name && a.m_Age == b.m_Age)
	{
		return true;
	}
	return false;
}


void test01()
{
	int a = 10;
	int b = 10;
	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "a==b" << endl;
	}
}


void test02()
{
	Person p1("tom", 10);
	Person p2("tom", 10);

	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1==p2" << endl;
	}
	else
	{
		cout << "p1!=p2" << endl;
	}

}
int main() 
{

	test01();
	test02();


	system("pause");
	return EXIT_SUCCESS;
}
