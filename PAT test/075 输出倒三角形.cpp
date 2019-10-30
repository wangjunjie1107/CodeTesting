#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	n = 2 * n - 1;
	
	int j = 0;
	while(n > 0)
	{
		int temp1 = j;
		while(temp1 > 0)
		{
			printf(" ");
			--temp1;
		}
		
		for(int i = 0 ; i < n; ++i)
		{
			printf("#");
		}	
		
		int temp2 = j;
		while(temp2 > 0)
		{
			printf(" ");
			--temp2;
		}
		
		printf("\n");
		
		++j;
		n -= 2; 
	} 
	
	system("pause"); 
	return EXIT_SUCCESS;
} 
