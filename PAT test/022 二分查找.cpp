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
   ���ֲ���

	Ҫ������β�ϸ��������ݼ�������Ҫ��arr[mid]>x�����������У�leftΪ�½磬rightΪ�Ͻ磬xΪ����ѯ������
*/

int binarySearch(int arr[], int left, int right, int x)
{
	int mid;
	//��߽�ҪС�ڵ����ұ߽���Ҳ���Ч
	while (left <= right)
	{
		//mid = (left + right) / 2;
		
		//����Ͻ糬����int���ݷ�Χ��һ�룬������ѯԪ��������Ľӽ��Ͻ�Ĳ��֣�
		//��left+right�п��ܻᵼ������������������� 
		//��ˣ��� left + ( right - left ) / 2 ���� 
		mid = left + (right - left) / 2; 
			
		if (arr[mid] == x)
		{
			//�����ȣ����ҵ�x������λ��
			return mid;
		}
		else if (arr[mid] > x)
		{
			//�������x���������Ӧ������߼�����
			right = mid - 1; //�����ұ߽磬��߽粻��
		}
		else if (arr[mid] < x)
		{
			//���С��x���������Ӧ�����ұ߼�����
			left = mid + 1; //������߽磬�ұ߽粻��
		}
	}

	//����ʧ��
	return -1;
}

void test()
{
	//��֤�ϸ����
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

