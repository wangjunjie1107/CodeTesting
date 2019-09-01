#include<stdio.h>

int main()
{
	int a = 10;
	
	printf("a = %d\n", a);
	
	goto here;
	printf("%d\n", a);
	
	here:
		printf("a + 100 = %d\n", a+100);
		
	return 0;
 } 
