#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Person
{
public:

	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	string m_Name;
	int m_Age;
};

//模板并不在真正通用
//对于特殊数据类型，可以具体化实现，解决问题

template<class T>
bool myCompare(T & a, T & b)
{
	return a == b;
}

//普通数据进行比较  可直接比较
void test01()
{
	int a = 10;
	int b = 80;
	if (myCompare(a, b))
	{
		cout << "a == b" << endl;
	}
	else
		cout << "a != b" << endl;
}

//自定义类型数据  进行比较 需要函数模板的具体化实现
//利用具体化实现，解决特殊数据类型
//语法： template <>  返回值类型  函数名 (处理数据类型..)

template <> bool myCompare(Person & p1, Person & p2)
{
	return p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name;
}

void test02()
{
	Person p1("Tom", 18);
	Person p2("wangjunjie", 18);
	if (myCompare(p1, p2)) //实现自定义类型的比较
	{
		cout << "p1 == p2" << endl;
	}
	else
		cout << "p1 != p2" << endl;
}
int main()
{

	test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
