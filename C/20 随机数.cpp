#define _CRT_SECURE_NO_WORNINGS 
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	//函数   #include<time.h>  获取当前系统时间
	
	//函数   #include<stdlib.h>  获取随机数种子 
	//添加随机数种子
	 
	 time_t timer=time(NULL);
	 srand((size_t)time(NULL));
	 for(int i=0; i<100; i++) 
	 {
	 	printf("%d\n", rand()%51+50); //随机数范围为 51-100 
	 }
	 return 0; 
 } 
