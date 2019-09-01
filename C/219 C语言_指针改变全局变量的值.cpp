#include<stdio.h>

int a = 10; //全局变量

int *getA()
{
	return &a;
}

extern int getA(int a);

 
int main()
{
	*(getA()) = 111;  //改变了全局变量的值 
	
	printf("a = %d\n", a);
	
	getA(a);
	return 0;
}


int getA(int a)
{
	printf("a = %d", a);
	
} 
