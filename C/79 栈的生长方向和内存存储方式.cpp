#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//1��ջ����������
void test01()
{
	int a = 0;
	int b = 2;
	int c = 3;
	int d = 4;
	
	printf("%d\n",&a);
	printf("%d\n",&b);
	printf("%d\n",&c);
	printf("%d\n",&d);
 } 
 
 //�ڴ�Ĵ洢��ʽ
 void test02()
 {
 	int a = 0xaabbccdd;
 	
	unsigned char * p = &a;	
	
	printf("%x\n",*p); //��λ�ֽ����� -----�͵�ַ
	 
	printf("%x\n",*(p+1)); //�����CC ��λ�ֽ����� ----�ߵ�ַ	
	
  } 
 int main()
 {
 	test02();
 	return 0;
 }
