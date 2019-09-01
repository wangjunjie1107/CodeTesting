#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>


template<class T1,class T2>
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
		cout << "姓名： " << this->m_Name << "  年龄： " << this->m_Age << endl;
	}

	
	T1 m_Name;
	T2 m_Age;
};

 
//1、传入指定类型  写了类的名称 写了参数类型
void doWork1(Person<string, int> & p1)
{
	p1.showPerson();
}

void test01()
{
	Person <string,int>p1("wangjunjie",25);
	doWork1(p1);
}


//2、将参数模板化  只写了类的名称  没有参数名称
template<class T1,class T2>
void doWork2(Person<T1, T2>&p2)
{
	//typeid(T1).name()  显示数据类型的名称
	cout << "T1 = " << typeid(T1).name() << endl;
	cout << "T2 = " << typeid(T2).name() << endl;
	p2.showPerson();
}

void test02()
{
	Person <string, int>p2("Jerry", 100);
	doWork2(p2);
}


//3、将类模板化  类的名称不写 直接模板化
template<class T>
void doWork3(T & p3)
{
	cout << "T = " << typeid(T).name() << endl;
	p3.showPerson();
}


void test03()
{
	Person <string, int>p3("Bill", 100);
	doWork3(p3);
}


int main() {

	test01();
	test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}
