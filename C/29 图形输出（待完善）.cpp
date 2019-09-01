#include<stdio.h>  //无法顺利输出 

int main()
{
	int i;
	int k;
	int j;
	char c;
	
	scanf("%d", &i);
	scanf("%c", &c);

	for(k=1; k<=i; k++)   //打印第一行 
	{
		printf("%c", c);
	}
	
	printf("\n");
	
	for(k=2; k<i; k++)  //打印第2--（i-1）行 
	{
		for(j=1; j<=i; j=j*2)
		{
			printf("%c", c);
		}
		printf("\n");
	}
	
	for(k=1; k<=i; k++)   //打印最后一行 
	{
		printf("%c", c);
	}
	
	return 0; 
}
