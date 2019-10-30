#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	for(int i = 1; i <= 9; ++i)	
	{
		for(int j = 0; j <= 9; ++j)
		{
			int temp = i * 1100 + j * 11;
			int s =  floor(sqrt(temp) + 0.5);
			if(s * s == temp)
			{
				printf("%d\n", temp);
			}
		}
	}
	
	system("pause"); 
	return EXIT_SUCCESS;
} 
