#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//用动态分配内存制作一个字符串的一份拷贝
char * my_strcpy(char const * string)
{
	char * new_string = NULL;

	//请求足够长度的内存，用于存储字符串和它的结尾
	new_string = malloc(strlen(string) + 1);

	if(new_string != NULL)
	{
		strcpy(new_string, string);
	}

	return new_string;
}
int main()
{
	char * string = "wangjunjie";
	char * new_string = my_strcpy(string);


	printf("%s\n", new_string);

	system("pause");
	return EXIT_SUCCESS;
}
