#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
#include "myArray.hpp"

//��ӡInt����
void printIntArray(MyArray<int> &arr)
{
	for (int i = 0;i < arr.getSize();i++)
	{
		cout << arr[i] << endl;
	}
}
//����int����
void testIntArray()
{
	MyArray<int> p1(10);

	for (int i = 0;i < p1.getCapacity();i++)
	{
		p1.push_Back(i + 100); //β�巨��ֵ
	}

	printIntArray(p1);

	//=���������
	cout << "=���������" << endl;
	MyArray<int>p2(10);
	p2 = p1;
	printIntArray(p2);

	//��������
	cout << "��������" << endl;
	MyArray<int>p3(p2);
	printIntArray(p2);


}

//����person����
class Person
{
public:

	//Ĭ�Ϲ���
	Person() {};//���Ҫͨ��ģ���� ������һ��������飬��Ҫ��Ĭ�Ϲ���

				//�вι���
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_age = age;
	}


	string m_Name;
	int m_age;
};


void printPersonArray(MyArray<Person>arr)
{
	for (int i = 0;i < arr.getSize();i++)
	{
		cout << "������" << arr[i].m_Name << "  ���䣺" << arr[i].m_age << endl;
	}
}
void testPersonArray()
{
	MyArray<Person>personArray(10);//����10��person�࣬������Ĭ�Ϲ���

	Person p1("aaa", 10);
	Person p2("fff", 60);
	Person p3("bbb", 20);
	Person p4("ccc", 30);
	Person p5("ddd", 40);
	Person p6("eee", 50);


	personArray.push_Back(p1);
	personArray.push_Back(p2);
	personArray.push_Back(p3);
	personArray.push_Back(p4);
	personArray.push_Back(p5);
	personArray.push_Back(p6);

	printPersonArray(personArray);


}

int main()
{
	//testIntArray();

	testPersonArray();


	system("pause");
	return EXIT_SUCCESS;
}