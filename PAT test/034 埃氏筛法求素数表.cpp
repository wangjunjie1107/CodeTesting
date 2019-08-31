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
		筛选法寻找素数
*/

const int maxn = 101;	    //最大数值
int prime[maxn] = { 0 };	//存储素数
int pNum = 0;				//记录素数个数
bool p[maxn] = { false };	    //p[i] = false 代表是 i 是素数  初始化全部为false

void findPrime()
{
	for (int i = 2; i < maxn; i++)
	{
		if (p[i] == false)
		{
			//将i存入素数数组中
			prime[pNum++] = i;
			//将所有 i 的倍数 标记为非素数，因为i可以整除它
			//此后在判断的时候，会直接略过i的倍数，节省时间 
			for (int j = i + i; j < maxn; j += i)
			{
				p[j] = true;
			}
		}
	}
}

void test()
{
	findPrime();
	cout << pNum << endl;
	for (int i = 0; i < pNum; i++)
	{
		cout << prime[i] << " ";
	}
	cout << endl;
}


int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

