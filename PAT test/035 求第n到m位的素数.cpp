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
		������������n��m����ӡ��n����������m������

		��ӡ��ʽ��ÿ10������ռһ�У�����Կո�ָ�������ĩ�����ж���ո�

*/


const int maxn = 1000001;			     //����ǵ�10000�����������Ѱ�ҵķ�ΧҪ��100�����㹻�ҵ���10000������
int prime[maxn];						 //���ڴ洢����
int num = 0;							 //���ڱ�ʾ�ڼ�������

										//��ʼ������ʱ����ֵΪ0���������ȫ��λ��Ϊ0��
										//�����ֵ����ֵ����ֻ�е�һλΪ��ֵ
bool isNotPrime[maxn] = { 0 };		     //ɸѡ���������ֲ������������λΪtrue


void findPrime(int m)
{
	for (int i = 2; i < maxn; i++)
	{
		//��2��ʼ�����������isNotPrime[i]Ϊ�ӣ���iΪ����������洢������������
		if (isNotPrime[i] == false)
		{
			prime[num++] = i;
		}

		//����Ѿ��ҵ��˵�mλ������������
		if (num >= m)
		{
			break;
		}

		//ɾѡ�������� i �ı����������Ϊfalse
		for (int j = i + i; j < maxn; j += i)
		{
			//��Ϊj��i�ı��������Կ϶�����������
			isNotPrime[j] = true;
		}
	}
}

void test()
{
	//�����������֣���ʾҪ��������ķ�Χ
	int n;
	int m;
	cin >> n;
	cin >> m;

	findPrime(m);//ֻ��Ҫ�ҵ���m���������Ϳ���ֹͣ��

	//��ӡ��������
	int count = 0;
	for (int i = n; i <= m; i++)
	{
		++count;

		cout << prime[i - 1];  //�±��n-1��ʼ

		//���countС��9����δ���뵽���һ��������ӡ�ո�
		//���count����10�������Ѿ����뵽���һ��������ӡ���з���������countΪ0
		if (count <= 9 && i < m)
		{
			cout << " ";
		}
		else if (count == 10 || i == m)
		{
			cout << endl;
			count = 0;
		}
	}
}


int main()
{
	

	//��ʼ������ʱ����ֵΪ0���������ȫ��λ��Ϊ0��
	//�����ֵ����ֵ����ֻ�е�һλΪ��ֵ
	/*cout << isNotPrime[0] << endl;
	cout << isNotPrime[1] << endl;
	cout << isNotPrime[2] << endl;
	cout << isNotPrime[3] << endl;*/
	
	test();

	system("pause");
	return EXIT_SUCCESS;
}

