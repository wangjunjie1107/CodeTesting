#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
	friend ostream & operator<<(ostream & cout, const Person & p);
public:
	Person(int a,int b) 
	{ 
		this->m_A = a;
		this->m_B = b; 
	};

	
	//ͨ����Ա��������  
	//p1 << cout;  //����ͨ�� ���ǲ������﷨
	ostream & operator<<(ostream & cout)
	{
		cout << this->m_A << endl;
		cout << this->m_B << endl;

		return cout;
	}

private:
	int m_A;
	int m_B;
};

ostream & operator<<(ostream & cout, const Person & p)
{
	cout << p.m_A << "   " << p.m_B << endl;
	return cout;
}

//���Գ�Ա��������<<
void test01()
{
	Person p1(10, 10);
	p1 << cout;  //����ͨ�� ���ǲ������﷨
	//cout << p1; //�޷�ͨ��
}

//����ȫ�ֺ�������<<
void test02()
{
	Person p2(20, 20);
	cout << p2;  //�����﷨ ����ͨ��
}

int main() 
{

	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
