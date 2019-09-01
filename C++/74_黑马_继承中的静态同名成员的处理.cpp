#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Base
{
public:

	static void func()
	{
		cout << "Base�µ�func����" << endl;
	}
	static void func(int a)
	{
		cout << "Base�µ�func(int a)����" << endl;
	}

	//����ͬһ������
	//����׶η����ڴ�
	//���������������ʼ��
	static int m_A;
};
int Base::m_A = 10;

class Son :public Base
{
public:
	static void func()
	{
		cout << "Son�µ�func����" << endl;
	}

	static int m_A;
};
int Son::m_A = 20;


//��̬ͬ����Ա����
void test01()
{
	//1 ͨ���������
	Son s;
	cout << "Son  m_A = " << s.m_A << endl;
	cout << "Base m_A = " << s.Base::m_A << endl;

	//2 ͨ����������
	cout << "Son  m_A = " << Son::m_A << endl;
	cout << "Base m_A = " << Son::Base::m_A << endl;
}


//��̬ͬ����Ա����
void test02()
{
	//1 ͨ���������
	Son s;
	s.func(); //�������ض��常���ͬ��func���������ø����func����Ҫ��������
	s.Base::func();
	s.Base::func(10);

	//2 ͨ������
	Son::func();
	Son::Base::func(); //��һ��˫ð�� ���� ͨ��������ʽ����  �ڶ���˫ð�Ŵ��� ����������
	Son::Base::func(10);
}

int main(){

	//test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}
