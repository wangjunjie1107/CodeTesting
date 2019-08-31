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
   木棒切割问题：给出N根木棒，长度均已知，现在希望通过切割它们来得到至少K段长度相等的木棒

				（长度必须是整数），问这些长度相等的木棒最长能有多长？

	解决：二分法，求符合K段木棒要求的最大长度
*/

const int maxn = 100;			//木棒最大个数
int treeStick[maxn] = { 0 };	//存储木棒长度
int mostLength = 0;				//木棒的最大长度
int numberN = 0;			   //待切割木棒的个数




//计算 n根木棒 能得到多少长度为 length 的木棒
int stickNumber(int length)
{
	int countNumber = 0;

	for (int i = 0; i < numberN; i++)
	{
		countNumber += (treeStick[i] / length);
	}

	return countNumber;
}


int mostLengthForStick()
{
	int k;  //最少要得到k段长度相等的木棒

	cout << "输入木棒的数目numberN和最少要得到的木棒个数k" << endl;
	cin >> numberN;
	cin >> k;

	//输入每根木棒的长度
	cout << "请依次输入木棒长度：" << endl;
	for (int i = 0; i < numberN; i++)
	{
		cin >> treeStick[i];
	}

	//将木棒长度进行从小到大排序
	for (int i = 0; i < numberN; i++)
	{
		for (int j = i + 1; j < numberN; j++)
		{
			if (treeStick[i] > treeStick[j])
			{
				int temp = treeStick[i];
				treeStick[i] = treeStick[j];
				treeStick[j] = temp;
			}
		}
	}
	
	//输出，检测排序
	for (int i = 0; i < numberN; i++)
	{
		cout << treeStick[i] << "  ";
	}

	//进行二分查找
	int left = 1;						  //最小长度为1
	int right = treeStick[numberN - 1];	  //最大长度为木棒的最大长度
	int mid = (left + right) / 2;

	cout << endl << "进行二分查找" << endl;
	cout << stickNumber(20);

	//while循环有问题
	while (left < right)
	{
		//如果数量小，说明mid较大，应该在左区间查找
		if (stickNumber(mid) < k)
		{
			right = mid;
		}
		else
		{
			//如果数量大于等于，说明mid小，应该在右区间查找
			left = mid;
		}

		mid = (left + right) / 2;
	}

	return right - 1;
}

void test()
{
	int temp = mostLengthForStick();
	cout << temp << endl;
	cout << stickNumber(temp) << endl;
}


int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

