#include<stdio.h>

int main()
{
	int a = 11;
	
	int * p = &a;
	int ** q = &p;
	int *** w = &q;
	
	printf("%d\n%d\n%d\n\n", *p, **q, ***w); //ֵΪ11 
	
	//��ӡָ�������ָ�ĵ�ַ 
	printf("%p\n%p\n%p\n\n", p, q, w);
	printf("%p\n%p\n%p\n\n", &a, &p, &q); //���ͬ�� 
	
	//��ӡָ���������ĵ�ַ
	printf("%p\n%p\n%p\n", &p, &q, &w); 
	return 0;
 } 
