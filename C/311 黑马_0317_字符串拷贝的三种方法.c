#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<stdlib.h>


//利用数组下标拷贝
void stringCopy01(char * dest, char * source)
{
	int len = strlen(source); //计算字符串长度

	for (int i = 0; i < len; i++)
	{
		dest[i] = source[i];
	}
	dest[len] = '\0'; //记得加结束符号
}

void stringCopy02(char * dest, char * source)
{
	//利用指针拷贝
	while (*source != '\0')
	{
		*dest = *source;

		dest++;
		source++;
	}
	*dest = '\0';
}

void stringCopy03(char * dest, char * source)
{
	//简便拷贝
	while(*dest++ = *source++)
	{
	}
}
int main()
{
	char *str = "wangjunjie";

	char dest[1024];

	//stringCopy01(dest,str);

	//stringCopy02(dest, str);
	
	stringCopy03(dest, str);

	printf("dest = %s\n", dest);

	system("pause");
	return EXIT_SUCCESS;
}
