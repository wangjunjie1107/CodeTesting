#include<stdio.h>

void swap(int * p, int * q);
 
int main()
{
	int a = 10;
	int b = 20;
	
	int *p = &a;
	int *q = &b;
	
	swap(p,q); //��a��b�ĵ�ַ���ݸ�����
	
	printf("a = %d\nb = %d\n", a , b);//�βθı�ʵ�� 
	return 0; 
}

void swap(int *p, int *q)
{
	//ֵ���� 
	int temp = *p;
	*p = *q;
	*q = temp;
	
	//��Ϊ���ݵ��ǵ�ַ�������βο��Ըı�ʵ�� 
 } 
