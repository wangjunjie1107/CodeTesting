#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
using namespace std;

//��̬��Ա���� 

//1�����ж��󶼹���ͬһ�ݾ�̬��Ա
//2���ڱ���׶ξͷ������ڴ�
//3�����������������������ʼ��


class Person
{
public:

	Person()
	{
		//m_A = 100; //��Ҫ�ڹ��캯���ڸ���̬��Ա������ʼ��
	}


	//��̬��Ա���� ֻ��һ��
	static void func()
	{
		cout << "func��̬��Ա��������" << endl;
		m_A = 1000;  //��̬��Ա���������޸�
		//m_C = 1000000;//�Ǿ�̬��Ա�����޷��޸�
	}


	//�Ǿ�̬��Ա���������Է��ʾ�̬�ͷǾ�̬��Ա����
	void func2()
	{
		//��̬��Ա�����ͷǾ�̬��Ա�����������޸�
		m_C = 12;
		m_A = 4564;
	}

	static int m_A;

	int m_C;//�Ǿ�̬��Ա����

private:
	static int m_B;//˽�о�̬��Ա����

	static void func3()//˽�о�̬��Ա���� ������ʲ���
	{
		cout << "func3��̬��Ա��������" << endl;
	}
};

//��̬��Ա�����������ʼ��
//��ʹ˽��Ȩ���µľ�̬��Ա���� ҲҪ��������г�ʼ��
int Person::m_A = 100; 
int Person::m_B = 1000;

//1�������﷨
void test01()
{
	Person p1;
	cout << "p1.m_A = " << p1.m_A << endl;

	Person p2;
	p1.m_A = 1516;
	cout << "p2.m_A = " << p2.m_A << endl;
}


//2����̬��Ա�������ʷ�ʽ
void test02()
{
	//1��ͨ���������
	Person p1;
	cout <<  "p1.m_A = " <<p1.m_A << endl;

	//2��ͨ����������
	cout << "Person::m_A = " << Person::m_A << endl;
}


//3����̬��Ա����Ҳ���з���Ȩ�޵�
void test03()
{
	Person p1;
	cout <<"p1.m_A = "<< p1.m_A << endl;//����Ȩ��

	//p1.m_B;//˽��Ȩ�޲����Է���
}


//��̬��Ա����
void test04()
{
	//���ʷ�ʽ1��ͨ������
	Person p1;
	p1.func();//��̬��Ա��������

	//���ʷ�ʽ2��ͨ������
	Person::func();

	//Person::func3();//���ʲ��� ˽��Ȩ���µľ�̬��Ա����

}


int main()
{
	//test01();
	//test02();
	test04();

	system("pause");
	return EXIT_SUCCESS;
}

