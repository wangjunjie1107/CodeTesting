#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
using namespace std;

//�������򣬽����з�Ϊ�������к��������У�ÿ�δ�����������һ��ֵ�����뵽�������С�
//���뷽���ǴӺ���ǰö�٣����������е�λ���Ƿ����
void insertSort(int arr[], int n)
{
	//����n-1������
	for (int i = 1; i < n; i++)
	{
		//��i��ʼ����
		int temp = arr[i];

		//����ǰ�±��¼����
		int j = i;

		//ֻҪtempС��������е����һ��ֵ�����������Ԫ�غ���
		while (j > 0 && temp < arr[j - 1])
		{
			arr[j] = arr[j - 1];
			j--;
		}
		//����Ԫ��λ��Ϊj
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

