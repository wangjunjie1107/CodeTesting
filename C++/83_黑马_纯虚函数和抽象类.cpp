#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Base
{

public:

	//���麯��
	//�﷨��virtual ����ֵ���� ������(�β�) = 0;
	//���麯�� ����Ҫ��ʵ��
	//���˴��麯�����࣬Ҳ��Ϊ������
	//������ �޷�ʵ��������
	//���������д���ി�麯������������Ҳ�ǳ�����
	virtual void func() = 0;

};


class Son :public Base
{
public:

	//���������д���ി�麯������������Ҳ�ǳ����� �޷�ʵ��������
	void func()
	{
		cout << "hahaha" << endl;
	};

};

void test01()
{
	//Base base;//�������޷�ʵ��������
	Son s;//���������д���ി�麯���������޷�ʵ��������
}
int main() 
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

