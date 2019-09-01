#define _CRT_SECURT_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stddef.h>  //offsetof函数  数据偏移量
#include<stdlib.h>
#include<math.h>
#include<time.h> //随机数种子 srand

int MyFindStr(char * source, char * aim)
{
	int count = 1;

	//遍历源字符串
	while (*source != '\0')
	{
		if (*source != *aim)
		{
			source++;
			count++;
			
			//继续整个循环 
			continue; 
		}
	
		//优化查找
		//int n = memcmp(p, q, 10);
	
		//如果相等，继续和目标子串比较
		char * tempsource = source;
		char * tempaim = aim;
		
		while(*tempsource == *tempaim) 
		{
			*tempsource++;
			*tempaim++;
			
			if (*tempaim == '\0')
			{
				return count;
			}
			continue;
		}
		
		//当进行子串比较的时候，比较失败情况下，让源指针继续移动 
		source++;
		count++;
	
	}
	return -1;
}
void test()
{


	char *p = "rjengoiae3o25wangjunjiefafionawfo893829";  //源字符串 
	char *q = "wangjunjie";  //子串 
	
	//函数调用 
	int n = MyFindStr(p, q);
	

	//结果显示 
	if (n != -1)
	{
		printf("找到了子串， 起始位置为：%d\n", n);
	}
	else
		printf("未找到了子串!\n");
}

int main()
{
	test();

	system("pause");
	return  EXIT_SUCCESS;
}

