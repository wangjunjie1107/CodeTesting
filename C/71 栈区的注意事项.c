#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//ջ ע������ ����Ҫ���ؾֲ������ĵ�ַ 
int * func()
{
	int a = 10;
	return &a;
 } 
 
 void test01()
 {
 	int * p = func();
 	
 	//����Ѿ�����Ҫ�ˣ���Ϊa���ڴ��Ѿ����ͷ��ˣ�����û��Ȩ��ȥ��������ڴ�
	printf("a = %d\n", *P);
	printf("a = %d\n", *P);
 }
 
 
int main()
{
	test01();
	return 0;
}

