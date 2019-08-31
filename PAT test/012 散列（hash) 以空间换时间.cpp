#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
using namespace std;

//问题：查询m个数中的每个数分别是否在n个数中出现过
//解决：散列（hash)  以空间换时间


const int maxn = 100010;
bool hashTable[maxn] = { false };

void test()
{
	int n, m, x;
	int count = 0;//记录出现过数字的个数

	cout << "请输入n和m:" << endl;
	cin >> n >> m;

	//输入n个数字
	cout << "请输入n中的数字：" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		hashTable[x] = true;//数字x出现过
	}
	 
	//输入m个数字
	//进行判断m中的数字是否在n中出现过，出现过则为true
	cout << "请输入m中的数字，每次输入一个值：" << endl;
	for (int i = 0; i < m; i++)
	{
		cin >> x;
		if (hashTable[x] == true)
		{
			cout << "Yes" << endl; //如果数字x出现过则输出Yes
			++count;//每当一个数字出现，则计数加1
		}
		else
		{
			cout << "No" << endl;//如果数字x没有出现过则输出No
		}
	}

	//计数结果打印
	cout << "在m中共有" << count << "个数字在n中出现过！" << endl;
}


int main()
{
	test();

	system("pause"); 
	return EXIT_SUCCESS;
}

