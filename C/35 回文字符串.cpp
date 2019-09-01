#include<stdio.h>
#include<string.h> 

int symm(char* ch)
{
	char* ftemp = ch;
	char* btemp = ch + strlen(ch) - 1;
	
	while(ftemp<btemp)
	{
		if(*ftemp != *btemp)
		{
			return 1;
		}
		ftemp++;
		btemp--;
	}
	return 0;
}

int main(void)
{
	char  ch[]="abcba";
	
	int value = symm(ch);
	 
	if(!value)
	{
		printf("相同\n");
	}
	else
	{
		printf("不相同\n");
	 } 
	 return 0;
 } 
