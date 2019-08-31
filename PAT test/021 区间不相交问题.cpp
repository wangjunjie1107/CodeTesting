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
#include<algorithm>

using namespace std;

/*

	区间不相交问题：给出N个开区间（x,y),从中选择尽可能多的开区间，使得这些区间两两没有交集。

	解决：存储区间，排序，按照右端点从大到小排序，然后从右端点最大的区间开始依次选择

		  如果选择的区间的右端点与上一个区间的左端点不重合，则选择有效，进行计数。
*/

int const maxn = 110;

//开区间的结构体，包含x,y两个端点
struct Interval 
{
	int x; //左端点
	int y; //右端点
}openInterval[maxn];

bool myCompare(Interval a, Interval b)
{
	//按右端点排序，右端点大的在前
	if (a.y != b.y)
	{
		return a.y > b.y;
	}
	else
	{
		//右端点相同，左端点大的在前
		return a.x > b.x;
	}

}

void test()
{
	int n; //将要接收的区间的数量
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> openInterval[i].x;   //接收左端点
		cin >> openInterval[i].y;   //接收右端点
	}

	//进行排序，右端点大的在前
	sort(openInterval, openInterval + n, myCompare);

	//countNumber记录不相交区间的个数
	//lastInterval记录上一个区间的左端点，用来与下一个选择的区间的右端点进行比较
	int countNumber = 1;
	int lastInterval = openInterval[0].x;
	for (int i = 1; i < n; i++)
	{
		//如果选择的区间的右端点 与 上一个区间的左端点 相比小或等于，也就是不相交，则计数
		if (openInterval[i].y <= lastInterval)
		{
			lastInterval = openInterval[i].x; //记录当前选中的区间的左端点，进行下一轮比较
			++countNumber;  //有效区间加1
		}
	}

	cout << countNumber << endl;

}


int main()
{
	test();
		
	system("pause"); 
	return EXIT_SUCCESS;
}

