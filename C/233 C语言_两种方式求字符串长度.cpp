#include<stdio.h>
#include<string.h>

void StringLength(char arr[])
{
	
	//两种方式求字符串长度 
	int len1  = strlen(arr);
	printf("字符串有效长度为：%d\n", len1);
	 
	int i = 0;
	while(arr[i] != '\0')
	{
		i++;
	}
	printf("字符串有效长度为：%d\n", i);
	
	
}
int main()
{
	char arr[] = "abc";
	
	printf("字符串实际长度：%d\n", sizeof(arr)); 
	StringLength(arr);
	
	return 0; 
}
