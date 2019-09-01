#include<stdio.h>

int main()
{
	int a ;
	int b ;
	int c ;
	
	printf("请输入三个数：");
	scanf("%d%d%d", &a, &b, &c);
	 
	//利用三目运算符找最大的数 
	int d = a > b ? (a > c ? a : c) : (b > c ? b : c);
	
	printf("最大数为：%d\n", d);
	
	return 0; 
 }  
