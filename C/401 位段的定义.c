#include<stdio.h>


struct test01
{
	unsigned int a:1;  //ռ�ڴ��� �� 1 λ�� ��ֵֻ�ܸ� 0 ���� 1 
	unsigned int b:2; // ռ�ڴ��� �� 2 λ�� ��ֵֻ�ܸ� 0 - 3 
	unsigned int c:3;
	unsigned int d:4;
	unsigned int e:6;
	unsigned int f:7;
	unsigned int h:9;   // 32λ  4���ֽ� 

};

struct test02
{
	unsigned int a:1;  //ռ�ڴ��� �� 1 λ�� ��ֵֻ�ܸ� 0 ���� 1 
	unsigned int b:2; // ռ�ڴ��� �� 2 λ�� ��ֵֻ�ܸ� 0 - 3 
	unsigned int c:3;
	unsigned int d:4;
	unsigned int e:6;
	unsigned int f:7;
	unsigned int g:7;
	unsigned int h:9;   // 40λ  5���ֽ�   ��Ϊ�ڴ�����ԭ��  ���� ������� 3 ���ֽ�  5 + 3

};

int main()
{	
	printf("%d\n",sizeof(struct test01));  // 4 ���ֽ�
	
	
	printf("%d\n",sizeof(struct test02));  // 8 ���ֽ�  ��Ϊ�ڴ�����ԭ��  ���� ������� 3 ���ֽ�  5 + 3
	
	return 0;
} 
