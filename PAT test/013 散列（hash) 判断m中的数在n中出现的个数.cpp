#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
using namespace std;

//问题：判断m中的数在n中出现的次数
//解决：散列（hash)以空间换时间

const int maxn = 100010;
int hashTable[maxn] = { 0 };

void test()
{
	int n, m, x;

	//输入n和m
	cin >> n >> m;

	//输入n个数到数组中
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		++hashTable[x]; // x中的值表示在n中出现的次数
	}

	//输入m个数
	for (int i = 0; i < m; i++)
	{
		cin >> x;

		//先判断x在n中出现过没有
		if (hashTable[x] >= 1)
		{
			//打印出现的次数
			cout << x << "在n中出现的次数为：" << hashTable[x] << "次。" << endl;
		}
		else
		{
			cout << x << "没有在n中出现过！" << endl;
		}
	}

}


int main()
{
	test();

	system("pause"); 
	return EXIT_SUCCESS;
}

