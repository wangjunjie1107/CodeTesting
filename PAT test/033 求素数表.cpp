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
    ���⣺�����ж�һ�����Ƿ�Ϊ����

	������ֻ�ܱ�1�ͱ�������������1�Ȳ���������Ҳ���Ǻ���

	�����ֻ��Ҫ�жϣ� 2 - ����n ��֮�������û�б�����������
*/
const int maxn = 201;         //��
int prime[maxn] = { 0 };	  //�洢��������
int pNum = 0;			      //ͳ�������ĸ���
bool p[maxn] = { 0 };		  //p[i] == true��ʾ����Ϊ����

bool isPrime(int n)
{
	if (n <= 1)
	{
		return false;
	}

	//����n
	int sqrN = (int)sqrt(1.0 * n);

	//���� 2-����n �ж�
	for (int i = 2; i <= sqrN; i++)
	{
		if (n % i == 0)
		{
			return false;  // n �� i �ı����� n ��������
		}
	}
	return true;//������
}

void findPrime()
{
	for (int i = 0; i < maxn; ++i)
	{
		if (isPrime(i))
		{
			prime[pNum++] = i;  //�洢��ǰ������i
			p[i] = true;		//���Ϊtrue
		}
	}
}

void test()
{
	//��1-100���е�����
	findPrime();

	for (int i = 0; i < maxn; i++)
	{
		if (p[i] == true)
		{
			cout << i << " ";
		}
	}
	cout << endl;
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

