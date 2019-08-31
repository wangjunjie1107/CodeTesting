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

	给定一个由整数组成的集合，集合中的整数各不相同，现在要将它分为两个子集合，
	使得这两个子集合的并集为原集合、交集为空集，同时在两个子集合的元素个数n1与n2之差
	的绝对值|n1-n2|尽可能小的前提下，要求它们各自的元素之和S1与S2之差|S1-S2|尽可能大。
	
	求这个|S1-S2|等于多少？

	解决：平分元素个数，前一半小的元素在一个集合，后一半大的元素在一个集合，
		  
		  这样的话差值就会尽可能大。
*/
using namespace std;

const int maxn = 10010;
int A[maxn] = { 0 };
int n = 0;

//选取随机主元，对区间[left,right]进行划分
int randPartition(int A[], int left, int right)
{
	//生成[left,right]内的随机数
	int p = (round(1.0 * rand() / RAND_MAX * (right - left) + left));

	//交换A[p]和A[left]
	swap(A[p], A[left]);

	//划分区间
	int temp = A[left];   //将A[left]存放至临时变量temp
	while (left < right)  //只要left与right不相遇
	{
		//反复左移right
		while (left < right && A[right] > temp)
		{
			--right;
		}
		A[left] = A[right];  //将A[right]移至A[left]

		//反复右移left
		while (left < right && A[left] <= temp)
		{
			++left;
		}
		A[right] = A[left];	//将A[left]移至A[right]
	}

	A[left] = temp;		//把temp放到left与right相遇的地方

	return left;		//返回相遇的下标
}


//随机选择算法，从A[left,right]中找到第 K 大的数，并进行切分
void randSelect(int A[], int left, int right, int K)
{
	if (left == right)
	{
		return;  //达到边界
	}

	//划分后主元的位置为P
	int p = randPartition(A, left, right);

	//A[p] 是 A[left,right] 中的第 M 大
	int M = p - left + 1;

	//找到第K大的数
	if (K == M)
	{
		return;
	}
	else if (K < M)  //第K大的数在主元左侧
	{
		randSelect(A, left, p - 1, K);  //往主元左侧找第K大
	}
	else if(K > M)   //第K大的数在主元右侧
	{
		randSelect(A, p + 1, right, K - M);  //往主元右侧找第K大
	}
}


void test()
{
	//初始化随机数种子
	srand((unsigned)time(NULL));

	//sum和sum1记录所有整数之和与切分之后的前n/2个元素之和
	int sum = 0;
	int sum1 = 0;

	cout << "请输入数字的个数：" << endl;
	cin >> n;	//整数个数

	cout << "请输入N个数字" << endl;
	for (int i = 0; i < n; ++i)
	{
		cin >> A[i];	//输入整数
		sum += A[i];	//累积所有整数之和
	}

	//寻找第n/2大的数，并进行切分
	randSelect(A, 0, n - 1, n / 2);

	for (int i = 0; i < n / 2; ++i)
	{
		sum1 += A[i];  //记录较小集合中元素之和
	}

	//求两个子集和的元素和之差
	cout << "(sum - sum1) - sum1 = " << (sum - sum1) - sum1 << endl;
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

