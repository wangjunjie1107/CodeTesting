#define _CRT_SECURE_NO_WARNINGS
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
		// m_A = 100; ��Ҫ�ڹ��캯������̬��Ա������ʼ�����Ѿ�����

	}

	//ֻ�ܷ��ʾ�̬��Ա����
	static void func()//��̬��Ա���� ֻ��һ��
	{
		cout << "func��̬��Ա��������" << endl;
		m_A = 1000; //��̬��Ա���������޸�
		//m_C = 555; //�ھ�̬�����У��Ǿ�̬��Ա�����޷��޸�
	}

	//�Ǿ�̬��Ա���� 
	//���Է��ʾ�̬�����ͷǾ�̬��Ա����
	void func2()
	{
		m_C = 444;
		m_A = 555;
	}
	int m_C;
	static int m_A;

private:
	static int m_B; //˽�о�̬��Ա����

	static void func3() //˽�о�̬��Ա���� ������ʲ���
	{
		cout << "func3��̬��Ա��������" << endl;
	}
};

//��̬��Ա�����������ʼ��
int Person::m_A = 100;  //������ʼ���� ���������

int Person::m_B = 100;


//1�������﷨
void test01()
{
	Person p1;
	Person p2;

	//ͨ��p1�޸�m_A��p2����ʱ��Ҳ��999��
	//ԭ����ͬһ������
	p1.m_A = 999;
	cout << p2.m_A << endl;
}

//2����̬��Ա�����ͺ����ķ��ʷ�ʽ
void test02()
{
	//1��ͨ���������
	Person p1;
	cout << p1.m_A << endl;
	p1.func();
	
	
	//2��ֱ��ͨ����������
	Person::m_A;
	Person::func();

	//���ʲ��� ˽��Ȩ���¾�̬��Ա����
	//Person::func3(); 

}


//3����̬��Ա����Ҳ���з���Ȩ�޵�
void test03()
{
	Person p1;
	p1.m_A;//����Ȩ��

	//p1.m_B;//˽��Ȩ�� �޷�����
}


int main() {

	//test01();



	system("pause");
	return EXIT_SUCCESS;
}
