#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
#include "myArray.hpp"

//打印Int数组
void printIntArray(MyArray<int> &arr)
{
	for (int i = 0;i < arr.getSize();i++)
	{
		cout << arr[i] << endl;
	}
}
//测试int数组
void testIntArray()
{
	MyArray<int> p1(10);

	for (int i = 0;i < p1.getCapacity();i++)
	{
		p1.push_Back(i + 100); //尾插法赋值
	}

	printIntArray(p1);

	//=运算符重载
	cout << "=运算符重载" << endl;
	MyArray<int>p2(10);
	p2 = p1;
	printIntArray(p2);

	//拷贝构造
	cout << "拷贝构造" << endl;
	MyArray<int>p3(p2);
	printIntArray(p2);


}

//测试person数组
class Person
{
public:

	//默认构造
	Person() {};//如果要通过模板类 创建另一种类的数组，需要有默认构造

				//有参构造
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
		cout << "姓名：" << arr[i].m_Name << "  年龄：" << arr[i].m_age << endl;
	}
}
void testPersonArray()
{
	MyArray<Person>personArray(10);//创建10个person类，并调用默认构造

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