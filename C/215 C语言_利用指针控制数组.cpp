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
		p[i] = 2 * i; //此时p就是数组a的首地址了 
	}
	
	for(i = 0; i < n; i++)
	{
		printf("%d\n", p[i]);
	}
	
	return 0;
 } 
