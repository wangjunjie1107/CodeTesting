
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void Bubble(int arr[], int len)
{
	for (int i = 0; i < len-1; i++)
	{
		//第一次排序：整个数组
		//第二次排序：整个数组 —1，因为已经找出最大数了
		//每次都减一，直到最后两个数 
		for (int j = 0; j < len - 1 - i; j++)   
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return;
}

int main()
{

	int arr[] = { 3,5,2,7,9,122,1,8,10,4,6 };

	Bubble(arr, 11);


	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}


	system("pause");
	return EXIT_SUCCESS;
}
