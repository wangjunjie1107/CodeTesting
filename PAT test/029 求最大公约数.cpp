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
	问题：输入两个正整数，求其最大公约数


*/

//求最大公约数
int gcd(int a, int b)
{
	//return !b ? a : gcd(b, a % b);

	if (b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}


void test()
{
	int a;
	int b;

	//检测是否到达文件结尾
	while (scanf("%d%d", &a, &b) != EOF)
	{
		cout << gcd(a, b) << endl;
	}

}
int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

