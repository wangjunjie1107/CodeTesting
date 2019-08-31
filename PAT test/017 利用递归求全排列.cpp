#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
using namespace std;

//利用递归实现全排列

const int maxn = 11;//最多实现数字10的全排列，因为在for循环中，数组下标是从1开始的 

int n;						  	 //n组数字
int countP;						//记录一个有多少组排列
int p[maxn];					 //p中为数字的当前排列
int hashTable[maxn] = { false }; //记录整数x是否已经在p中

//当前处理排列的第index位
void generateP(int index)
{
	//递归边界，处理完排列的1-n位
	if (index == n + 1)
	{
		for (int i = 1; i <= n; i++)
		{
			cout << p[i] << "  ";
		}
		++countP;
		cout << endl;
		return; 
	}

	//枚举1-n，试图将x填入p[index]
	for (int x = 1; x <= n; x++)
	{
		//x不在p中
		if (hashTable[x] == false)
		{
			p[index] = x; //令p的第index位为x,即把x加入当前排列
			hashTable[x] = true; //记录x已经在p中
			generateP(index + 1);//处理排列的第index + 1号位
			hashTable[x] = false;//已处理完p[index]为x的子问题，还原状态
		}
	}
}
void test()
{
	cout << "请输入你想进行全排列的数字：" << endl;
	cin >> n;
	generateP(1);
	cout << "一共有" << countP << "组排列。" << endl;
}


int main()
{
	test();
		
	system("pause"); 
	return EXIT_SUCCESS;
}

