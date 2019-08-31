#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
using namespace std;

//简单的选择排序

void selectSort(int arr[],int n)
{
	for (int i = 0; i < n; i++)
	{
		int k = i; //标记当前最小值
		for (int j = i; j < n; j++)
		{
			//比较得到最小值
			if (arr[j] < arr[k])
			{
				k = j;
			}
		}
		
		//如果原来的基准被改变
		if (k != i)
		{
			int temp = arr[i];
			arr[i] = arr[k];
			arr[k] = temp;
		}
	}
}

int main()
{
	int arr[] = { 1,324,5452,232,54,654,232,546,43,-1,434,54,0 };
	int n = sizeof(arr) / sizeof(int);

	selectSort(arr, n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause"); 
	return EXIT_SUCCESS;
}

