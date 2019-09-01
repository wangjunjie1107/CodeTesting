#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//ʵ���������ֽ���
//1��ֵ����
void mySwap01(int a , int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	mySwap01(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

//2����ַ����
void mySwap02(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void test02()
{
	int a = 10;
	int b = 20;
	mySwap02(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

//3�����ô���
void mySwap03(int &a ,int &b )
{
	int temp = a;
	a = b;
	b = temp;
}

void test03()
{
	int a = 10;
	int b = 20;
	mySwap03(a, b);
	cout << "a = " << a << endl; // 20 
	cout << "b = " << b << endl; // 10
}


//ע������2
//1�����ñ������Ϸ��ڴ�ռ�
void test04()
{
	//int &b = 10; //�Ƿ�����
}

int& func()
{
	int a = 10;
	return a;
}

//2����Ҫ���ؾֲ�����������
void test05()
{
	int &ref = func();
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
}

//3������������ֵ������ʱ����ô�����ĵ��ÿ�����Ϊ��ֵ����

int& func2()
{
	static int a = 10;
	return a;
}


void test06()
{
	int &ref = func2();

	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;

	//����������ֵ������ʱ����ô�����ĵ��ÿ�����Ϊ��ֵ����
	func2() = 1000;
	cout << "------------------" << endl;
	cout << "ref = " << ref << endl;

}


int main(){

	//test01();
	//test02();
	//test03();
	//test05();
	test06();

	system("pause");
	return EXIT_SUCCESS;
}
