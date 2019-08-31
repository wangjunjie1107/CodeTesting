#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<algorithm>

using namespace std;

/*
   ľ���и����⣺����N��ľ�������Ⱦ���֪������ϣ��ͨ���и��������õ�����K�γ�����ȵ�ľ��

				�����ȱ�����������������Щ������ȵ�ľ������ж೤��

	��������ַ��������K��ľ��Ҫ�����󳤶�
*/

const int maxn = 100;			//ľ��������
int treeStick[maxn] = { 0 };	//�洢ľ������
int mostLength = 0;				//ľ������󳤶�
int numberN = 0;			   //���и�ľ���ĸ���




//���� n��ľ�� �ܵõ����ٳ���Ϊ length ��ľ��
int stickNumber(int length)
{
	int countNumber = 0;

	for (int i = 0; i < numberN; i++)
	{
		countNumber += (treeStick[i] / length);
	}

	return countNumber;
}


int mostLengthForStick()
{
	int k;  //����Ҫ�õ�k�γ�����ȵ�ľ��

	cout << "����ľ������ĿnumberN������Ҫ�õ���ľ������k" << endl;
	cin >> numberN;
	cin >> k;

	//����ÿ��ľ���ĳ���
	cout << "����������ľ�����ȣ�" << endl;
	for (int i = 0; i < numberN; i++)
	{
		cin >> treeStick[i];
	}

	//��ľ�����Ƚ��д�С��������
	for (int i = 0; i < numberN; i++)
	{
		for (int j = i + 1; j < numberN; j++)
		{
			if (treeStick[i] > treeStick[j])
			{
				int temp = treeStick[i];
				treeStick[i] = treeStick[j];
				treeStick[j] = temp;
			}
		}
	}
	
	//������������
	for (int i = 0; i < numberN; i++)
	{
		cout << treeStick[i] << "  ";
	}

	//���ж��ֲ���
	int left = 1;						  //��С����Ϊ1
	int right = treeStick[numberN - 1];	  //��󳤶�Ϊľ������󳤶�
	int mid = (left + right) / 2;

	cout << endl << "���ж��ֲ���" << endl;
	cout << stickNumber(20);

	//whileѭ��������
	while (left < right)
	{
		//�������С��˵��mid�ϴ�Ӧ�������������
		if (stickNumber(mid) < k)
		{
			right = mid;
		}
		else
		{
			//����������ڵ��ڣ�˵��midС��Ӧ�������������
			left = mid;
		}

		mid = (left + right) / 2;
	}

	return right - 1;
}

void test()
{
	int temp = mostLengthForStick();
	cout << temp << endl;
	cout << stickNumber(temp) << endl;
}


int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

