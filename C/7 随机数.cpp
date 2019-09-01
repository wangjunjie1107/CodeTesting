#include<stdio.h>
#include<time.h>  
#include<stdlib.h>
//   产生随机数需要的头文件  time.h  stdlib.h 
//   添加随机数种子
//   获取随机数 
//清屏操作   system("cls") 
int main() 
{
	srand((unsigned int )time(NULL));//每次获取的随机数都不一样
	int num;
	int value=rand() % 100;
	for(;;)
	{
		printf("请输入数字："); 
		scanf("%d",num);
		if(value>num)
		{
		  printf("您输入的数太大了！\n");
	    }
		else if(value<num)
		{
			printf("您输入的数太小了！\n"); 
		} 
		else
		{
			printf("您猜对了！\n");
			break;
		}
	} 
	return 0;	
} 
