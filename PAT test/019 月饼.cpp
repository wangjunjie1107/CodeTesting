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

using namespace std;

/*
	�������������±��Ŀ���������ۼ��Լ��г������������

	�Լ�����Ի�õ���������Ƕ��٣�

		ע�⣺һ��Ҫ�ȷ��������Ŀ�и�����ֵ�����ͣ��ٽ��б���������
*/

const int maxCount = 1000;  //�±������������
double p[maxCount][3] = { 0 }; //�����洢ÿ���±��Ŀ������ۼ��Լ�ƽ���۸�
double maxProfit = 0;

void test()
{
	int n;				//�±���������
	double needMoonPie;	//�±����г����������

	//�����±������������±����г����������
	cout << "�����±������������±����г����������:" << endl;
	cin >> n;
	cin >> needMoonPie;

	//�����±��Ŀ����
	cout << "����ÿ���±��Ŀ����:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> p[i][0];
	}

	//����ÿ���±������ۼ�
	cout << "����ÿ���±������ۼ�:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> p[i][1];
	}

	//����ÿ���±���Ӧ�ĵ���
	for (int i = 0; i < n; i++)
	{
		p[i][2] = p[i][1] / p[i][0];
	}

	//���򣬵��۴����ǰ��
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			//���ǰһ�����ĵ���С���򽻻���������
			if (p[i][2] < p[j][2])
			{
				double temp[3] = { 0 };

				temp[0] = p[i][0];
				temp[1] = p[i][1];
				temp[2] = p[i][2];

				p[i][0] = p[j][0];
				p[i][1] = p[j][1];
				p[i][2] = p[j][2];

				p[j][0] = temp[0];
				p[j][1] = temp[1];
				p[j][2] = temp[2];
			}
		}
	}


	//��ӡ�������ݣ��۲���
	for (int i = 0; i < n; i++)
	{
		printf("���ۼۣ�%.0f�� ���ۣ�%.2f", p[i][1], p[i][2]);
		cout << endl;
	}

	//����������
	int i = 0;
	while (needMoonPie > 0)
	{
		if (p[i][0] <= needMoonPie)
		{
			needMoonPie = needMoonPie - p[i][0];
			maxProfit += p[i][1];
		}
		else
		{
			//�����Ҫ���±�����С�ڴ��������������ڵ��۳���������
			//������ɺ�ֱ������ѭ����
			maxProfit += p[i][2] * needMoonPie;
			needMoonPie = -1; //�������
			break;
		}
		++i;//�ӵ�����ߵĿ�ʼ���ۣ��������Ҫ�����������һ���±�
	}

	printf("������Ϊ��%.2f", maxProfit);
	cout << endl;
}


int main()
{
	test();
		
	system("pause"); 
	return EXIT_SUCCESS;
}

