#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
using namespace std;

//���⣺�ж�m�е�����n�г��ֵĴ���
//�����ɢ�У�hash)�Կռ任ʱ��

const int maxn = 100010;
int hashTable[maxn] = { 0 };

void test()
{
	int n, m, x;

	//����n��m
	cin >> n >> m;

	//����n������������
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		++hashTable[x]; // x�е�ֵ��ʾ��n�г��ֵĴ���
	}

	//����m����
	for (int i = 0; i < m; i++)
	{
		cin >> x;

		//���ж�x��n�г��ֹ�û��
		if (hashTable[x] >= 1)
		{
			//��ӡ���ֵĴ���
			cout << x << "��n�г��ֵĴ���Ϊ��" << hashTable[x] << "�Ρ�" << endl;
		}
		else
		{
			cout << x << "û����n�г��ֹ���" << endl;
		}
	}

}


int main()
{
	test();

	system("pause"); 
	return EXIT_SUCCESS;
}

