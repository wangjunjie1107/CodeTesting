#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c; //��ֻС��
	
	printf("����������a,b,c��ֻС�������(���ز�ͬ)��"); 
	scanf("%d%d%d", &a,&b,&c);
	
	if(a > b)
	{
		if(a > c)
		{
			printf("a����\n");
		}
		else if(c > a)
		{
			printf("c����\n");
		}
	}
	
	if(b > a)
	{
		if(b > c)
		{
			printf("b����\n");
		}
		else if(c > b)
		{
			printf("c����\n");
		}
	}
	
	system("pause");
	 
	 return 0;
 } 
