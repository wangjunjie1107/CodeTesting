#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//模板中 也可以使用默认参数
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
		cout << "姓名: " << this->m_Name << "  年龄： " << this->m_Age << endl;
	}


	T1 m_Name;
	T2 m_Age;
};

//1、指定传入类型
void doWork1(Person<string, int> & p1)
{
	p1.showPerson();
}

void test01()
{
	Person<string, int>p1("wangjunjie", 18);
	doWork1(p1);
}

//2、将参数模板化
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

//2、类模板化
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
	cout << "指定传入类型" << endl;
	test01();

	cout << "将参数模板化" << endl;
	test02();

	cout << "将类模板化" << endl;
	test03();

	

	system("pause");
	return EXIT_SUCCESS;

}
