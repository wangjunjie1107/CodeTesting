#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>

int main()
{
	int a;
	printf("    n  n cubed\n");
	
	for(a = 0; a < 6; a++)
	{
		printf("%5d%7d\n", a, a*a*a);
	}
	return 0;
 } 
