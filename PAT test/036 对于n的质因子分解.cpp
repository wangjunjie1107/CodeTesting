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

	��һ��������N����N�����е������ӣ������� N = p1 ^ k1 + p2 ^ k2 ...��ʽ��� 	

*/

const int maxn = 100010;
int prime[maxn];	//��������ı��
int pNum = 0;		//��¼�����ĸ���

struct factor
{
	int x;		 //���������
	int count;	//��ŵ�ǰ�����ӵĸ���
}fac[10];


//�ж�n�ǲ���Ϊ����
bool is_prime(int n)
{
	//�����1��ֱ�ӷ���false
	if (n == 1)
	{
		return false;
	}

	//���� 1 - ����n ����
	int sqr = (int)sqrt(1.0 * n);
	for (int i = 2; i <= sqr; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	//����� 1-����n ֮��û���ҵ�������n��������nΪ����
	return true;
}

//��������  ���� 1 - maxn
void Find_Prime()
{
	for (int i = 1; i < maxn; i++)
	{
		//���������Ϊ�������ͽ���洢����������
		if (is_prime(i) == true)
		{
			prime[pNum++] = i;
		}
	}
}


void test()
{
	//���Ȳ���������
	Find_Prime();

	int n;				//Ҫ���������ӷֽ����
	int num = 0;		//Ϊn�Ĳ�ͬ�����ӵĸ���

	//����n
	cin >> n;

	//��������������ж�
	if (n == 1)
	{
		cout << "1==1" << endl;
	}
	else
	{
		cout << n << "=";

		//�����n
		int sqr = (int)sqrt(n);
		
		//ö��  ����n  ���ڵ����������� n �������Ӽ�������count
		for (int i = 0; i < pNum && prime[i] <= sqr && num <= 10; ++i)
		{
			//���n�ܱ�prime[i]��������prime[i]Ϊn��һ��������
			if (n % prime[i] == 0)
			{
				//��¼������
				fac[num].x = prime[i];

				//���㵱ǰ�����ӵ�����
				fac[num].count = 0;
				while (n % prime[i] == 0)
				{
					++(fac[num].count);
					n /= prime[i];
				}

				//��ͬ�����ӵ�������1
				++num;
			}
			
			//��ʱ�˳�ѭ������ʡʱ��
			if (n == 1)
			{
				break;
			}
		}

		//����޷�������n���ڵ������ӳ���
		if (n != 1)
		{
			fac[num].x = n;			//��ôһ����һ�����ڸ���n�������ӣ�����У����������n
			fac[num++].count = 1;
		}

		//����ʽ������
		for (int i = 0; i < num; ++i)
		{
			if (i > 0)
			{
				cout << "*";
			}

			cout << fac[i].x;

			if (fac[i].count > 1)
			{
				cout << "^" << fac[i].count;
			}
		}

		cout << endl;
	}
}


int main()
{
	int n = 0;
	
	while (n < 10)
	{
		test();
		++n;
	}

	system("pause");
	return EXIT_SUCCESS;
}

