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
	���⣺�����������������������Լ��


*/

//�����Լ��
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

	//����Ƿ񵽴��ļ���β
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

