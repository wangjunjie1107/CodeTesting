#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "myArray.hpp"
#include <string>

void printIntArray(MyArray<int> & arr)
{
	for (int i = 0;i < arr.getSize();i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	cout << "------------------------\n";
	cout << "���� int �������飺" << endl;


	MyArray<int>int_array(10);
	for (int i = 0;i < 10;i++)
	{
		int_array.pushback(i + 10);
	}

	printIntArray(int_array);

	cout << "��������Ϊ�� " << int_array.getCapacity() << endl;
	cout << "�����СΪ�� " << int_array.getSize() << endl;

	int_array.pushback(100); //�������� �޷�����
}




//����Person����
class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

//person���  <<  ���������
ostream & operator<<(ostream & cout, const Person & p)
{
	cout << "���� ��" << p.m_Name << " ���䣺" << p.m_Age << endl;
	return cout;
}

void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize();i++)
	{
		cout << "������ " << arr[i].m_Name << " ���䣺 " << arr[i].m_Age << endl;
	}
}

void test02()
{

	cout << "------------------------\n";
	cout << "�����Զ����������飺" << endl;
	MyArray<Person>personArray(10);

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);
	Person p6;
	p6 = p5;
	Person p7(p6);


	personArray.pushback(p1);
	personArray.pushback(p2);
	personArray.pushback(p3);
	personArray.pushback(p4);
	personArray.pushback(p5);
	personArray.pushback(p6);
	personArray.pushback(p7);

	cout << "personArray[0] = " << personArray[0] << endl;

	printPersonArray(personArray);
}


int main()
{

	test01();
	test02();


	system("pause");
	return EXIT_SUCCESS;
}