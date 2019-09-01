#include<stdio.h>
#include<math.h>

int main()
{
	int s;
	int a;
	s  = scanf("%d", &a);  //如果scanf成功读入一个数 
	printf("%d", s);       //就把该数存入a中，并返回1，将1赋值给s 
	                       //如果读入未成功，就返回0 
	return 0;
 } 
