#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//1�������̳�
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 :public Base1
{
public:
	
	void func()
	{
		//�����е�A���������� ��publicȨ��
		m_A = 100;  
		//�����е�B���������� ��protectedȨ��
		m_B = 100;
		
		//���ɷ��� ������˽��C�������з��ʲ���
		//m_C = 100;
	}
};

void test01()
{
	Son1 s;
	s.m_A = 100;      //m_A ������ A �� ����Ȩ�ޣ� ��������Է���
	//s.m_B = 100;   //m_B ������ B �� ����Ȩ�ޣ������ڿ��Է��ʣ������ⲻ���Է���

}


//2��   �����̳�
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 :protected Base2
{
public:
	void func()
	{
		m_A = 100;	 //  �����еĹ���Ȩ�ޣ��Ա�����ʽ�̳У���������ΪprotectedȨ�ޣ������������з��ʣ���������������ʡ�
		m_B = 100;   //  �����еı���Ȩ�ޣ��Ա�����ʽ�̳У���������ΪprotectedȨ�ޣ������������з��ʣ���������������ʡ�
		//m_C = 100; //  �����е�˽��Ȩ�ޣ��������������з���
	}
};

void test02()
{
	Son2 s;
	//s.m_A = 100;   // m_A ������ Base2 �� ����Ȩ�ޣ� �����ⲻ���Է��� 
	//s.m_B = 100;	//  m_B ������ Base2 �� ����Ȩ�ޣ� �����ⲻ���Է��� 
	//s.m_C = 100; //   ������ʲ���m_C
}

//3��˽�м̳�
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 :private Base3
{
public:
	void func()
	{
		m_A = 100;		// �����е� public    ���������� ��privateȨ��  �����������в��ɷ���   ������޷�����
		m_B = 100;		// �����е� protected ���������� ��privateȨ��  �����������в��ɷ���   ������޷�����
	  //m_C = 100;		// ������˽��C�������з��ʲ���
	}
};

class GrandSon3 : public Son3
{
public:
	void func1()
	{
		//m_A = 100; //��Son3��A˽��Ȩ�ޣ�������ʲ���
		//m_B = 100; //��Son3��B˽��Ȩ�ޣ�������ʲ���
		//m_C = 100;  //Son3�����ʲ���
	}
};

void test03()
{
	Son3 s;
	//s.m_A = 100; //��Son3��A˽��Ȩ��,������ʲ���
	//s.m_B = 100; //��Son3��B˽��Ȩ��,������ʲ���
	//s.m_C = 100; //��Son3�ж����ʲ�������������ʲ���
}



int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
