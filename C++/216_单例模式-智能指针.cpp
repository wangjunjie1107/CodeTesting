#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		cout << "Person���캯������" << endl;
		this->m_Age = age;
	}

	//��ӡ����
	void showAge()
	{
		cout << "m_Age = " << this->m_Age << endl;
	}

	~Person()
	{
		cout << "Person������������" << endl;
	}

	int m_Age;
};

//����ָ��
//�����й�new�����Ķ��󣬴����õĶ������� ����дdelete
class smartPointer
{
public:
	smartPointer(Person* p)
	{
		this->m_Person = p;
		cout << "smartPointer���캯������" << endl;
	}

	//->���������
	Person* operator->()
	{
		return this->m_Person;
	}

	//����* �����
	Person& operator*()
	{
		return *(this->m_Person);
	}

	~smartPointer()
	{
		cout << "smartPointer������������" << endl;
		if (this->m_Person != NULL)
		{
			delete this->m_Person;
			this->m_Person = NULL;
		}
	}
	Person* m_Person; //�ڲ�ά��Personָ��
};


void test01()
{
	smartPointer sm(new Person(180));
	sm.m_Person->showAge();
	sm->showAge();// sm-> ���� sm.m_Person
	(*sm).showAge();//(*sm)���� m_Person����
}


int main() 
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
