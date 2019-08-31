#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;


//学校个数
const long long schoolNumber = 1000;

void test01()
{
	//记录学校总分的数组
	int school[schoolNumber] = { 0 };

	//记录参赛人数
	int count;
	cout << "请输入参赛人数: " << endl;
	cin >> count;

	//对应着 学校ID 记录 学校总成绩
	int tempeleCount = count;		//暂时记录参赛人数
	int schoolId = 0;				//记录学校ID
	int score = 0;					//记录每行的分数  便于累加到数组中
	int schoolIdMax = 0;           //记录最大的schoolID,后面打印数组用
	cout << "请输入学校编号和学生成绩:" << endl;
	while (tempeleCount != 0)
	{
		cin >> schoolId;
		cin >> score;
		school[schoolId] += score;
		--tempeleCount;

		//记录最大的schoolID,后面打印数组用
		if (schoolIdMax < schoolId)
		{
			schoolIdMax = schoolId;
		}
	}

	//循环打印整个记录成绩的数组
	for (int i = 1; i <= schoolIdMax; i++)
	{
		cout << "学校ID:  " << i << "   比赛成绩:  " << school[i] << endl;
	}

	//查询  找出总分最高的学校
	int maxSchoolId = 0;		//记录最高分的学校的ID
	int maxSchoolScore = 0;	//记录最高的总分
	for (int i = 1; i <= schoolIdMax; i++)
	{
		if (maxSchoolScore < school[i])
		{
			maxSchoolId = i;
			maxSchoolScore = school[i];
		}
	}
	cout << "------------------------" << endl;
	cout << "总得分最高的学校为:" << endl;
	cout << "学校ID:  " << maxSchoolId << "   比赛成绩:  " << maxSchoolScore << endl;
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
