#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
using namespace std;

//利用递归求解n的阶乘

int func(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return func(n - 1) * n;
	}
}

void test()
{
	int n;
	cin >> n;
	cout << func(n) << endl;
}


int main()
{
	while (1)
	{
		cout << "请输入一个数：";
		
		test();
		
		cout << "继续吗？" << endl;
		string s;
		cin >> s;
		
		if (s == "yes" || s == "y" || s == "Yes" || s == "YES")
		{
			continue;
		}
		else
		{
			cout << "再见" << endl;
			break;
		}
		
	}

	system("pause"); 
	return EXIT_SUCCESS;
}

