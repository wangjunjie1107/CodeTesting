#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Base
{
public:
	Base()
	{
		this->m_A = 10;
	}

	void func()
	{
		cout << "Base�µ�func����" << endl;
	}

	void func(int a)
	{
		cout << "Base�µ�func��int a)����" << endl;
	}

	int m_A;
};


class Son :public Base
{
public:
	Son()
	{
		this->m_A = 20;
	}


	void func()
	{
		cout << "Son�µ�func����" << endl;
	}

	int m_A;
};

//�Ǿ�̬ ͬ���ĳ�Ա����
void test01()
{
	Son s;
	//��ʱ���ʵ��������е� m_A
	cout << "Son ... m_A = " << s.m_A << endl;
	
	//�������ʸ�����ͬ���ĳ�Ա����  ��Ҫ��������
	cout << "Base ... m_A = " << s.Base::m_A << endl;
}

//�Ǿ�̬ ͬ�� ��Ա����
void test02()
{
	Son s; 

	s.func();
	//�������ʸ�����ͬ���ĳ�Ա��������Ҫ��������
	s.Base::func();

	//�����������˺͸���ͬ���ĳ�Ա������
	//����ĳ�Ա������ ���ص� ����������ͬ���ĳ�Ա����
	//�����ض��常��ĳ�Ա�������������ø�����ͬ����Ա�����������������
	s.Base::func(10);
}


int main()
{

	test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
