#include<stdio.h>

int main()
{
	int a = 0;
	int b = 100;
	printf("%p\t%p\n", &a, &b);
	
	int *p;
	printf("%p\n", &p); //打印指针变量p的地址
	p = &a; 
	//p = &a;
	printf("%p\n",&*p);//指针变量p指向a, 打印a的地址
	printf("%d\n", *p);//打印地址中的存放的值 
	
	int *p1 = &b;
	printf("%d\n", *p1);
	
	return 0;
 } 
