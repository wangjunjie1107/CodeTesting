#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * RemoveSpace(char arr[], int len)
{
	//指向数组的首地址和末尾地址 
	char * start  = arr;
	char * end = arr + len - 1; //数组从o开始的 
	
	//去掉末尾的空格 
	while(*end == ' ' && end > start) 
	{
		end--;
	}
	//去掉空格后，末尾补上\0 
	*(end + 1) = '\0';
	
	while(*start == ' ' && start < end)
	{
		start++;
	}
	
	return start;
}


int main()
{
	char arr[] = "   nihao   ";
	int len = sizeof(arr) - 1;//有效长度 
	char * p = RemoveSpace(arr, len);
	
	printf("%s\n", p);
	
	return 0;
}
