#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<algorithm>

using namespace std;

/*
   二分查找

	要求：数组尾严格递增（或递减，则需要换arr[mid]>x的条件）序列，left为下界，right为上界，x为欲查询的数字
*/

int binarySearch(int arr[], int left, int right, int x)
{
	int mid;
	//左边界要小于等于右边界查找才有效
	while (left <= right)
	{
		//mid = (left + right) / 2;
		
		//如果上界超过了int数据范围的一半，当欲查询元素在数组的接近上界的部分，
		//则left+right有可能会导致数据溢出，产生错误 
		//因此，用 left + ( right - left ) / 2 代替 
		mid = left + (right - left) / 2; 
			
		if (arr[mid] == x)
		{
			//如果相等，则找到x，返回位置
			return mid;
		}
		else if (arr[mid] > x)
		{
			//如果大于x，则接下来应该在左边继续找
			right = mid - 1; //重置右边界，左边界不动
		}
		else if (arr[mid] < x)
		{
			//如果小于x，则接下来应该在右边继续找
			left = mid + 1; //重置左边界，右边界不动
		}
	}

	//查找失败
	return -1;
}

void test()
{
	//保证严格递增
	int arr[] = { 0,15,16,18,55,66,998,1025,1200,1500,6585,10000,58202,92582,102589,104894,669888 };
	
	int left = 0;
	int right = sizeof(arr) / sizeof(int);
	int x = 10000;

	cout << binarySearch(arr, left, right, x) << endl;
}


int main()
{
	test();
		
	system("pause"); 
	return EXIT_SUCCESS;
}

