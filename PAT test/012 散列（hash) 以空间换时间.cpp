#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
using namespace std;

//���⣺��ѯm�����е�ÿ�����ֱ��Ƿ���n�����г��ֹ�
//�����ɢ�У�hash)  �Կռ任ʱ��


const int maxn = 100010;
bool hashTable[maxn] = { false };

void test()
{
	int n, m, x;
	int count = 0;//��¼���ֹ����ֵĸ���

	cout << "������n��m:" << endl;
	cin >> n >> m;

	//����n������
	cout << "������n�е����֣�" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		hashTable[x] = true;//����x���ֹ�
	}
	 
	//����m������
	//�����ж�m�е������Ƿ���n�г��ֹ������ֹ���Ϊtrue
	cout << "������m�е����֣�ÿ������һ��ֵ��" << endl;
	for (int i = 0; i < m; i++)
	{
		cin >> x;
		if (hashTable[x] == true)
		{
			cout << "Yes" << endl; //�������x���ֹ������Yes
			++count;//ÿ��һ�����ֳ��֣��������1
		}
		else
		{
			cout << "No" << endl;//�������xû�г��ֹ������No
		}
	}

	//���������ӡ
	cout << "��m�й���" << count << "��������n�г��ֹ���" << endl;
}


int main()
{
	test();

	system("pause"); 
	return EXIT_SUCCESS;
}

