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

	���䲻�ཻ���⣺����N�������䣨x,y),����ѡ�񾡿��ܶ�Ŀ����䣬ʹ����Щ��������û�н�����

	������洢���䣬���򣬰����Ҷ˵�Ӵ�С����Ȼ����Ҷ˵��������俪ʼ����ѡ��

		  ���ѡ���������Ҷ˵�����һ���������˵㲻�غϣ���ѡ����Ч�����м�����
*/

int const maxn = 110;

//������Ľṹ�壬����x,y�����˵�
struct Interval 
{
	int x; //��˵�
	int y; //�Ҷ˵�
}openInterval[maxn];

bool myCompare(Interval a, Interval b)
{
	//���Ҷ˵������Ҷ˵�����ǰ
	if (a.y != b.y)
	{
		return a.y > b.y;
	}
	else
	{
		//�Ҷ˵���ͬ����˵�����ǰ
		return a.x > b.x;
	}

}

void test()
{
	int n; //��Ҫ���յ����������
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> openInterval[i].x;   //������˵�
		cin >> openInterval[i].y;   //�����Ҷ˵�
	}

	//���������Ҷ˵�����ǰ
	sort(openInterval, openInterval + n, myCompare);

	//countNumber��¼���ཻ����ĸ���
	//lastInterval��¼��һ���������˵㣬��������һ��ѡ���������Ҷ˵���бȽ�
	int countNumber = 1;
	int lastInterval = openInterval[0].x;
	for (int i = 1; i < n; i++)
	{
		//���ѡ���������Ҷ˵� �� ��һ���������˵� ���С����ڣ�Ҳ���ǲ��ཻ�������
		if (openInterval[i].y <= lastInterval)
		{
			lastInterval = openInterval[i].x; //��¼��ǰѡ�е��������˵㣬������һ�ֱȽ�
			++countNumber;  //��Ч�����1
		}
	}

	cout << countNumber << endl;

}


int main()
{
	test();
		
	system("pause"); 
	return EXIT_SUCCESS;
}

