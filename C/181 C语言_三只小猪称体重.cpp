#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c; //三只小猪
	
	printf("请依次输入a,b,c三只小猪的体重(体重不同)："); 
	scanf("%d%d%d", &a,&b,&c);
	
	if(a > b)
	{
		if(a > c)
		{
			printf("a最重\n");
		}
		else if(c > a)
		{
			printf("c最重\n");
		}
	}
	
	if(b > a)
	{
		if(b > c)
		{
			printf("b最重\n");
		}
		else if(c > b)
		{
			printf("c最重\n");
		}
	}
	
	system("pause");
	 
	 return 0;
 } 
