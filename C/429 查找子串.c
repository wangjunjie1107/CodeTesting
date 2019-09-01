#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 

//参数1  原字符串  参数2  子串
void  myStrstr(char * str, char * subStr)
{
	if (str == NULL && subStr == NULL)
	{
		printf("要查找的字符串 和 子串 都为空，无法查找!\n");
		return ;
	}
	else if (str == NULL)
	{
		printf("要查找的字符串为空，无法查找!\n");
		return ;
	}
	else if(subStr == NULL)
	{
		printf("子串为空，无法查找!\n");
		return ;
	}
	
	int num = 1; //若匹配成功 则返回子串所在位置 起始位置为1
	int count = 0; //找到子串的个数

	//存储 子串的位置  和 找到子串的个数
	int result[1024] = { 0 };


	char * temStr = NULL;
	char * temSubStr = NULL;
	
	int location = 1;
	
	while (*str != '\0')
	{
		if (*str != *subStr)
		{
			str++;
			num++;
			continue;
		}

		//创建临时指针
		temStr = str;
		temSubStr = subStr;

		while (*temSubStr != '\0')
		{
			if (*temStr != *temSubStr)
			{
				//匹配失败情况
				str++;
				num++;
				break;
			}

			//临时指针匹配相同情况  继续匹配下一个字母
			temStr++;
			temSubStr++;
		}

		
		if (*temSubStr == '\0')
		{
			//匹配成功
			count++; //找到的子串数量 +1
			result[0] = count;   // 数组第一个元素为子串的个数
			
			
			result[location] = num; //数组从第二个元素开始 为子串的位置	
			location++; // 准备记录下一个元素 
		}
		
		
		//继续匹配 直到  *str == '\0'
		num = num + (temStr - str); 
		str = temStr;
		temSubStr = NULL;
	
	}



	if (count != 0)
	{
		//子串个数
		printf("找到了 %d 个子串\n", result[0]);
		
		//每个子串的位置
		int i; 
		for (i = 1; i <= count; i++)
		{
			printf("第 %d 个子串的位置为： %d\n", i, result[i]);
		}
		
		return;
	}
	else
	{
		printf("未找到子串\n");
		return; 
	}

	
}


void test()
{
	char * str = "wangliwanglijunjiewangjunjiewangjunjiejunjiejunjiejunjie";

	myStrstr(str, "junjie");	
}

int main()
{
	test();

	system("pause"); 
	return EXIT_SUCCESS;
}

