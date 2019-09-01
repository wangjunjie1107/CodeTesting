#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//优化思路  memcmp(str,subStr,3) == 0 
//在字符串查找子串，如果有返回第一个字母位置，如果没有返回-1 
int myStrstr(char * str, char * subStr)
{
	int num = 0;
	while(*str != '\0')
	{
		if(*str != *subStr)
		{
			str++;
			num++;
			continue;
		}
		
		//创建临时指针
		char * tempStr = str;
		char * tempsubStr = subStr;
		
		while(*tempStr != '\0')
		{
			if(*tempStr != *tempsubStr)
			{
				//匹配失败
				str++;
				num++;
				break; 
			}
			tempStr++;
			tempsubStr++;
		}
		
		if(*tempsubStr == '\0')
		{
			//匹配成功 
			 return num;
		}	
	}
	return -1; 
}

void test01()
{
	char * str = "abcdeffaiufhaienianviuabvigdnfgsf";
	
	int ret = myStrstr(str,"dnf");

	if(ret == -1)
	{
		printf("未找到子串\n");
	}
	else
	{
		printf("找到子串，位置：%d\n", ret);
	}
} 

int main()
{
	test01();
	return 0;
} 
