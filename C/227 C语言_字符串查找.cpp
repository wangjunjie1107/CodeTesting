#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	char arr[] = "hello world";
	
	if(strchr(arr, 'w') != NULL)
	{
		printf("找到了\n"); 
	}
	else
	{
		printf("没找到\n"); 
	}
	
	char *p = strstr(arr, "w");
	 //此时的p就相当于字符数组的首地址了 
	printf("%s\n", p);
	return 0;
	
 } 
