#define _CRT_SECURE_NO_WARNINGS //C4996
#include<stdio.h> //��׼�������
#include<string.h> //�ַ���������
#include<stdlib.h>//��׼�⺯��

//1 typedef��ʹ�� ���Լ�struct�ؼ���

/*
struct Person
{
	//����
	char name[64];
	//����
	int age;
};

typedef  struct Person MyPerson;
*/

typedef struct Person
{
	//����
	char name[64];
	//����
	int age;
}MyPerson;

void test01()
{
	struct Person p1 = { "wang", 18 };

	MyPerson p2 = { "li", 22 };
}

// 2��������������
void test02()
{
	//char *p1, p2; //һ��char * , һ��char���� 

	typedef char *  PCHAR;

	PCHAR p1, p2;

	//char * p1, *p2;
}

//3 �����ֲ��
typedef int MY_INT; 
void test03()
{
	MY_INT a = 10;

	MY_INT b = 20;
}

//�������
int main()
{
	test01();
	test02();
	test03();
	
	system("pause"); //����������� ����

	return EXIT_SUCCESS; //���������˳�ֵ
}
