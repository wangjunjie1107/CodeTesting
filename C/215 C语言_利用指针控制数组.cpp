#include<stdio.h>

int main()
{
	
	int a[] = {0,1,2,3,4,5,6};
	int i = 0;
	int n = sizeof(a) / sizeof(a[0]);
	
	for(i = 0; i < n; i++)
	{
		printf("%d\n", *(a+i));
	}
	
	int *p = a;
	for(i = 0; i < n; i++)
	{
		p[i] = 2 * i; //��ʱp��������a���׵�ַ�� 
	}
	
	for(i = 0; i < n; i++)
	{
		printf("%d\n", p[i]);
	}
	
	return 0;
 } 
