#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


//�º���  ���ʲ��Ǻ��������Ƕ���
//�������Ķ��� Ҳ��Ϊ ��������
//�º��� �ǳ���û�й̶�д��


class MyClassPrint
{
public:
	//���� ���������  ������������ ��˳����º���
	void operator()(string text)
	{
		cout << text << endl;
	}
};



class MyClassAdd
{
public:
	//���� ���������  ������������ ��˳����º���
	void operator()(int a, int b)
	{
		cout << a + b << endl;
	}
};


void test01()
{
	string str1 = "wangjunjie";
	int a = 10;
	int b = 20;

	MyClassPrint p1;
	MyClassAdd p2;


	p1(str1);
	p2(a, b);
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
