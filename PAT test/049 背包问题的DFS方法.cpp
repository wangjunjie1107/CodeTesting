#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<queue>
#include<map>
#include<stack>
#include<algorithm>

using namespace std;

/*
	DFS:深度优先遍历

	问题：有n件物品，每件物品的重量为w[i],价值为c[i]。
		  现在需要选出若干件物品放入到一个容量为V的背包中，使得在选入背包的
		  物品重量和不超过容量V的前提下，让背包中物品的价值之和最大，求最大价值。
		  n = [1-20]
*/

const int maxn = 21;
int n;				//物品件数
int V;				//背包容量
int maxValue = 0;	//当前记录的最大价值
int w[maxn];		//每件物品的重量
int c[maxn];		//每件物品的价值


//深度优先遍历，index为当前处理的物品的编号
void DFS(int index, int sumW, int sumC)
{
	//已经完成了对n件物品的选择
	if (index == n)
	{
		return;
	}
	
	//每种物品的选择都是一个岔路口，有选与不选两条道路

	//不选择第index+1件物品
	DFS(index + 1, sumW, sumC);

	//剪枝

	//当加入index件物品后，未超过容量V，才进行选择
	if (sumW + w[index] <= V)
	{
		//如果加入index件物品后，最大价值大于maxValue，则更新maxValue
		if (sumC + c[index] > maxValue)
		{
			maxValue = sumC + c[index];//更新最大价值maxValue
		}

		//选择第index+1件物品
		DFS(index + 1, sumW + w[index], sumC + c[index]);
	}
}


void test()
{
	//输入物品件数
	cin >> n;

	//输入背包容量
	cin >> V;

	//输入每件物品的重量
	for (int i = 0; i < n; i++)
	{
		cin >> w[i];
	}

	//输入每件物品的价值
	for (int i = 0; i < n; i++)
	{
		cin >> c[i];
	}

	//进行遍历
	DFS(0, 0, 0);

	//打印结果
	cout << maxValue << endl;

	return;
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

