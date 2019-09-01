#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE * fptr;
	fptr = fopen("F:\\A.txt","w+");
	fclose(fptr);
	return 0;
 } 
