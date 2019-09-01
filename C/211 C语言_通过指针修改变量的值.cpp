#include<stdio.h>

int main()
{
	int a = 10;

	int *p;
	
	p = &a;
	*p = 100; //通过指针修改了变量a的值 
	
	printf("*p = %d\ta = %d\n", *p, a);
}
