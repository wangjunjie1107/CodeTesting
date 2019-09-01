#include<stdio.h>

int main()
{
	//冒泡法排序：从大到小 
	int arr[] = {1,2,3,33,4242,546,2424,5464,444};
	
	int a = sizeof(arr) / sizeof(arr[0]);
	
		 
	for(int i = 0; i < a; i++)
	{
		for(int j = 0; j < a - i; j++)
		{
			if(arr[j] < arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	 } 
	 
	 //打印数据 
	 for(int k = 0; k < a; k++)
	 {
	 	printf("%d\n", arr[k]);
	 }
	 
	 return 0;
 } 
