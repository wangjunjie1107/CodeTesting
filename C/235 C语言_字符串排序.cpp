#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void MyStringRank(char ** arr, int len)
{
	
	//用数组的方法，类似于冒泡排序 
/*	for(int i = 0; i < len; i++)
	{
		for(int j = 0; j < len - i - 1; j++)
		{
			if(arr[j][0] > arr[j+1][0])
			{
				char * temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp; 
			}
		}
	}
*/
	//用指针的方法
	for(int p = 0; p < len; p++)
	{
		for(int q = 0; q < len - p - 1; q++)
		{
			if(**(arr + q) > **(arr + q + 1))
			{
				char * temp1 = *(arr + q);
				*(arr + q) = *(arr + q + 1);
				*(arr + q + 1) = temp1;
			}
		}
	 } 
	 
	//混合方法
/*	for(int k = 0; k < len; k++)
	{
		for(int m = 0; m < len - k - 1; m++)
		{
			if(*arr[m] > *arr[m+1])
			{
				char * temp2 = arr[m];
				arr[m] = arr[m+1];
				arr[m+1] = temp2;
			}
		}
	 } 
*/
}

int main()
{
	//相当于一个二维数组 
	char * arr[6] = {"ahello", "cworld", "ekeep", "bgoing", "flearning", "dexerciseing"};
	
	MyStringRank(arr, 6);
	
	for(int i = 0; i < 6; i++)
	{
		printf("%s\n", arr[i]);
	}
	
	return 0;
}
