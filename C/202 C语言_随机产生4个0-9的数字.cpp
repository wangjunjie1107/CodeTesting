#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int value;
	
	
	srand((unsigned int)time(NULL));
	
	for(int i = 0; i < 4; i++)
	{
	
	
		value = rand()%9;
		
		printf("%d\t", value);
	}
	
	return 0;
 } 
