#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[10] = {1,2,5,3,6,1,255,5,2,111};
	
	int temp;
	
	int len = sizeof(a) / sizeof(a[0]);
	
	for(int i = 0; i < len; i++)
	{
		for(int j = 0; j < len - 1; j++)
		{
			if(a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	printf("从小到大排序：\n");
	for(int k = 0; k < len; k++)
	{
		printf("a[%d] = %d\n", k, a[k]);
	}
	
	return 0;
 } 
