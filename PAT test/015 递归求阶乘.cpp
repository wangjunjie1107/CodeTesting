#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
using namespace std;

//���õݹ����n�Ľ׳�

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
		cout << "������һ������";
		
		test();
		
		cout << "������" << endl;
		string s;
		cin >> s;
		
		if (s == "yes" || s == "y" || s == "Yes" || s == "YES")
		{
			continue;
		}
		else
		{
			cout << "�ټ�" << endl;
			break;
		}
		
	}

	system("pause"); 
	return EXIT_SUCCESS;
}

