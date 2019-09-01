#include<stdio.h>
#include<string.h>

int myStrLen(const char * p) 
{
	int n = 0;
	
	while(*p != '\0') //字符串不到结束位置
	{
		n++; //计数加 1 
		p++;//字符串指针后移 
	} 
	
	return n; 
} 

void strTest()
{
	printf("请输入字符串(100个字符以内)：\n");
	
	char str[100] = { 0 };
	gets(str); 
	
	int len = myStrLen(str);
	
	
	printf("字符串的长度为： %d\n", len);
	 
}
int main()
{
	strTest();
	
	return 0;	
}
