#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//����
class Base
{
public:
	Base()
	{
		cout << "BaseĬ�Ϲ��캯������" << endl;
	}
	~Base()
	{
		cout << "Base������������" << endl;
	}
};

//������
class Other
{
public:
	Other()
	{
		cout << "OtherĬ�Ϲ��캯������" << endl;
	}
	~Other()
	{
		cout << "Other������������" << endl;
	}
};

//����
class Son:public Base
{
public:
	Son()
	{
		cout << "SonĬ�Ϲ��캯������" << endl;
	}
	~Son()
	{
		cout << "Son������������" << endl;
	}

	Other other; 
};



void test01()
{
	//�������������ʱ���ȵ��ø��๹�캯�����ٵ�������������죬
	//�ٵ��������죬������˳���빹���෴��
	Son son; 
}

class Base2
{
public:
	Base2(int a)
	{
		this->m_A = a;
		cout << "Base2Ĭ�Ϲ��캯������" << endl;
	}
	~Base2()
	{
		cout << "Base2������������" << endl;
	}

	int m_A;
};


class Son2 :public Base2
{
public:
	//���ó�ʼ���б�ʽ ��ʽ�ص��ø����������Ĺ��캯��
	Son2(int a = 1000) :Base2(a)
	{
		cout << "Son2Ĭ�Ϲ��캯������" << endl;
	}
	~Son2()
	{
		cout << "Son2������������" << endl;
	}
};


//������ ��Щ���� �����ǲ���̳���ȥ��
// Ĭ�Ϲ���   ��������   ����   operator=

void test02()
{
	Son2 s;
	cout << s.m_A << endl;
}



int main()
{

	test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
