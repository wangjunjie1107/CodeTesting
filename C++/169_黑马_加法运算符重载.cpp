#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	Person() 
	{ 
		m_A = 0;
		m_B = 0; 
	};
	Person(int a, int b) :m_A(a),m_B(b)
	{

	}

	//ͨ����Ա��������+�����
	Person  operator+(const Person & p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;

		return temp;
	}


	//ͨ��ȫ�ֺ���ʵ�ּӺ����������
	Person & operator+=(const Person & p)
	{
		this->m_A = this->m_A + p.m_A;
		this->m_B = this->m_B + p.m_B;

		return *this;
	}

	int m_A;
	int m_B;
};


//��������� �ɲ����Է����������أ� ����
Person operator+(const Person & p1, const Person & p2)
{
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p2.m_A + p2.m_B;
	return temp;
}

Person operator+(const Person & p1, int num)
{
	Person temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}


//��Ա���� ���ʵ���
//Person p2 = p1.operator+(p2);

//ȫ�ֺ��� ���ʵ���
//Person p3 = operator+(p1, p2);


void test01()
{
	Person p1;
	p1.m_A = 10;
	p1.m_B = 20;

	p1 = p1 + 30;

	cout << "p1.m_A = " << p1.m_A << endl;
	cout << "p1.m_B = " << p1.m_B << endl;
	cout << "-------------------" << endl;


	Person p2;
	p2 = p2 + 100;

	cout << "p2.m_A = " << p2.m_A << endl;
	cout << "p2.m_B = " << p2.m_B << endl;
	cout << "-------------------" << endl;

	p1 += p2;
	cout << "p1.m_A = " << p1.m_A << endl;
	cout << "p1.m_B = " << p1.m_B << endl;
	cout << "-------------------" << endl;


}

int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
