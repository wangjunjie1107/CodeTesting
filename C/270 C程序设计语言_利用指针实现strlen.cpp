#include<stdio.h>

int MyStrlen(char *s)
{
	char * p = s;
	
	while(*p != '\0')
	{
		p++;
	} 
	
	return p - s;  //地址之间的差值 
} 

int main()
{
	char arr[] = "abcdefg";
	
	int a = MyStrlen(arr);
	 
	printf("字符串长度为：%d\n", a);
	
	return 0;
}
