#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;

class Person
{
public:

	Person(int age)
	{
		this->m_Age = age;
	}


	//thisָ��ı���  ָ�볣��
	// ÿ���Ǿ�̬��Ա�����ڲ�������thisָ��  
	// thisָ�������  Person * const this  
	//thisָ���ָ�򲻿����޸ġ�ָ��ָ���ֵ�����޸�
	// �������ָ��ָ���ֵ Ҳ�������޸�  const Person * const this
	
	//const���ε���thisָ��
	//����Ա��������д��const�����������Ϊ������
	//������
	void showAge() const
	{
		//this = NULL;//thisָ���ָ�򲻿����޸�
		//this->m_Age = 200;//����constʱ��thisָ��ָ���ֵ�����޸�

		this->m_height = 122; //����mutable�Ժ󣬾Ϳ����޸�
		
		cout << m_height << endl;
		cout << m_Age << endl;
	}

	void showAge2()
	{
		m_Age = 100;//�����󲻿��Ե�����ͨ��������Ϊ��ͨ�����ڲ����Զ������޸�
	}

	int m_Age;

	//�������mutable�Ĺؼ��֣������ĳ�Ա���Լ�ʹ�ڳ��������߳������У�Ҳ�����޸�
	mutable int m_height;
};

void test01()
{
	Person p1(100);
	p1.showAge();
}

void test02()
{
	//������
	const Person p1(10);
	//p1.m_Age = 20;  ������ ������ֱ���޸ĳ�Ա����

	p1.showAge();//��������Ե��ó�����
	//p1.showAge2(); //�����󲻿��Ե�����ͨ��������Ϊ��ͨ�����п����޸ĳ�Ա����

	p1.m_height = 200; //m_Height�Ƚ����⣬�ڳ�������Ҳ�����޸�
}
int main() 
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

