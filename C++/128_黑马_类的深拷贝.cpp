#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	Person() {};

	Person(char * name, int age)
	{
		this->m_Name = new char[strlen(name) + 1];
		strcpy(this->m_Name, name);

		this->m_Age = age;
	}
	
	//自己提供拷贝构造函数 实现深拷贝
	Person(const Person & p)
	{
		this->m_Age = p.m_Age;

		if (this->m_Name != NULL)
		{
			delete []this->m_Name;
			this->m_Name = NULL;
		}

		this->m_Name = new char[strlen(p.m_Name) + 1];
		strcpy(this->m_Name, p.m_Name);
	}

	~Person()
	{
		if (this->m_Name != NULL)
		{
			delete[]this->m_Name;
			this->m_Name = NULL;
		}
	}



	char * m_Name;
	int m_Age;
};

void test01()
{
	Person p1("wangjunjie", 11); //有参构造
	
	cout << "p1的姓名：" << p1.m_Name << " 年龄： " << p1.m_Age << endl;

	Person p2 = p1; //拷贝构造  深拷贝

	cout << "p2的姓名：" << p2.m_Name << " 年龄： " << p2.m_Age << endl;

}


int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
