#include<stdio.h>

int main()
{
	int *p;
	
	printf("%p\n",p);
	
	p+=2;  //移动两个int 
	
	printf("%p\n",p);
	
	
	char *p2;
	
	printf("%p\n",p2);
	
	p2+=2;  //移动两个char
	
	printf("%p\n",p2);
	
	return 0;
 } 
