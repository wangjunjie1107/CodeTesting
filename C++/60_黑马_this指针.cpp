#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
using namespace std;

//	thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//	this ָ����Խ��������ͻ
//	this ָ����Է��ص��ú����ı���  ��thisָ����н�����
class Person
{
public:
	Person(int age)
	{
		this->age = age;
	}


	Person & personAddAge(Person & p)
	{
		this->age += p.age;
		return *this;//*this ���� p2 �ı���
	}
	int age;
};

void test()
{
	Person p1(10);
	Person p2(10);

	p2.personAddAge(p1).personAddAge(p1).personAddAge(p1);

	cout << p2.age << endl;
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
