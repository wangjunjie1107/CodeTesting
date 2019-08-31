#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
using namespace std;

int Fibonacci(int n)
{
	//µÝ¹é±ß½ç
	if (n == 1 || n == 0)
	{
		return 1;
	}
	else
	{
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}

void test()
{
	int n;
	cin >> n;
	cout << Fibonacci(n) << endl;
}


int main()
{
	test();
		
	system("pause"); 
	return EXIT_SUCCESS;
}

