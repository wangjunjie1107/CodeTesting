#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



//1��Ĭ�ϲ��� 
//���Ը��βμ�Ĭ��ֵ���������ֵ�������û�����ʵ�Σ����û�о���Ĭ��ֵ

int func(int a, int b = 20, int c = 20)
{
	return a + b + c;
}

void test01()
{
	int a = 10;
	int b = 100;
	cout << func(a, b) << endl;//10+100+20 = 130
}


//ע������2�� ������������ʵ�� ֻ����һ����Ĭ�ϲ��� 
//����������� �������ض��� ����
//int func2(int a = 10, int b = 10);
int func2(int a = 10, int b = 10)
{
	return a + b;
}

void test02()
{
	func2();
}

//2��ռλ����
//���β��� ֻд�������ͣ���ռλ��;������ʱ����봫��ʵ��
//ռλ���� ��;����������ػ��õ� <<�������������
//ռλ������Ҳ������Ĭ�ϲ���
int func3(int a, int = 10)
{
	return a;
}

void test03()
{
	func3(10);
}


int main()
{
	//test01();
	//test02();
	test03();



	system("pause");
	return EXIT_SUCCESS;
}

