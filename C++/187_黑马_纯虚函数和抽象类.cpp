#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


/*

	���麯��
	
	�﷨ virtual ����ֵ���� ���������βΣ� = 0;
	
	���麯��  ����Ҫ��ʵ��
	
	���˴��麯�����࣬Ҳ��Ϊ������
	
	������ �޷�ʵ��������
	
	���������д���ി�麯������������Ҳ�ǳ�����

*/


//������
class Base
{
public:
	virtual void func() = 0;
	int m_A = 10;
};

//������д���ി�麯��  
class Son :public Base
{
public:
	virtual void func() {};
};

void test01()
{
	// Base base; //�������޷�ʵ��������

	Son s; //���������д���ി�麯���������޷�ʵ��������
	
	s.m_A; //������ʸ����Ա �̳�

}



int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
