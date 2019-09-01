#include<stdio.h>

int main()
{
	int sum = 0;
	int i = 0;
	
	while(i < 101)
	{
		sum +=i;
		i++; 
		
	}
	
	printf("从1加到100的值为：sum = %d\n", sum);
	
	return 0;
 } 
