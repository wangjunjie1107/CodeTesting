#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define MAX 3

int main()
{
	//随机数种子 
	srand((unsigned int)time(NULL));
	
	//开辟堆空间 
	int *p = (int *)malloc(sizeof(int) * MAX);
	
	
	//赋值 打印排序前的数组
	printf("打印排序前的数组：\n");
	for(int i = 0; i < MAX; i++)
	{
		p[i] = rand()%99;
		printf("%d\n", p[i]); 
	}
	
	//冒泡排序
	for(int i = 0; i < MAX - 1; i++)
	{
		for(int j = 0;  j < MAX - i - 1; j++)
		{
			//从小到大排序 
			if(*(p + j) > *(p + j + 1))
			{ 
				int  temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp; 
			} 
		}
	} 
	
	//打印排序后的数组
	printf("排序后：\n"); 
	for(int k = 0; k < MAX; k++)
	{
		printf("%d\n", *(p + k));
	}
	
	
	free(p);  //使用完后释放堆空间 
	
	return 0;
}
