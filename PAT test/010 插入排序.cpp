#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
using namespace std;

//插入排序，将序列分为有序序列和无序序列，每次从无序序列拿一个值，插入到有序序列。
//插入方法是从后往前枚举，看有序序列的位置是否合适
void insertSort(int arr[], int n)
{
	//进行n-1趟排序
	for (int i = 1; i < n; i++)
	{
		//从i开始排序
		int temp = arr[i];

		//将当前下标记录下来
		int j = i;

		//只要temp小于有序队列的最后一个值，则将有序队列元素后移
		while (j > 0 && temp < arr[j - 1])
		{
			arr[j] = arr[j - 1];
			j--;
		}
		//插入元素位置为j
		arr[j] = temp;
	}
}
int main()
{
	int arr[] = { -1,0,1,616,161,16,494,161,164,-555,-156118,-2,661,-2};
	int n = sizeof(arr) / sizeof(int);

	insertSort(arr, n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause"); 
	return EXIT_SUCCESS;
}

