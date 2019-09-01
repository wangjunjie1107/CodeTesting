#include<stdio.h>
#include<stdlib.h>

 
int main()
{
	int m,n; 
	float a = 122.222311;
	
	printf("请输入要输出的最小宽度：\n");
	scanf("%d", &m);
	printf("请输入要输出的小数点位数：\n");
	scanf("%d", &n);
	
	printf("%*.*f\n",m,n,a);
	
	return 0;
}
