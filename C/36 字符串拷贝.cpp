#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char ch[]="hello world";
	
	char str[100];
	
	strcpy(str, ch);
	
	printf("%s\n", str);
	
	return 0;
}
