#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Base
{

};

class Other
{

};
//4�����½�������ת�� reinterpret_cast  ��������ת�� ���ȫ
void test01()
{
	int a = 10;

	//�� int ��ת��Ϊ int *  ����ȫ
	int * p = reinterpret_cast<int *>(a);

	Base * base = NULL;
	//��һ����ָ��ת��Ϊ��һ����ָ��  ����ȫ
	Other * other = reinterpret_cast<Other *>(base);
}

int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
