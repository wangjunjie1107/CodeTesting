#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int * func()
{
	int a = 10; //ջ�ϴ����ı���
	return &a; 
}

void test01()
{
	int *p = func();
	
	//������Ѳ���Ҫ����Ϊ�����a���ѱ��ͷ�
	//��ȥ��������ڴ����ڷǷ����� 
	printf("%d\n", p);
	printf("%d\n", p);
} 

char * getString()
{
	char str[] = "hello world";
	return str;
}

void test02()
{
	char * p = NULL;
	//ջ�ϵ��ַ����ں�������ʱ�Ѿ����ͷţ����Բ����ٴ�ӡ��ԭ�������� 
	p = getString();
	
	printf("p = %s\n", p); 
}

int main()
{
	//test01();
	//test02();
	return 0;
} 
 
 
 
 
 
 
 
 
 
 
