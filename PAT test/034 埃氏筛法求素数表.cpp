#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<cstdio>
#include<time.h>
#include<ctime>

using namespace std;

/*
		ɸѡ��Ѱ������
*/

const int maxn = 101;	    //�����ֵ
int prime[maxn] = { 0 };	//�洢����
int pNum = 0;				//��¼��������
bool p[maxn] = { false };	    //p[i] = false ������ i ������  ��ʼ��ȫ��Ϊfalse

void findPrime()
{
	for (int i = 2; i < maxn; i++)
	{
		if (p[i] == false)
		{
			//��i��������������
			prime[pNum++] = i;
			//������ i �ı��� ���Ϊ����������Ϊi����������
			//�˺����жϵ�ʱ�򣬻�ֱ���Թ�i�ı�������ʡʱ�� 
			for (int j = i + i; j < maxn; j += i)
			{
				p[j] = true;
			}
		}
	}
}

void test()
{
	findPrime();
	cout << pNum << endl;
	for (int i = 0; i < pNum; i++)
	{
		cout << prime[i] << " ";
	}
	cout << endl;
}


int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

