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
	DFS:������ȱ���

	���⣺��n����Ʒ��ÿ����Ʒ������Ϊw[i],��ֵΪc[i]��
		  ������Ҫѡ�����ɼ���Ʒ���뵽һ������ΪV�ı����У�ʹ����ѡ�뱳����
		  ��Ʒ�����Ͳ���������V��ǰ���£��ñ�������Ʒ�ļ�ֵ֮�����������ֵ��
		  n = [1-20]
*/

const int maxn = 21;
int n;				//��Ʒ����
int V;				//��������
int maxValue = 0;	//��ǰ��¼������ֵ
int w[maxn];		//ÿ����Ʒ������
int c[maxn];		//ÿ����Ʒ�ļ�ֵ


//������ȱ�����indexΪ��ǰ�������Ʒ�ı��
void DFS(int index, int sumW, int sumC)
{
	//�Ѿ�����˶�n����Ʒ��ѡ��
	if (index == n)
	{
		return;
	}
	
	//ÿ����Ʒ��ѡ����һ����·�ڣ���ѡ�벻ѡ������·

	//��ѡ���index+1����Ʒ
	DFS(index + 1, sumW, sumC);

	//��֦

	//������index����Ʒ��δ��������V���Ž���ѡ��
	if (sumW + w[index] <= V)
	{
		//�������index����Ʒ������ֵ����maxValue�������maxValue
		if (sumC + c[index] > maxValue)
		{
			maxValue = sumC + c[index];//��������ֵmaxValue
		}

		//ѡ���index+1����Ʒ
		DFS(index + 1, sumW + w[index], sumC + c[index]);
	}
}


void test()
{
	//������Ʒ����
	cin >> n;

	//���뱳������
	cin >> V;

	//����ÿ����Ʒ������
	for (int i = 0; i < n; i++)
	{
		cin >> w[i];
	}

	//����ÿ����Ʒ�ļ�ֵ
	for (int i = 0; i < n; i++)
	{
		cin >> c[i];
	}

	//���б���
	DFS(0, 0, 0);

	//��ӡ���
	cout << maxValue << endl;

	return;
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

