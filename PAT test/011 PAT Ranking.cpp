#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
using namespace std;

struct studentData
{
	char number[13];
	int score;
	int location_number;
	int local_rank;
	int final_rank;
	int data_longer;
}stu[30010];

void test()
{
	//����
	int n;
	cin >> n;

	int totalNumber = 0;
	int local = 1;

	while (n > 0)
	{
		//ÿһ������ݸ���
		int k;
		cin >> k;

		
		//�������ݵ�������
		for (int i = totalNumber; i < k + totalNumber; i++)
		{
			cin >> stu[i].number;
			cin >> stu[i].score;
			stu[i].location_number = local;
		}

		//���ڸ��ݷ�������������
		for (int i = totalNumber; i < k + totalNumber; i++)
		{
			for (int j = i; j < totalNumber + k; j++)
			{
				//���������ǰ��
				if (stu[i].score < stu[j].score)
				{
					studentData temp = stu[i];
					stu[i] = stu[j];
					stu[j] = temp;
				}
			}
		}

		//���ڸ��ݷ���������   ������ͬ��������ͬ������Խ�ߣ����ο�ǰ������С��
		int count = 1;
		for (int i = totalNumber; i < totalNumber + k - 1; i++)
		{
			stu[totalNumber].local_rank = 1;
			if (stu[i + 1].score == stu[i].score)
			{
				stu[i + 1].local_rank = stu[i].local_rank;
				++count;
			}
			else
			{
				stu[i + 1].local_rank = count + 1;
				++count;
			}
		}

		//��������ͳ��
		totalNumber += k;

		--n;
		++local;
	}


	//������  ���ݳɼ����� 
	for (int i = 0; i < totalNumber; i++)
	{
		for (int j = i; j < totalNumber; j++)
		{
			if (stu[i].score < stu[j].score)
			{
				studentData temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
		}
	}

	//������ ����ѧ��������  ����ɼ���ͬ ��ѧ��С����ǰ��
	for (int i = 0; i < totalNumber - 1; i++)
	{
		if (stu[i].score == stu[i + 1].score && (strcmp(stu[i].number,stu[i+1].number) > 0))
		{
			//��������ͬ������ѧ�Ŵ����ǰ���򻥻�λ��
			studentData temp = stu[i];
			stu[i] = stu[i + 1];
			stu[i + 1] = temp;
		}
	}

	//��ȡ������ final_rank
	for (int i = 0; i < totalNumber - 1; i++)
	{
		stu[0].final_rank = 1;
		if (stu[i + 1].score == stu[i].score)
		{
			stu[i + 1].final_rank = stu[i].final_rank;
		}
		else
		{
			stu[i + 1].final_rank = i + 2;
		}
	}

	

	//��ӡ�ܵ����ݸ���
	cout << totalNumber << endl;

	//��ӡ����  ��ӡѧ�ţ��������������������
	for (int i = 0; i < totalNumber; i++)
	{
		cout << stu[i].number << "  " << stu[i].final_rank << "  " << stu[i].location_number << "  " << stu[i].local_rank << endl;
	}
}
int main()
{
	test();

	system("pause"); 
	return EXIT_SUCCESS;
}

