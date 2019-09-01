#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:

	Person() {};

	Person(int age)
	{
		this->m_Age = age;
		cout << "Person ���캯������" << endl;
	}

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
class smartPointer
{
public:
	smartPointer()
	{
		this->m_Person = new Person;
		cout << "smartPerson��Ĭ�Ϲ��캯������" << endl;
	}

	smartPointer(Person * p)
	{
		this->m_Person = p;
		cout << "smartPerson���вι��캯������" << endl;
	}

	//���� -> �����
	Person * operator->()
	{
		return this->m_Person;
	}


	//���� * �����
	Person & operator*()
	{
		return *this->m_Person;
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

	//smartPerson���г�ԱΪPerson��ָ��
	Person * m_Person; //�ڲ�ά��Person��ָ��

};

void test01()
{
	/*Person * p = new Person(18);
	p->showAge();
	p->m_Age = 19;
	(*p).showAge();

	delete p;
*/

	//ֻ��ָ������й�new�����Ķ���
	//�����õĶ������� ����дdelete
	Person * p = new Person(25);
	smartPointer sm(p);
	 
	sm->showAge();  // sm->->showAge();  �������Ż�Ϊsm->showAge();
	
	
	sm->m_Age = 26;
	(*sm).showAge();



}


int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
