#include<stdio.h>
#define EOF (-1)

int main(void)
{
	FILE* fp = fopen("D:/e.txt","w");
	
 	if(!fp)
 		return -1;
 		
 	char ch = 'a';
 	
 	fputc(ch,fp);
	
	fclose(fp);
	
	return 0;
 	
 } 
