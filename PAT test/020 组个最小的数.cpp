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
	���⣺�����С����
		  ����0-9��ʮ������ӵ�еĸ���������Щ�������еõ�����С��������λ��Ϊ0

	�����̰���㷨���Ȱ���С�����˳����������Ȼ�������������
*/

int numberHave[11] = { 0 };			//��0��ʼ�洢0-9���ֵĸ�������д3λ����֤����Ľ�׳��

void test()
{
	cout << "��������������0-9�ĸ�����" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> numberHave[i];			//���μ�¼0-9�����ֵĸ���
	}

	//����С������
	//�������0�ĸ���Ϊ0��ֱ�Ӵ�1-9��ʼ������������
	if (numberHave[0] == 0)
	{
		for (int i = 1; i < 10; i++)
		{
			for (int j = 0; j < numberHave[i]; j++)
			{
				cout << i;
			}
		}
	}
	else if (numberHave[0] > 0)
	{
		//�������0�ĸ�������0���������е�һ����Ϊ0�����֣�������0
		
		//��1-9���ҵ���һ��������Ϊ0������
		int i;
		for (i = 1; i < 10; i++)
		{
			if (numberHave[i] > 0)
			{
				break;
			}
		}

		//�����������,ֻ����һ��,Ҳ���Ƕ�λ��λ���֣������ˡ�
		cout << i;
		numberHave[i]--;

		
		//��λ��λ�Ժ󣬰��մӴ�С��˳�����������������
		for (int m = 0; m < 10; m++)
		{
			for (int n = 0; n < numberHave[m]; n++)
			{
				cout << m;
			}
		}
	}

	cout << endl;

}


int main()
{
	test();
		
	system("pause"); 
	return EXIT_SUCCESS;
}

