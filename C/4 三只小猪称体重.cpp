#include<stdio.h>
int main()
{
	int a; 
	int b;
	int c;
	printf("请输入三只小猪的体重,并用逗号隔开，单位公斤："); 
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b&&a>=c) 
	{
		printf("\n");
		printf("体重最重的为："); 
		printf("第一只小猪,体重为：%d公斤",a);
	}
	else if(b>=a&&b>=c)
     	{
     	 printf("\n");
		 printf("体重最重的为：");
		 printf("第二只小猪,体重为：%d公斤",b);
		}
		else if(c>=a&&c>=b)
		{
		    printf("\n");
			printf("体重最重的为："); 
	      	printf("第三只小猪,体重为：%d公斤",c);
		} 
	return 0;
 } 
