#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


//字符串拷贝

//第一种实现方式
void copyString01(char * dest, char * source)
{
	//利用下标方式拷贝
	int len = strlen(source);
	for (int i = 0;i < len;i++)
	{
		dest[i] = source[i];
	}
	dest[len] = '\0';
}

//第二种实现方式
void copyString02(char * dest, char * source)
{
	//利用字符串指针
	int len = strlen(source);
	while (*source != '\0')
	{
		*dest = *source;

		dest++;
		source++;
	}

	*dest = '\0';
}

//第三种实现方式
void copyString03(char * dest, char * source)
{
	while (*dest++ = *source++);
}

void test01()
{
	char * str = "hello world";

	char buf[1024];

	copyString01(buf, str);
	printf("buf = %s\n", buf);

	copyString02(buf, str);
	printf("buf = %s\n", buf);

	copyString03(buf, str);
	printf("buf = %s\n", buf);
}

//字符串反转


//第一种方式  下标的方式
void reverseString1(char * str)
{
	int len = strlen(str);
	
	int start = 0;      //第一个元素的下标

	int end = len - 1; //最后一个元素的下标

	while (start < end)
	{
		//交换首尾下标元素
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;

		start++;
		end--;
	}
	
}

//第二种方式  指针的方式
void reverseString2(char * str)
{
	int len = strlen(str);

	char * start = str; //指向字符串中的第一个元素
	char * end = str + len - 1;//指向字符串中的最后一个元素

	while (start < end)
	{
		//交换元素
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}

void test02()
{
	char str[] = "wangjunjie";

	reverseString1(str);
	printf("%s\n", str);

	reverseString2(str);
	printf("%s\n", str);
}

int main()
{
	//test01();
	test02();
	system("pause"); 
	return EXIT_SUCCESS;
}


