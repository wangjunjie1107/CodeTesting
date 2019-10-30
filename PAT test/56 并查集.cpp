#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<math.h>
using namespace std;

/*
	���鼯���ϲ��������ϡ��ж�����Ԫ���Ƿ���һ������

	father[i]:��ʾԪ��i�ĸ��׽ڵ㣬�����׽ڵ㱾��Ҳ����������ڵ�Ԫ��
	
	��ͬһ��������˵��ֻ����һ�����ڵ㣬�ҽ�����Ϊ�������ϵı�ʶ

	���i == father[i]�����ʾiΪ���ڵ�
*/
const int maxn = 110;

//���鼯ʵ��  
int father[maxn] = { 0 };

//��ʼ��
void Init()
{
	//һ��ʼ��ÿ��Ԫ�ض��Ƕ�����һ�����ϣ�
	//������Ҫ���е�father[i]������i
	for (int i = 1; i <= 100; i++)
	{
		father[i] = i;
	}
}

//findFather����Ԫ��x���ڼ��ϵĸ��ڵ�
int findFather(int x)
{
	//������Ǹ��ڵ㣬�����ѭ��
	while (x != father[x])
	{
		x = father[x];	//����Լ��ĸ��׽ڵ�
	}

	return x;
}

//·��ѹ�����Ҹ��ڵ�
int findFather2(int v)
{
	//�ҵ����ڵ�
	if (v == father[v])
	{
		return v;
	}
	else
	{
		//�ݹ�Ѱ��father[v]�ĸ��ڵ�F
		int F = findFather(father[v]);	
		
		//�����ڵ�F����father[v]
		father[v] = F;	

		//���ظ��ڵ�F
		return F;		
	}
}
//�ϲ������������Ϻϲ���һ������
void Union(int a, int b)
{
	//����a��b���ڼ��ϵĸ��ڵ�
	int faA = findFather(a);
	int faB = findFather(b);

	if (faA != faB)
	{
		father[faA] = faB;	//�ϲ�����һ�����ϵĸ��ڵ�ָ����һ�����ϵĸ��ڵ�
	}
}
int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

