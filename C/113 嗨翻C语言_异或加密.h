#include<stdio.h>
#include<string.h>

void encrypt(char * message)
{
	char c;
	while(*message)
	{
		*message = *message ^ 1;
		message++; 
	}	
} 
