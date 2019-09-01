#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
	int count;
	int * array;
	int n;
	
	printf("请输入要申请数组的个数：");
	scanf("%d", &n);
	
	array = (int *)malloc(n * sizeof(int));
	
	if(array == NULL)
	{
		printf("申请空间失败\n");
		return -1;
	}
	
	//将申请到的空间清零
	memset(array, 0, sizeof(int) * n);
	
	for(count = 0; count < n; count++)
	{
		array[count] = count;  //赋值 
		printf("%2d\n", array[count]);  //打印 
	}
	
	//释放 array 所指向的一块内存空间
	//array 是一个任意类型的指针变量
	//指向被释放区域的首地址
	//对同一内存空间多次释放会出错
	
	free(array);
	
	return 0; 
	
	 
 } 
