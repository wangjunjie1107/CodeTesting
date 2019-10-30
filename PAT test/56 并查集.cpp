#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<math.h>
using namespace std;

/*
	并查集：合并两个集合、判断两个元素是否在一个集合

	father[i]:表示元素i的父亲节点，而父亲节点本身也是这个集合内的元素
	
	对同一个集合来说，只存在一个根节点，且将其作为所属集合的标识

	如果i == father[i]，则表示i为根节点
*/
const int maxn = 110;

//并查集实现  
int father[maxn] = { 0 };

//初始化
void Init()
{
	//一开始，每个元素都是独立的一个集合，
	//所以需要所有的father[i]都等于i
	for (int i = 1; i <= 100; i++)
	{
		father[i] = i;
	}
}

//findFather返回元素x所在集合的根节点
int findFather(int x)
{
	//如果不是根节点，则继续循环
	while (x != father[x])
	{
		x = father[x];	//获得自己的父亲节点
	}

	return x;
}

//路径压缩查找根节点
int findFather2(int v)
{
	//找到根节点
	if (v == father[v])
	{
		return v;
	}
	else
	{
		//递归寻找father[v]的根节点F
		int F = findFather(father[v]);	
		
		//将根节点F赋给father[v]
		father[v] = F;	

		//返回根节点F
		return F;		
	}
}
//合并：将两个集合合并成一个集合
void Union(int a, int b)
{
	//查找a和b所在集合的根节点
	int faA = findFather(a);
	int faB = findFather(b);

	if (faA != faB)
	{
		father[faA] = faB;	//合并，让一个集合的根节点指向另一个集合的根节点
	}
}
int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

