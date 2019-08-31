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

	给一个正整数N，求N的所有的质因子，并且以 N = p1 ^ k1 + p2 ^ k2 ...形式输出 	

*/

const int maxn = 100010;
int prime[maxn];	//存放素数的表格
int pNum = 0;		//记录素数的个数

struct factor
{
	int x;		 //存放质因子
	int count;	//存放当前质因子的个数
}fac[10];


//判断n是不是为素数
bool is_prime(int n)
{
	//如果是1，直接返回false
	if (n == 1)
	{
		return false;
	}

	//遍历 1 - 根号n 即可
	int sqr = (int)sqrt(1.0 * n);
	for (int i = 2; i <= sqr; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	//如果在 1-根号n 之间没有找到能整数n的数，则n为素数
	return true;
}

//求素数表  遍历 1 - maxn
void Find_Prime()
{
	for (int i = 1; i < maxn; i++)
	{
		//如果此数字为素数，就将其存储在素数表中
		if (is_prime(i) == true)
		{
			prime[pNum++] = i;
		}
	}
}


void test()
{
	//首先查找素数表
	Find_Prime();

	int n;				//要进行质因子分解的数
	int num = 0;		//为n的不同质因子的个数

	//输入n
	cin >> n;

	//特殊情况，独立判断
	if (n == 1)
	{
		cout << "1==1" << endl;
	}
	else
	{
		cout << n << "=";

		//求根号n
		int sqr = (int)sqrt(n);
		
		//枚举  根号n  以内的素数，并求 n 的质因子及其数量count
		for (int i = 0; i < pNum && prime[i] <= sqr && num <= 10; ++i)
		{
			//如果n能被prime[i]整除，则prime[i]为n的一个质因子
			if (n % prime[i] == 0)
			{
				//记录该因子
				fac[num].x = prime[i];

				//计算当前质因子的数量
				fac[num].count = 0;
				while (n % prime[i] == 0)
				{
					++(fac[num].count);
					n /= prime[i];
				}

				//不同质因子的数量加1
				++num;
			}
			
			//及时退出循环，节省时间
			if (n == 1)
			{
				break;
			}
		}

		//如果无法被根号n以内的质因子除尽
		if (n != 1)
		{
			fac[num].x = n;			//那么一定有一个大于根号n的质因子，如果有，这个数就是n
			fac[num++].count = 1;
		}

		//按格式输出结果
		for (int i = 0; i < num; ++i)
		{
			if (i > 0)
			{
				cout << "*";
			}

			cout << fac[i].x;

			if (fac[i].count > 1)
			{
				cout << "^" << fac[i].count;
			}
		}

		cout << endl;
	}
}


int main()
{
	int n = 0;
	
	while (n < 10)
	{
		test();
		++n;
	}

	system("pause");
	return EXIT_SUCCESS;
}

