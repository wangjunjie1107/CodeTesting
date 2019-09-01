#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 

/*
	���ģʽ��Big_endian���ĺ�����������ݵĸ��ֽڴ洢�ڵ͵�ַ�У�
	�������ݵĵ��ֽ������ڸߵ�ַ�С�


	С��ģʽ��Little_endian���ĺ�����������ݵĸ��ֽڴ洢�ڸߵ�ַ�У�
	�������ݵĵ��ֽ������ڵ͵�ַ�С�

*/ 
//ջ����������
void test01()
{
	int a = 10; // ջ�� -- �ߵ�ַ
	int b = 20;
	int c = 30;
	int d = 40; // ջ�� -- �͵�ַ

	printf("&a = %d\n", &a);
	printf("&b = %d\n", &b);
	printf("&c = %d\n", &c);
	printf("&d = %d\n", &d);
}

//�ڴ�洢��ʽ
void test02()
{
	int a = 0x11223344;

	char * p = &a;

	printf("%x\n", *p);		     // 44 --- ��λ�ֽ� --- ����ڵ͵�ַ    ��ַ��p    С��ģʽ
	printf("%x\n", *(p + 1));   //  33 --- ��λ�ֽ� -- ����ڸߵ�ַ     ��ַ��p+1  С��ģʽ
	printf("%x\n", *(p + 2));  //   22
	printf("%x\n", *(p + 3)); //    11	

}



int main()
{

	test01();
	test02();

	system("pause"); 
	return EXIT_SUCCESS;
}


