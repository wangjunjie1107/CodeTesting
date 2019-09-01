#include<stdio.h>

int main()
{
	int *p = NULL;
	int **l;
	
	printf("sizeof(*p) = %d\n", sizeof(*p));
	printf("sizeof(**l) = %d\n", sizeof(**l));
	
	
	/*
	
	使用sizeof()测量指针的大小，得到的总是：4或8
	
	因为sizeof()测的是指针变量指向存储地址的大小

	*/
	return 0; 
 } 
