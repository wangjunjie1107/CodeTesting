#define _CRT_SECURE_NO_WARNINGS  //C4996
#include<stdio.h>   //��׼�������
#include<stdlib.h>  //��׼�⺯��
#include<string.h>  //�ַ���������

//1 typedefʹ�� ���Լ�struct�ؼ���

//struct Person
//{
//	char name[64];
//	int age;
//};
//
//typedef struct Person MyPerson;

typedef struct Person
{
	char name[64];
	int age;
}MyPerson;


void test01()
{
	struct Person p1 = { "zhangsan",18 };

	MyPerson p2 = { "lisi",22 };
}


//2��������������
void test02()
{
	typedef char* pChar;

	pChar p1, p2; //���� char * ����

	char * p1, p2; //ֻ�� p1 �� char * ����
}

//3�������ֲ��
typedef int MY_INT;
void test03()
{
	MY_INT a = 10;

	MY_INT b = 20;
}

//�������
int main()
{
	system("pause"); //����������� ��������

	return EXIT_SUCCESS; //���������˳�ֵ
}


