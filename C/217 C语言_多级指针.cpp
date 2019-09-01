#include<stdio.h>

int main()
{
	int a = 11;
	
	int * p = &a;
	int ** q = &p;
	int *** w = &q;
	
	printf("%d\n%d\n%d\n\n", *p, **q, ***w); //值为11 
	
	//打印指针变量所指的地址 
	printf("%p\n%p\n%p\n\n", p, q, w);
	printf("%p\n%p\n%p\n\n", &a, &p, &q); //结果同上 
	
	//打印指针变量自身的地址
	printf("%p\n%p\n%p\n", &p, &q, &w); 
	return 0;
 } 
