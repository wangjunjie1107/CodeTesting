#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//�������أ�C++��������������ͬ
//�������� ����������

//1������ͬ��������
//2������������ͬ 
//3�������ĸ�����ͬ ���� ���Ͳ�ͬ  ����  ˳��ͬ

void func()
{
	cout << "func()����" << endl;
}

void func(int a)
{
	cout << "func(int a)����" << endl;
}

void func(int a, int b)
{
	cout << "func(int a, int b)����" << endl;
}


void func(int a, double b)
{
	cout << "func(int a,double b)����" << endl;
}

void func(double a, int b)
{
	cout << "func(double a, int b)����" << endl;

}
int main()
{
	
	func();
	func(1);
	func(1,2);
	func(1,2.1);
	func(2.2,1);



	system("pause");
	return EXIT_SUCCESS;
}

