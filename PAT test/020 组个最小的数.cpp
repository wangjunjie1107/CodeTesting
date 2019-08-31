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
	问题：组个最小的数
		  给出0-9这十个数字拥有的个数，求这些数字排列得到的最小的数，首位不为0

	解决：贪心算法、先按从小到大的顺序将数字排序，然后依次排列组合
*/

int numberHave[11] = { 0 };			//从0开始存储0-9数字的个数，多写3位，保证程序的健壮性

void test()
{
	cout << "请依次输入数字0-9的个数：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> numberHave[i];			//依次记录0-9的数字的个数
	}

	//排最小的数字
	//如果数字0的个数为0，直接从1-9开始排列其余数字
	if (numberHave[0] == 0)
	{
		for (int i = 1; i < 10; i++)
		{
			for (int j = 0; j < numberHave[i]; j++)
			{
				cout << i;
			}
		}
	}
	else if (numberHave[0] > 0)
	{
		//如果数字0的个数大于0，则先排列第一个不为0的数字，后排列0
		
		//从1-9中找到第一个数量不为0的数字
		int i;
		for (i = 1; i < 10; i++)
		{
			if (numberHave[i] > 0)
			{
				break;
			}
		}

		//先输出此数字,只输入一次,也就是定位首位数字，就行了。
		cout << i;
		numberHave[i]--;

		
		//首位定位以后，按照从大到小的顺序依次输出其他数字
		for (int m = 0; m < 10; m++)
		{
			for (int n = 0; n < numberHave[m]; n++)
			{
				cout << m;
			}
		}
	}

	cout << endl;

}


int main()
{
	test();
		
	system("pause"); 
	return EXIT_SUCCESS;
}

