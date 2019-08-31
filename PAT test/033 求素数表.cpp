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
    问题：快速判断一个数是否为素数

	素数：只能被1和本身整数的数，1既不是素数，也不是合数

	解决：只需要判断（ 2 - 根号n ）之间的数有没有被整除可以了
*/
const int maxn = 201;         //表长
int prime[maxn] = { 0 };	  //存储所有素数
int pNum = 0;			      //统计素数的个数
bool p[maxn] = { 0 };		  //p[i] == true表示此数为素数

bool isPrime(int n)
{
	if (n <= 1)
	{
		return false;
	}

	//根号n
	int sqrN = (int)sqrt(1.0 * n);

	//遍历 2-根号n 判断
	for (int i = 2; i <= sqrN; i++)
	{
		if (n % i == 0)
		{
			return false;  // n 是 i 的倍数， n 不是素数
		}
	}
	return true;//是素数
}

void findPrime()
{
	for (int i = 0; i < maxn; ++i)
	{
		if (isPrime(i))
		{
			prime[pNum++] = i;  //存储当前的素数i
			p[i] = true;		//标记为true
		}
	}
}

void test()
{
	//求1-100当中的素数
	findPrime();

	for (int i = 0; i < maxn; i++)
	{
		if (p[i] == true)
		{
			cout << i << " ";
		}
	}
	cout << endl;
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

