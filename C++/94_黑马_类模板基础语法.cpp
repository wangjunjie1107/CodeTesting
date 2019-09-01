#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


template<class TYPENAME,class TYPEAGE = int>
class Person
{
public:
	Person(TYPENAME name,TYPEAGE age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	void showPerson()
	{
		cout << "姓名： " << this->m_Name << "  年龄：" << this->m_Age << endl;
	}


	TYPENAME m_Name;
	TYPEAGE m_Age;
};

void test01()
{
	//类模板使用时候，不可以用自动类型推导
	//只能用显示指定类型
	Person<string>p1("Tom", 20);
	p1.showPerson();

}


int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;

}
