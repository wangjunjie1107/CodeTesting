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

using namespace std;


const int maxn = 100000;		//����ַ�����
int MOD = 1000000007;		    //ȡ��
char str[maxn] = { 0 };			//�洢�ַ���
int leftNumber[maxn] = { 0 };   //�洢ÿһλ������P�ĸ���
int rightNumber = 0;			//�洢�Ҳ�T�ĸ���
int ans = 0;					//���ֽ��

void NumberOfPAT()
{
	//��ȡһ���ַ�
	gets(str);   
	
	//������Ч�ַ�����
	int len = strlen(str); 

	//������࣬����P�ĸ���
	for (int i = 0; i < len; i++)
	{
		if (i > 0)
		{
			//�ȼ̳���һλ�ĸ���
			leftNumber[i] = leftNumber[i - 1];
		}

		if (str[i] == 'P')
		{
			//�����λ����P���������1
			++leftNumber[i];
		}
	}


	//�������������ͳ���Ҳ�T�ĸ�������������
	for (int i = len - 1; i >= 0; --i)
	{
		if (str[i] == 'T')
		{
			++rightNumber;
		}
		else if (str[i] == 'A')
		{
			ans = (ans + rightNumber * leftNumber[i]) % MOD;
		}
	}

	cout << ans << endl;
}

int main()
{
	NumberOfPAT();

	system("pause");
	return EXIT_SUCCESS;
}

