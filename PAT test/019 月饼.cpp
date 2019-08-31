#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<math.h>

using namespace std;

/*
	给定所有种类月饼的库存量、总售价以及市场的最大需求量

	试计算可以获得的最大收益是多少？

		注意：一定要先分析清楚题目中给出数值的类型，再进行变量声明。
*/

const int maxCount = 1000;  //月饼的最大种类数
double p[maxCount][3] = { 0 }; //用来存储每种月饼的库存和总售价以及平均价格
double maxProfit = 0;

void test()
{
	int n;				//月饼的种类数
	double needMoonPie;	//月饼的市场最大需求量

	//输入月饼的种类数和月饼的市场最大需求量
	cout << "输入月饼的种类数和月饼的市场最大需求量:" << endl;
	cin >> n;
	cin >> needMoonPie;

	//输入月饼的库存量
	cout << "输入每种月饼的库存量:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> p[i][0];
	}

	//输入每种月饼的总售价
	cout << "输入每种月饼的总售价:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> p[i][1];
	}

	//计算每种月饼对应的单价
	for (int i = 0; i < n; i++)
	{
		p[i][2] = p[i][1] / p[i][0];
	}

	//排序，单价大的在前面
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			//如果前一个数的单价小，则交换两个数据
			if (p[i][2] < p[j][2])
			{
				double temp[3] = { 0 };

				temp[0] = p[i][0];
				temp[1] = p[i][1];
				temp[2] = p[i][2];

				p[i][0] = p[j][0];
				p[i][1] = p[j][1];
				p[i][2] = p[j][2];

				p[j][0] = temp[0];
				p[j][1] = temp[1];
				p[j][2] = temp[2];
			}
		}
	}


	//打印单价数据，观察结果
	for (int i = 0; i < n; i++)
	{
		printf("总售价：%.0f， 单价：%.2f", p[i][1], p[i][2]);
		cout << endl;
	}

	//计算总利益
	int i = 0;
	while (needMoonPie > 0)
	{
		if (p[i][0] <= needMoonPie)
		{
			needMoonPie = needMoonPie - p[i][0];
			maxProfit += p[i][1];
		}
		else
		{
			//如果需要的月饼数量小于存货量，则收益等于单价乘以需求量
			//计算完成后，直接跳出循环，
			maxProfit += p[i][2] * needMoonPie;
			needMoonPie = -1; //保险起见
			break;
		}
		++i;//从单价最高的开始销售，如果还需要则继续销售下一种月饼
	}

	printf("总利益为：%.2f", maxProfit);
	cout << endl;
}


int main()
{
	test();
		
	system("pause"); 
	return EXIT_SUCCESS;
}

