#include<stdio.h>

int main()
{
	//void *指针可以指向任意变量的内存空间： 
	void *p = NULL;
	
	int a = 10;
	p = (void *)&a; //指向变量时，最好转换为void
	
	//使用指针变量指向的内存时，转换为int*
	*((int *)p) = 11;  //改变了a的值 
	
	
	printf("a = %d\n", a);
	
	return 0;
 } 
