#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int myStrstr(char * source, char * dest)
{
	if (source == NULL)
	{
		return -1;
	}
	if (dest == NULL)
	{
		return -1;
	}

	int num = 0;
	while (*source != '\0') //原字符串不为0
	{
		if (*source != *dest)//首字符不匹配
		{
			source++;
			num++;
			continue;//继续整个循环
		}

		//创建临时指针
		char * tmpStr = source;
		char * tmpDest = dest;

		while (*tmpDest != '\0')
		{
			//与目标字符串出现不匹配的情况
			if (*tmpStr != *tmpDest)
			{
				source++;
				num++;
				break;
			}

			//匹配  继续往下匹配 直到匹配到目标字符串的末尾
			tmpStr++;
			tmpDest++;
		}

		if (*tmpDest == '\0')
		{
			return num;
		}
	}

	return -1;
}



void test01()
{
	char * str = "airghdnfdnfdnf";

	int ret = myStrstr(str, "dnf");

	if (ret != -1)
	{
		printf("找到了子串 首位置： %d\n", ret+1);
	}
	else
	{
		printf("未找到子串\n");
	}

}
int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
