#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//字符串查找函数
void searchValue(char ** arr, char value)
{
	//参数合法性检查
	while (arr == NULL)
	{
		return;
	}
	while (value == '\0')
	{
		return;
	}

	char * str = NULL;

	while ((str = *arr++) != NULL) //字符数组判断是否为NULL
	{
		char * temp = str;//负责打印整个目标字符串 

		while ((*str != '\0')) //字符串判断是否到了结尾‘\0'处
		{
			if ((*str++ == value))
			{
				printf("找到了相关字符，在%s中\n",temp);
				return;
			}
		}
	}

	printf("未找到字符串！\n");
	return;
}
//在一组字符串中查找特定的字符串
void test01()
{
	char * arr[] =
	{
		"wangjunjie",
		"wangjunjie123",
		"wangjunjiehahaha099",
		"lisijia999",
	};

	char value = '0';
	searchValue(arr, value);
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
