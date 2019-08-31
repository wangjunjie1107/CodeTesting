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

bool isPrime(int n)
{
	if (n <= 1)
	{
		return false;
	}

	//根号n
	int sqrN = (int)sqrt(1.0 * n);

	//遍历 2-根号n 判断
	for (int i = 2; i < sqrN; i++)
	{
		if (n % i == 0)
		{
			return false;  // n 是 i 的倍数， n 不是素数
		}
	}
	return true;//是素数
}
void test()
{
	int n;
	cin >> n;
	
	while (n > 1)
	{
		if (isPrime(n))
		{
			cout << n << " is a prime." << endl;
		} 
		else
		{
			cout << n << " is not a prime." << endl;
		}

		cin >> n;
	}

	cout << "Error,"<< n << " is not a positive integer." << endl;

}
int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

