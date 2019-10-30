#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	double i;
	
	for(i = 0; i != 10; i += 0.1)
	{
		printf("%.1f\n", i);
	}
	
	return 0;
} 
