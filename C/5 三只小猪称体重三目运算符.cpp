#include<stdio.h>

int main()
{
	int a;
	int b;
	int c; 
	printf("请输入三只小猪的体重："); 
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",a>b?(a>c?a:c):(b>c?b:c));
	return 0; 
}
