#include<stdio.h>

int main()
{
	int *p;
	
	printf("%p\n",p);
	
	p+=2;  //�ƶ�����int 
	
	printf("%p\n",p);
	
	
	char *p2;
	
	printf("%p\n",p2);
	
	p2+=2;  //�ƶ�����char
	
	printf("%p\n",p2);
	
	return 0;
 } 
