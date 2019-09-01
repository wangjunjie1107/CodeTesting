#include<stdio.h>

int main()
{
	//extern 关键字只做声明，不能做任何定义
	//声明一个变量a,a在这里没有建立存储空间
	
	extern int a;
	
	a = 10; //error 没有空间，就不能赋值
	
	int b = 10; //定义一个变量b, b的类型为int， b赋值为10
	
	return 0; 
} 
