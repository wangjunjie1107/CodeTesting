#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<cstdio>
#include<time.h>
#include<ctime>

/*

	����һ����������ɵļ��ϣ������е�����������ͬ������Ҫ������Ϊ�����Ӽ��ϣ�
	ʹ���������Ӽ��ϵĲ���Ϊԭ���ϡ�����Ϊ�ռ���ͬʱ�������Ӽ��ϵ�Ԫ�ظ���n1��n2֮��
	�ľ���ֵ|n1-n2|������С��ǰ���£�Ҫ�����Ǹ��Ե�Ԫ��֮��S1��S2֮��|S1-S2|�����ܴ�
	
	�����|S1-S2|���ڶ��٣�

	�����ƽ��Ԫ�ظ�����ǰһ��С��Ԫ����һ�����ϣ���һ����Ԫ����һ�����ϣ�
		  
		  �����Ļ���ֵ�ͻᾡ���ܴ�
*/
using namespace std;

const int maxn = 10010;
int A[maxn] = { 0 };
int n = 0;

//ѡȡ�����Ԫ��������[left,right]���л���
int randPartition(int A[], int left, int right)
{
	//����[left,right]�ڵ������
	int p = (round(1.0 * rand() / RAND_MAX * (right - left) + left));

	//����A[p]��A[left]
	swap(A[p], A[left]);

	//��������
	int temp = A[left];   //��A[left]�������ʱ����temp
	while (left < right)  //ֻҪleft��right������
	{
		//��������right
		while (left < right && A[right] > temp)
		{
			--right;
		}
		A[left] = A[right];  //��A[right]����A[left]

		//��������left
		while (left < right && A[left] <= temp)
		{
			++left;
		}
		A[right] = A[left];	//��A[left]����A[right]
	}

	A[left] = temp;		//��temp�ŵ�left��right�����ĵط�

	return left;		//�����������±�
}


//���ѡ���㷨����A[left,right]���ҵ��� K ��������������з�
void randSelect(int A[], int left, int right, int K)
{
	if (left == right)
	{
		return;  //�ﵽ�߽�
	}

	//���ֺ���Ԫ��λ��ΪP
	int p = randPartition(A, left, right);

	//A[p] �� A[left,right] �еĵ� M ��
	int M = p - left + 1;

	//�ҵ���K�����
	if (K == M)
	{
		return;
	}
	else if (K < M)  //��K���������Ԫ���
	{
		randSelect(A, left, p - 1, K);  //����Ԫ����ҵ�K��
	}
	else if(K > M)   //��K���������Ԫ�Ҳ�
	{
		randSelect(A, p + 1, right, K - M);  //����Ԫ�Ҳ��ҵ�K��
	}
}


void test()
{
	//��ʼ�����������
	srand((unsigned)time(NULL));

	//sum��sum1��¼��������֮�����з�֮���ǰn/2��Ԫ��֮��
	int sum = 0;
	int sum1 = 0;

	cout << "���������ֵĸ�����" << endl;
	cin >> n;	//��������

	cout << "������N������" << endl;
	for (int i = 0; i < n; ++i)
	{
		cin >> A[i];	//��������
		sum += A[i];	//�ۻ���������֮��
	}

	//Ѱ�ҵ�n/2��������������з�
	randSelect(A, 0, n - 1, n / 2);

	for (int i = 0; i < n / 2; ++i)
	{
		sum1 += A[i];  //��¼��С������Ԫ��֮��
	}

	//�������Ӽ��͵�Ԫ�غ�֮��
	cout << "(sum - sum1) - sum1 = " << (sum - sum1) - sum1 << endl;
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

