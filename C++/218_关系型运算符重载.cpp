#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	//重载 == 号 字符串版本
	//string operator==(const Person& p)
	//{
	//	//年龄不同
	//	if (this->m_Age != p.m_Age)
	//	{
	//		return "Age error";
	//	}

	//	//姓名不同
	//	if (this->m_Name != p.m_Name)
	//	{
	//		return "Name error";
	//	}

	//	
	//	return "it's same";

	//}

	//重载 == 号 bool类型版本
	bool operator==(const Person& p)
	{
		return this->m_Age == p.m_Age &&
			   this->m_Name == p.m_Name;
	}

	//重载 != 号 bool类型版本
	bool operator!=(const Person& p)
	{
		return !(this->m_Age == p.m_Age &&
			this->m_Name == p.m_Name);
	}

	string m_Name;
	int m_Age;
};


void test01()
{
	char str1[] = "wangjunjie";
	char str2[] = "wangjunjie";

	if (str1 == str2)
	{
		cout << "Yes, it's same." << endl;
	}

	Person p1("wangjunjie", 18);
	Person p2("wangjunjie", 19);
	Person p3("Wangjunjie", 18);
	Person p4("wangjunjie", 18);

	cout << (p1 == p2) << endl;
	cout << (p1 == p3) << endl;
	cout << (p1 == p4) << endl;

} 


int main() 
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
