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
	//组数
	int n;
	cin >> n;

	int totalNumber = 0;
	int local = 1;

	while (n > 0)
	{
		//每一组的数据个数
		int k;
		cin >> k;

		
		//输入数据到数组中
		for (int i = totalNumber; i < k + totalNumber; i++)
		{
			cin >> stu[i].number;
			cin >> stu[i].score;
			stu[i].location_number = local;
		}

		//组内根据分数将数组排序
		for (int i = totalNumber; i < k + totalNumber; i++)
		{
			for (int j = i; j < totalNumber + k; j++)
			{
				//分数大的在前面
				if (stu[i].score < stu[j].score)
				{
					studentData temp = stu[i];
					stu[i] = stu[j];
					stu[j] = temp;
				}
			}
		}

		//组内根据分数排名次   分数相同，名次相同；分数越高，名次靠前（数字小）
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

		//数据总数统计
		totalNumber += k;

		--n;
		++local;
	}


	//总排名  根据成绩排名 
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

	//总排名 根据学号再排名  如果成绩相同 则学号小的在前面
	for (int i = 0; i < totalNumber - 1; i++)
	{
		if (stu[i].score == stu[i + 1].score && (strcmp(stu[i].number,stu[i+1].number) > 0))
		{
			//总排名相同，但是学号大的在前，则互换位置
			studentData temp = stu[i];
			stu[i] = stu[i + 1];
			stu[i + 1] = temp;
		}
	}

	//获取总排名 final_rank
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

	

	//打印总的数据个数
	cout << totalNumber << endl;

	//打印数据  打印学号，总排名、组别、组内排名
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

