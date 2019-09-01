#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	//默认构造
	Person()
	{
		cout << "Person的默认构造" << endl;
		this->m_Name = NULL;
	}

	//有参构造
	Person(const char* name)
	{
		cout << "Person的有参构造" << endl;
		this->m_Name = new char[strlen(name) + 1];
		strcpy(this->m_Name, name);
	}

	//拷贝构造
	Person(const Person& p)
	{
		cout << "Person的拷贝构造" << endl;
		this->m_Name = new char[strlen(p.m_Name) + 1];
		strcpy(this->m_Name, p.m_Name);
	}


	//重载 = 运算符  避免浅拷贝
	Person& operator=(const Person& p)
	{
		cout << "Person的 = 运算符重载" << endl;

		if (this->m_Name != NULL)
		{
			delete [] this->m_Name;
			this->m_Name = NULL;
		}
		this->m_Name = new char[strlen(p.m_Name) + 1];
		strcpy(this->m_Name, p.m_Name);
		return *this;
	}

	~Person()
	{
		cout << this->m_Name <<"    的析构函数" << endl;
		if (this->m_Name != NULL)
		{
			delete [] this->m_Name;
			this->m_Name = NULL;
		}
	}

	char* m_Name;
};

void test01()
{
	Person p1("Tom");			//有参构造
	Person p2("Wangjunjie");	//有参构造
	Person p3;					//默认构造
	p3 = p2;					// = 运算符重载
	Person p4(p3);				//拷贝构造


	cout << "p1 = " << p1.m_Name << endl;
	cout << "p2 = " << p2.m_Name << endl;
	cout << "p3 = " << p3.m_Name << endl;
	cout << "p4 = " << p4.m_Name << endl;

}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;

}
