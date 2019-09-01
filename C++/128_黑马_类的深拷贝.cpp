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
	
	//�Լ��ṩ�������캯�� ʵ�����
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
	Person p1("wangjunjie", 11); //�вι���
	
	cout << "p1��������" << p1.m_Name << " ���䣺 " << p1.m_Age << endl;

	Person p2 = p1; //��������  ���

	cout << "p2��������" << p2.m_Name << " ���䣺 " << p2.m_Age << endl;

}


int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
