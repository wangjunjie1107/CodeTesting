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



//递归实现2-路归并排序

const int maxn = 100;

//将数组A[]中的（L1,R1),（L2,R2）两个区间合并成一个区间，此处L2即为R1+1
void merge(int A[], int L1, int R1, int L2, int R2)
{
	int i = L1;
	int j = L2;

	int temp[maxn] = { 0 };
	int index = 0;

	while (i <= R1 && j <= R2)
	{
		if (A[i] <= A[j])
		{
			//将A[i]加入到数组中
			temp[index++] = A[i++];
		}
		else
		{
			//将A[j]加入到数组中
			temp[index++] = A[j++];

		}
	}


	//将剩余的数字全部追加在尾部
	while (i <= R1)
	{
		temp[index++] = A[i++];
	}
	while (j <= R2)
	{
		temp[index++] = A[j++];
	}

	//将合并后的序列赋值回数组A，下标从L1开始
	for (int k = 0; k < index; ++k)
	{
		A[L1 + k] = temp[k];
	}
}

//归并排序
void mergeSort(int A[], int left, int right)
{
	if (left < right)
	{
		int mid = (left + right) / 2;
		
		//递归，归并排序左边部分
		mergeSort(A, left, mid);
		//递归，归并排序左边部分
		mergeSort(A, mid + 1, right);

		//合并左右区间
		merge(A, left, mid, mid + 1, right);
	}
}



int main()
{
	int A[] = { 16,0,156,16,2,851,-1,16,23,448,6115,95,4812,136 };
	int n = 0;
	int m = sizeof(A) / sizeof(int);

	mergeSort(A, n, m - 1);
	
	for (int k = n; k < m; k++)
	{
		cout << A[k] << " ";
	}
	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}

