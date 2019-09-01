#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//��������Ĭ�ϸ�һ�������4������
// ���캯������ʵ�֣�  ������������ʵ�֣� �������죨ֵ������ operator= (ֵ����)

class Person
{
public:
	Person() { cout << "PersonĬ�Ϲ��캯������" << endl; }

	Person(const char * name) // "Tom"
	{
		cout << "Person�вι��캯������" << endl;
		this->m_Name = new char[strlen(name) + 1];
		strcpy(this->m_Name, name);
	}

	Person(const Person & p)
	{
		cout << "Person�������캯������" << endl;
		this->m_Name = new char[strlen(p.m_Name) + 1];
		strcpy(this->m_Name, p.m_Name);
	}

	//���� = �����
	Person& operator=(const Person & p)
	{
		//���ж϶����Ƿ������ݣ���������ͷŸɾ�
		if (this->m_Name != NULL)
		{
			delete[] this->m_Name;
			this->m_Name = NULL;
		}
		this->m_Name = new char[strlen(p.m_Name) + 1];
		strcpy(this->m_Name, p.m_Name);
		return *this;
	}

	~Person()
	{
		cout << "Person������������" << endl;
		if (this->m_Name != NULL)
		{
			delete[] this->m_Name;
			this->m_Name = NULL;
		}
	}

	char * m_Name;
};

void test01()
{
	Person p1("Tom");
	Person p2("Jerry");

	Person p3;

	p3 = p1 = p2; //��ֵ

	cout << "p1������Ϊ�� " << p1.m_Name << endl;
	cout << "p2������Ϊ�� " << p2.m_Name << endl;
	cout << "p3������Ϊ�� " << p3.m_Name << endl;

	Person p4(p3);
}

int main() {
	test01();

	//int a = 10;
	//int b = 20;
	//int c;
	//c = a = b;
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//cout << "c = " << c << endl;

	system("pause");
	return EXIT_SUCCESS;
}
