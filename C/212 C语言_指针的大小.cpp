#include<stdio.h>

int main()
{
	int *p = NULL;
	int **l;
	
	printf("sizeof(*p) = %d\n", sizeof(*p));
	printf("sizeof(**l) = %d\n", sizeof(**l));
	
	
	/*
	
	ʹ��sizeof()����ָ��Ĵ�С���õ������ǣ�4��8
	
	��Ϊsizeof()�����ָ�����ָ��洢��ַ�Ĵ�С

	*/
	return 0; 
 } 
