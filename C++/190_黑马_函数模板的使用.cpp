#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//ģ����Խ����Ͳ�����
//����ģ��ʵ��ͨ�ý���

//T����ͨ�õ��������ͣ�
//���߱���������������T���ͣ���Ҫ����
template<class T>
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

//ע������ ģ�����Ҫ�Ƶ���T�����Ͳſ���ʹ�ã����򲻿��Ե���ʹ��

void test01()
{
	//1���Զ������Ƶ�
	int a = 10;
	int b = 30;
	mySwap(a, b);
	char c = 'c';
	
	//�����Ƶ���һ�µ�T���ͣ��ſ���ʹ��ģ��
	//mySwap(a, c); 

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	//2����ʾָ������
	double d1 = 2.2;
	double d2 = 4.4;
	mySwap<double>(d1, d2);

	cout << "d1 = " << d1 << endl;
	cout << "d2 = " << d2 << endl;
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
