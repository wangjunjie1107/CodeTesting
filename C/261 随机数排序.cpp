#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>

//产生随机数并赋值
void CreateNumber(int *arr)
{
	
	//随机数种子
	srand((int)time(NULL)); 
	
	printf("排序前：\n");
	 
	for(int i = 0; i < 20; i++)
	{
		//赋值操作 
		arr[i] = rand()%101;  // 1-100
		printf("%d\t", arr[i]); //打印排序前的数组 
	} 
	printf("\n\n");
} 

//冒泡排序 
void bubblesort(int * arr)
{
	for(int i = 0; i < 19; i++)
	{
		for(int j = 0; j < 19 - i; j++)
		{
			//从小到大排序 
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp; 
			}
		}
	 } 
}


int main()
{
	
	int arr[20];
	
	
	//1 、产生随机数并赋值 
	CreateNumber(arr); 
	
	//2 、冒泡排序 
	bubblesort(arr); 
	
	//3、打印排序后的数 
	printf("排序后：\n");
	for(int i = 0; i < 20; i++)
	{ 
		printf("%d\t", arr[i]); //打印排序后的数组 
	} 
	
	return 0; 
}
