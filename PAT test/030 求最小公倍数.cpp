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
	int d; //���Լ��
	int e; //��С������

	//����Ƿ񵽴��ļ���β CRT + c�� ����
	while (scanf("%d%d", &a, &b) != EOF)
	{
		d = gcd(a, b);
		e = a / d * b;  // e = a * b / d  ���ǵ� a*b ���ܻ�����������ȳ��� d
		cout << e << endl;
	}

}
int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

