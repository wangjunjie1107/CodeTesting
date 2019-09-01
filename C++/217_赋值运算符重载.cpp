#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	//Ĭ�Ϲ���
	Person()
	{
		cout << "Person��Ĭ�Ϲ���" << endl;
		this->m_Name = NULL;
	}

	//�вι���
	Person(const char* name)
	{
		cout << "Person���вι���" << endl;
		this->m_Name = new char[strlen(name) + 1];
		strcpy(this->m_Name, name);
	}

	//��������
	Person(const Person& p)
	{
		cout << "Person�Ŀ�������" << endl;
		this->m_Name = new char[strlen(p.m_Name) + 1];
		strcpy(this->m_Name, p.m_Name);
	}


	//���� = �����  ����ǳ����
	Person& operator=(const Person& p)
	{
		cout << "Person�� = ���������" << endl;

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
		cout << this->m_Name <<"    ����������" << endl;
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
	Person p1("Tom");			//�вι���
	Person p2("Wangjunjie");	//�вι���
	Person p3;					//Ĭ�Ϲ���
	p3 = p2;					// = ���������
	Person p4(p3);				//��������


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
