#include<stdio.h>

int main()
{
	int a = 10;

	int *p;
	
	p = &a;
	*p = 100; //ͨ��ָ���޸��˱���a��ֵ 
	
	printf("*p = %d\ta = %d\n", *p, a);
}
