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



//�ݹ�ʵ��2-·�鲢����

const int maxn = 100;

//������A[]�еģ�L1,R1),��L2,R2����������ϲ���һ�����䣬�˴�L2��ΪR1+1
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
			//��A[i]���뵽������
			temp[index++] = A[i++];
		}
		else
		{
			//��A[j]���뵽������
			temp[index++] = A[j++];

		}
	}


	//��ʣ�������ȫ��׷����β��
	while (i <= R1)
	{
		temp[index++] = A[i++];
	}
	while (j <= R2)
	{
		temp[index++] = A[j++];
	}

	//���ϲ�������и�ֵ������A���±��L1��ʼ
	for (int k = 0; k < index; ++k)
	{
		A[L1 + k] = temp[k];
	}
}

//�鲢����
void mergeSort(int A[], int left, int right)
{
	if (left < right)
	{
		int mid = (left + right) / 2;
		
		//�ݹ飬�鲢������߲���
		mergeSort(A, left, mid);
		//�ݹ飬�鲢������߲���
		mergeSort(A, mid + 1, right);

		//�ϲ���������
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

