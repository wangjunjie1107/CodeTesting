#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>  //字符测试函数的头文件 

int main()
{
	char inChar;
	int  inInt;
	printf("Please input some letter:");
	scanf("%s", &inChar);
	
	if(isalpha(inChar))
	{
		printf("Your input was a letter.\n"); 
	}
	
	printf("Please input some letter again:");
	scanf("%s", &inInt);
	
	if(isdigit(inInt))
	{
		printf("Your input was a digit.\n");
	}
	
	return 0;
}
