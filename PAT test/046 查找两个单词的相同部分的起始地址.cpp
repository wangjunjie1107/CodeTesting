#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<queue>
#include<map>
#include<stack>
#include<cstdio>
using namespace std;

struct node
{
	string address;
	char data;
	string next;
};

//������ʱ�洢��������
node* arr = new node[10000];

node* first_word = new node[10000];
node* second_word = new node[10000];

void test()
{
	//�����������ʵ���ʼ��ַ���ܹ��Ľڵ���
	string word1;
	string word2;
	double number;
	cin >> word1 >> word2 >> number;

	//���������Ľ��ȫ�����뵽������
	for (int i = 0; i < number; i++)
	{
		cin >> arr[i].address;
		cin >> arr[i].data;
		cin >> arr[i].next;
	}


	//����������������Ѱ�������ʵ��б�
	int count_first = 0;
	while (word1 != "-1")
	{
		for (int i = 0; i < number; i++)
		{
			//�ҵ���һ�������
			if (word1 == arr[i].address)
			{
				//��ֵ
				first_word[count_first].address = arr[i].address;
				first_word[count_first].data = arr[i].data;
				first_word[count_first].next = arr[i].next;

				//����Ѱ����һ�����
				word1 = first_word[count_first].next;
				
				//�����±�+1
				++count_first;

				//����ѭ��
				break;
			}
		}
		
	}
	
	int count_second = 0;
	while (word2 != "-1")
	{
		for (int i = 0; i < number; i++)
		{
			//�ҵ���һ�������
			if (word2 == arr[i].address)
			{
				//��ֵ
				second_word[count_second].address = arr[i].address;
				second_word[count_second].data = arr[i].data;
				second_word[count_second].next = arr[i].next;
			
				//����Ѱ����һ�����
				word2 = second_word[count_second].next;
				
				//�����±�+1
				++count_second;

				//����ѭ��
				break;
			}
		}
	}


	for (int i = 0; i < count_first; i++)
	{
		cout << first_word[i].address << " " << first_word[i].data << " " << first_word[i].next << endl;
	}

	for (int i = 0; i < count_second; i++)
	{
		cout << second_word[i].address << " " << second_word[i].data << " " << second_word[i].next << endl;
	}

	//�Ƚ��������ʵ����飬�ҵ���ͬ�ĵط�
	for (int i = 0; i < count_first; i++)
	{
		for (int j = 0; j < count_second; j++)
		{
			//�ҵ���ʼ��ͬ�ĵط������
			if (first_word[i].address == second_word[j].address)
			{
				cout << first_word[i].address << endl;
				return;
			}
		}
	}

	cout << -1 << endl;
	return;
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

