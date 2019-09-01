#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Base1
{
public:
	Base1()
	{
		this->m_A = 10;
	}
	int m_A;
	

protected:
	double m_B;
};

class Base2
{
public:
	Base2()
	{
		this->m_A = 20;
	}
	int m_A;
};

//��̳��﷨
// class ���ࣺ �̳з�ʽ ����1 �� �̳з�ʽ ����2 
class Son :public Base1, public Base2
{
public:

	int m_C;
	int m_D;
};

void test01()
{
	Son s;
	//������������� ӵ��ͬ����Ա�����������������
	cout << "Base 1 m_A = " << s.Base1::m_A << endl;
	cout << "Base 2 m_A = " << s.Base2::m_A << endl;
	//cout << "m_B = " << s.m_B << endl;
	cout << "sizeof Base1 = " << sizeof(Base1) << endl; // 16 �ڴ����
	cout << "sizeof Base2 = " << sizeof(Base2) << endl; // 4 

	cout << "sizeof Son = " << sizeof(Son) << endl; // 32 �ڴ����
}

int main() {

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
