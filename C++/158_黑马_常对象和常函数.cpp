#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Person
{
public:

	int m_Age;

	// �������mutable�Ĺؼ��֣�
	// �����ĳ�Ա���Լ�ʹ�ڳ��������߳������У�Ҳ�����޸�
	mutable int m_Height;
	

	Person(int age)
	{
		this->m_Age = age;
	}

	//thisָ��ı��� ָ�볣��
	//ÿ���Ǿ�̬��Ա�����ڲ�������thisָ��
	//thisָ������� Person * const this 
	//ָ��ָ�򲻿����޸� ָ��ָ���ֵ�����޸�

	//�������ָ��ָ���ֵ Ҳ�������޸� 
	//const Person * const this



	//����Ա��������д��const�����������Ϊ������
	void showAge()const //const���ε���thisָ�� 
	{
		//this = NULL;//����
		//this->m_Age = 200; //thisָ��ָ���ֵ�������޸�
	
		//mutable���εĶ�����޸�
		this->m_Height = 180;
	}

	void showAge2()
	{
		//�����󲻿��Ե�����ͨ������
		//��Ϊ��ͨ�����ڲ����Զ������޸�
		m_Age = 1000;
	}
};

void test01()
{
	Person p1(100);

	p1.showAge(); //��ͨ����Ҳ���Ե��ó�����

	//��ͨ���� ֻҪpublic�ı����������޸�
	p1.m_Age = 200;
	p1.m_Height = 200;

	
}

void test02()
{
	//������
	const Person p1(10);

	//p1.m_Age = 111;//error  �����޸�
	
	//���˹ؼ���  mutable  �ı��� m_Height��
	//�ڳ�������Ҳ�����޸�
	p1.m_Height = 222;
	
	
	p1.showAge(); //��������Ե��ó�����

	//p1.showAge2();//error �����󲻿��Ե�����ͨ����


	
}
