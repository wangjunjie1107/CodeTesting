#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

/*
1、添加头文件 time.h  stdlib.h
2、添加随机数种子 srand((unsigend int )time(NULL));
3、生成随机数 rand()  %  
*/

int main()
{
	//添加随机数种子
	srand((unsigned int)time(NULL));
	for(int i = 0; i < 10; i++)
	{
		printf("%d\n", rand() % 11 + 50);//50-60
	}
	
	return 0; 
 } 
