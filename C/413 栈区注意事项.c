#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 

int * func()
{
	int a = 10;//ջ�ϴ����ı���
	return &a;
}

void test01()
{
	int * p = func();

	//������Ѳ���Ҫ����Ϊ�����a���ѱ��ͷţ�
	//��ȥ��������ڴ����ڷǷ�����

	printf("%d\n", p);
	printf("%d\n", p);
}


char * getString()
{
	char str[] = "wangjunjie";
	return str;
}

void test02()
{
	char * p = NULL;

	p = getString(); //ջ�����ַ������Ѿ��ͷţ�������� ��ָ��ķǷ�����

	printf("p = %s\n", p);
}
int main()
{

	test01();
	test02();

	system("pause"); 

	return EXIT_SUCCESS;
}


