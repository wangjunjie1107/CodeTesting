#include<stdio.h>

int main()
{
	int max = 0;
	int a[10];
	int k;
	
	printf("����������ʮֻС�������:\n ");
	 
	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(int j = 0; j < 10; j++)
	{
		
		if(a[j] > max)
		{
			max = a[j];
			k = j + 1; 
		}
	}
	
	printf("���ص�С��Ϊ %d �ţ�����Ϊ %d kg\n", k, max);
	
	return 0;
 } 
