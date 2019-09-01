#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h> 

//字符串反转
//第一种方式 利用[]进行反转 
void reverseString01(char * str)
{	
	int len = strlen(str);
	//起始位置下标
	int start = 0;
	
	//结束位置下标
	int end = len - 1;	
	
	while(start < end)
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		
		start++;
		end--;	
	}
} 


void test01()
{
	char str[] = "abc";
	
	reverseString01(str);
	
	printf("%s\n", str);
} 
 
//第二种方式 利用指针   指针为什么能反转字符串？？ 
void reverseString02(char * str)
{
	int len = strlen(str);
	
	char * start = str;	
	char * end = str + len - 1;
	
	while(start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		
		printf("%s\n", str);
		
		start++;
		end--; 
	}
} 
void test02()
{
	char str[] = "abcdefghi";
	
	reverseString02(str);
	
	printf("%s\n", str);
} 

int main()
{
	test02();
	
	return 0;
}













