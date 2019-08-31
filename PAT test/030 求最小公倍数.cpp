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
	int d; //最大公约数
	int e; //最小公倍数

	//检测是否到达文件结尾 CRT + c键 结束
	while (scanf("%d%d", &a, &b) != EOF)
	{
		d = gcd(a, b);
		e = a / d * b;  // e = a * b / d  考虑到 a*b 可能会溢出，所以先除以 d
		cout << e << endl;
	}

}
int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

