#include<stdio.h>


int main()
{
	char * str = "wangjunjie";
	printf("%*s\n", 15, str);  // *指定输出的域宽
	
	
	char buffer[1024] = { 0 }; 
	scanf("%*2s%s",buffer);  // *2s 用来忽略输入的前两个字符 
	printf("%s\n",buffer); 
	
	
	return 0; 
	
} 
