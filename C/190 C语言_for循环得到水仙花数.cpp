#include<stdio.h>

int main()
{
	int index;
	
	for(index = 100; index < 1000; index++)
	{
		int a = index / 100;
		int b = index / 10 % 10;
		int c = index % 10;
		
		if( a*a*a + b*b*b + c*c*c == index)
		{
			printf("%d是水仙花数\n", index);
		}
		
	}
	
	return 0;
 } 
