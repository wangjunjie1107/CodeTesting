#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1��   �����̳�
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
		m_A = 100; //�����е�A���������� ��publicȨ��
		m_B = 100; //�����е�B���������� ��protectedȨ��
		//m_C = 100; //������˽��C�������з��ʲ���
	}
};
void test01()
{
	Son1 s;
	s.m_A = 100; //Son1�е�A ���Է��ʵģ���Son1����publicȨ��
	//s.m_B = 100; //Son1�е�B �����Է��ʵģ���Son1����protectedȨ��
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
		m_A = 100;//�����е�A���������� ��protectedȨ��
		m_B = 100;//�����е�B���������� ��protectedȨ��
		//m_C = 100; //������˽��C�������з��ʲ���
	}
};

void test02()
{
	Son2 s;
	//s.m_A = 100;//Son2�е�A �����Է��ʵģ���Son2����protectedȨ��
	//s.m_B = 100;//Son2�е�B �����Է��ʵģ���Son2����protectedȨ��
	//s.m_C = 100; //������ʲ���m_C
}

//3��   ˽�м̳�
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
		m_A = 100;//�����е�A���������� ��privateȨ��
		m_B = 100;//�����е�B���������� ��privateȨ��
		//m_C = 100;//������˽��C�������з��ʲ���
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



int main(){



	system("pause");
	return EXIT_SUCCESS;
}
