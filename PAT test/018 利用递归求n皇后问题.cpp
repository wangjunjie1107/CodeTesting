#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
using namespace std;

//���õݹ�ʵ�� n�ʺ����� 
/*
	n�ʺ����⣺ָ��һ��n*n�Ĺ����������Ϸ���n���ʺ�
	ʹ����n���ʺ�����������ͬһ�С�ͬһ�С�ͬһ���Խ����ϣ�
	��Ϸ��ķ�������

	�����ȫ�������еĿ����ԣ�Ȼ�������ж�
*/

const int maxn = 11;				//���̵����߳�Ϊ10
int countP = 0;						//�Ϸ��ķ�����
int n;								//���̵ı߳�
int p[maxn];						//�洢��ǰ����
int hashTable[maxn] = { false };	//������ʾx�Ƿ��ڶ�����

void generateP(int index)
{
	//ÿ������һ�����У����жϣ��������������ʹ�ӡ
	if(index == n + 1)
	{
		bool flag = true;
		for (int i = 1; i <= n; i++)
		{
			for (int j = i+1; j <= n; j++)
			{
				//�жϱ����������Ƿ�����һ���Խ�����
				if (abs(i - j) == abs(p[i] - p[j]))
				{
					//�����һ���Խ����ϣ���Ϊfalse
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

	//��1-n��䵽������
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
	cout << "������ʺ����̵ı߳���" << endl;
	cin >> n;

	generateP(1); //��p[1]��ʼ���һ������

	cout << "һ����" << countP << "�кϷ�����" << endl;
}


int main()
{
	test();
		
	system("pause"); 
	return EXIT_SUCCESS;
}

