#include<stdio.h>
#include<stdlib.h>

#define NUM 13

int main()
{
	int i;
	int sum = 0;
	
	long fib[NUM] = {1,1}; //һ�����µ�����������Ϊ1 
	
	for(i = 2; i < NUM; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
	}
	for(i = 0; i < NUM; i++)
	{
		printf("%d�µ���������:\t\t%d\n", i, fib[i]);
		
		sum = sum + fib[i]; 
	}
	printf("12���µ���������Ϊ %d��\n", sum); 
	
	getchar();
	return 0;
 } 
