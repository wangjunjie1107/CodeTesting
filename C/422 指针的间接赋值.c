#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 

//��Ӹ�ֵ����������
//1 ����������   ����ͨ������ָ�����   ����  ʵ�� + �βΣ�
//2 ��������ϵ
//3 �� ͨ��*�����ڴ�


void test01()
{
	int a = 10;
	int * p = NULL;

	p = &a;
	*p = 10000;

	printf("a = %d\n", a);
}

void changeValue(int * p)
{
	*p = 1000;
}

void test02()
{
	int a = 10;
	int * p = &a;

	changeValue(p); //��a�ĵ�ַ����

	printf("a = %d\n", a);
	printf("&a = %d\n", &a);
	printf("p = %d\n", p);

}

int main()
{
	test01();
	test02();

	system("pause"); 
	return EXIT_SUCCESS;
}


