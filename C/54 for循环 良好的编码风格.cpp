#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 10  //之后如果要改变数组大小，直接在这里改变 


int main()
{
	int index,score[SIZE];
	int sum = 0;
	float average;
	
	//输入数字，输出数字验证是否输入正确 
	printf("Please enter %d golf scores:\n", SIZE);
	for(index=0; index<SIZE; index++)
	{
		scanf("%d", &score[index]);
	}
	printf("The scores read in are as follows:\n"); 
	for(index=0; index<SIZE; index++)
	{
		printf("%5d", score[index]); //将输入的值再打印一遍 
	}
	printf("\n"); 
	//求和 求平均值
	for(index=0; index<SIZE; index++)
	{
		sum+=score[index]; 
	}
	average = (float) sum / SIZE;
	printf("Sum of scores = %d, average = %.2f\n", sum,average);
	
	
	return 0;
	 
	
}
