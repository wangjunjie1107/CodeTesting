#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
using namespace std;

//���õݹ�ʵ��ȫ����

const int maxn = 11;//���ʵ������10��ȫ���У���Ϊ��forѭ���У������±��Ǵ�1��ʼ�� 

int n;						  	 //n������
int countP;						//��¼һ���ж���������
int p[maxn];					 //p��Ϊ���ֵĵ�ǰ����
int hashTable[maxn] = { false }; //��¼����x�Ƿ��Ѿ���p��

//��ǰ�������еĵ�indexλ
void generateP(int index)
{
	//�ݹ�߽磬���������е�1-nλ
	if (index == n + 1)
	{
		for (int i = 1; i <= n; i++)
		{
			cout << p[i] << "  ";
		}
		++countP;
		cout << endl;
		return; 
	}

	//ö��1-n����ͼ��x����p[index]
	for (int x = 1; x <= n; x++)
	{
		//x����p��
		if (hashTable[x] == false)
		{
			p[index] = x; //��p�ĵ�indexλΪx,����x���뵱ǰ����
			hashTable[x] = true; //��¼x�Ѿ���p��
			generateP(index + 1);//�������еĵ�index + 1��λ
			hashTable[x] = false;//�Ѵ�����p[index]Ϊx�������⣬��ԭ״̬
		}
	}
}
void test()
{
	cout << "�������������ȫ���е����֣�" << endl;
	cin >> n;
	generateP(1);
	cout << "һ����" << countP << "�����С�" << endl;
}


int main()
{
	test();
		
	system("pause"); 
	return EXIT_SUCCESS;
}

