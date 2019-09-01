#include<stdio.h>

int main()
{
	int arr[14]={51,54,4,6,15,48,1213,41,215,3,2,15,48,0};
	int i;
	int j;                //数组及变量定义 
	int temp;
	 							   //进行冒泡排序
	for(i=0 ; i<14 ; i++)         //外层执行 数组元素-1次 
	{
		for(j=0 ; j<14-i-1 ; j++)  //内层执行 数组元素-1次-执行次数 
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	printf("冒泡排序的结果为：\n");  //输出数组 
	for(i=0 ; i<14 ; i++)
	{
		printf("%d\n",arr[i]);
	} 
	
	 return 0;
 } 
