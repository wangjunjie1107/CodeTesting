#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	int m_A;  //0-7

	double m_B;//8-15

	static int m_C; //��������

	void func()
	{
		//˭���ó�Ա������thisָ���ָ��˭
		this->m_A = 444;
		//���ڷǾ�̬��Ա����
		//�Ǿ�̬��Ա���� �������ֵĲ���
		m_A = 100;
		m_B = 555;
	}

	static void func2()
	{
		//m_A = 444; //�Ǿ�̬��Ա���� �����Է���
		m_C = 555;
	}
};

void test01()
{
	//����ռ�õ��ڴ�ռ䣿 1
	//ͨ������Ҳ�ǿ���ʵ���������,ÿ���������ڴ��ж�Ӧ���ж�һ�޶��ĵ�ַ
	//����Ҳ���� �������飬ÿ��Ԫ��ҲӦ���Ƕ�һ�޶����ڴ�ռ� 
	//Person p1;
	//Person p2;
	//Person pArray[10]; //pArray[0] pArray[1]


	Person p;
	p.func();//thisָ�� ָ�� �����õĳ�Ա���� �����Ķ���
	Person p2;
	p2.func();


	//1���Ǿ�̬��Ա���� ������Ķ�����

	//2����̬��Ա����  �������������
	//3���Ǿ�̬��Ա����  �������������  ֻ��һ��ʵ��
	//4����̬��Ա����  �������������    ֻ��һ��ʵ��
	cout << "sizeof = " << sizeof(p) << endl;   // 16 
}


int main() {

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
