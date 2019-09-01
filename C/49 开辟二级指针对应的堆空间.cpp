#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	//int arr[5][3];
	//开辟二级指针对应的堆空间 
	int** p = (int**)malloc(sizeof(int*)*5);
	
	for(int i = 0; i<5; i++)
	{
		//开辟一级指针对应的堆空间  
		p[i] = (int*)malloc(sizeof(int)*3);	
	}
	
	for(int i = 0; i<5; i++)    //存值 
	{
		for(int j = 0; j<3; j++)
		{
			scanf("%d", &p[i][j]);
		}
	}
	
	for(int i = 0; i<5; i++)     //取值 
	{
		for(int j = 0; j<3; j++)
		{
			printf("	%d", p[i][j]);
		}
		printf("\n");
	 } 
	 
	 //释放
	 for(int i = 0; i<5; i++)
	 {
	 	free(p[i]);   //释放内层空间 
	 }
	 free(p);  //释放外层空间 
	 
	 return 0; 
 } 
