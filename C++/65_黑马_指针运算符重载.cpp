#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//����ָ��
class Person
{
public:
	Person(int age)
	{
		cout << "Person�Ĺ��캯������" << endl;
		this->m_Age = age;
	}

	//��ӡ����
	void showAge()
	{
		cout << "m_Age = " << this->m_Age << endl;
	}

	~Person()
	{
		cout << "Person��������������" << endl;
		
	}

	int m_Age;
};


//����ָ��
class smartPointer
{
public:
	smartPointer(Person * p)
	{
		this->m_Person = p;
		cout << "smartPointer���캯������" << endl;
	}

	//���� -> �����
	Person * operator->()
	{
		return this->m_Person;
	}

	//����* �����
	Person& operator*()
	{
		return *this->m_Person;
	}

	~smartPointer()
	{
		cout << "smartPerson��������������" << endl;
		
		if (this->m_Person != NULL)
		{
			delete this->m_Person;
			this->m_Person = NULL;
		}
	}

	Person * m_Person; //�ڲ�ά��Person��ָ��
};

void test01()
{
	//Person * p = new Person(18);
	//p->showAge();
	//(*p).showAge();//�������Ч��һ��
	//delete p;
	//����ָ�� �����й�new�����Ķ��󣬴����õĶ������� ����дdelete



	smartPointer sm(new Person(199));
	//sm->showAge();//sm->->showAge(); �������Ż�Ϊsm->showAge();
	(*sm).showAge();
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
