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

using namespace std;

/*
		给出两个数字n和m，打印第n个素数到第m个素数

		打印格式：每10个数字占一行，其间以空格分隔，但行末不得有多余空格

*/


const int maxn = 1000001;			     //最多是第10000个素数，因此寻找的范围要大100倍，足够找到第10000个素数
int prime[maxn];						 //用于存储素数
int num = 0;							 //用于表示第几个素数

										//初始化数组时，赋值为0，则数组的全部位都为0，
										//如果赋值其他值，则只有第一位为此值
bool isNotPrime[maxn] = { 0 };		     //筛选法，此数字不是素数，则此位为true


void findPrime(int m)
{
	for (int i = 2; i < maxn; i++)
	{
		//从2开始找素数，如果isNotPrime[i]为加，则i为素数，将其存储到素数数组中
		if (isNotPrime[i] == false)
		{
			prime[num++] = i;
		}

		//如果已经找到了第m位素数，则跳出
		if (num >= m)
		{
			break;
		}

		//删选法，所有 i 的倍数都被标记为false
		for (int j = i + i; j < maxn; j += i)
		{
			//因为j是i的倍数，所以肯定不会是素数
			isNotPrime[j] = true;
		}
	}
}

void test()
{
	//输入两个数字，表示要输出素数的范围
	int n;
	int m;
	cin >> n;
	cin >> m;

	findPrime(m);//只需要找到第m个素数，就可以停止了

	//打印素数数组
	int count = 0;
	for (int i = n; i <= m; i++)
	{
		++count;

		cout << prime[i - 1];  //下标从n-1开始

		//如果count小于9，且未输入到最后一个数，打印空格
		//如果count等于10，或者已经输入到最后一个数，打印换行符，并重置count为0
		if (count <= 9 && i < m)
		{
			cout << " ";
		}
		else if (count == 10 || i == m)
		{
			cout << endl;
			count = 0;
		}
	}
}


int main()
{
	

	//初始化数组时，赋值为0，则数组的全部位都为0，
	//如果赋值其他值，则只有第一位为此值
	/*cout << isNotPrime[0] << endl;
	cout << isNotPrime[1] << endl;
	cout << isNotPrime[2] << endl;
	cout << isNotPrime[3] << endl;*/
	
	test();

	system("pause");
	return EXIT_SUCCESS;
}

