#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
using namespace std;

//利用递归实现 n皇后问题 
/*
	n皇后问题：指在一个n*n的国际象棋盘上放置n个皇后，
	使得这n个皇后两两均不在同一行、同一列、同一条对角线上，
	求合法的方案数？

	解决：全排列所有的可能性，然后两两判断
*/

const int maxn = 11;				//棋盘的最大边长为10
int countP = 0;						//合法的方案数
int n;								//棋盘的边长
int p[maxn];						//存储当前排列
int hashTable[maxn] = { false };	//用来表示x是否在队列内

void generateP(int index)
{
	//每填充完成一次排列，先判断，如果符合情况，就打印
	if(index == n + 1)
	{
		bool flag = true;
		for (int i = 1; i <= n; i++)
		{
			for (int j = i+1; j <= n; j++)
			{
				//判断本组排列中是否有在一条对角线上
				if (abs(i - j) == abs(p[i] - p[j]))
				{
					//如果在一条对角线上，则为false
					flag = false;
				}
			}
		}

		while (flag == true)
		{
			for (int i = 1; i <= n; i++)
			{
				cout << p[i] << " ";
			}
			cout << endl;
			++countP;
			return;
		}
		
	}

	//将1-n填充到排列中
	for (int x = 1; x <= n; x++)
	{
		if (hashTable[x] == false)
		{
			p[index] = x;
			hashTable[x] = true;
			generateP(index + 1);
			hashTable[x] = false;
		}
	}
}
void test()
{
	cout << "请输入皇后棋盘的边长：" << endl;
	cin >> n;

	generateP(1); //从p[1]开始填充一次排列

	cout << "一共有" << countP << "中合法方案" << endl;
}


int main()
{
	test();
		
	system("pause"); 
	return EXIT_SUCCESS;
}

