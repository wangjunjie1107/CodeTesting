#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	for(int i = 100; i < 1000; ++i)
	{
		if  (i == 	((i / 100) * (i / 100) * (i / 100) + 
					(i % 100 / 10) * (i % 100 / 10) * (i % 100 / 10) + 
					(i % 10) * (i % 10) * (i % 10))
		  	)
		  	
		  	printf("%d\n", i);
	}
	system("pause"); 
	return EXIT_SUCCESS;
} 
