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

//创建暂时存储结点的数组
node* arr = new node[10000];

node* first_word = new node[10000];
node* second_word = new node[10000];

void test()
{
	//输入两个单词的起始地址和总共的节点数
	string word1;
	string word2;
	double number;
	cin >> word1 >> word2 >> number;

	//将接下来的结点全部输入到数组中
	for (int i = 0; i < number; i++)
	{
		cin >> arr[i].address;
		cin >> arr[i].data;
		cin >> arr[i].next;
	}


	//接下来在数组中找寻所属单词的列表
	int count_first = 0;
	while (word1 != "-1")
	{
		for (int i = 0; i < number; i++)
		{
			//找到下一个结点了
			if (word1 == arr[i].address)
			{
				//赋值
				first_word[count_first].address = arr[i].address;
				first_word[count_first].data = arr[i].data;
				first_word[count_first].next = arr[i].next;

				//继续寻找下一个结点
				word1 = first_word[count_first].next;
				
				//数组下标+1
				++count_first;

				//跳处循环
				break;
			}
		}
		
	}
	
	int count_second = 0;
	while (word2 != "-1")
	{
		for (int i = 0; i < number; i++)
		{
			//找到下一个结点了
			if (word2 == arr[i].address)
			{
				//赋值
				second_word[count_second].address = arr[i].address;
				second_word[count_second].data = arr[i].data;
				second_word[count_second].next = arr[i].next;
			
				//继续寻找下一个结点
				word2 = second_word[count_second].next;
				
				//数组下标+1
				++count_second;

				//跳处循环
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

	//比较两个单词的数组，找到相同的地方
	for (int i = 0; i < count_first; i++)
	{
		for (int j = 0; j < count_second; j++)
		{
			//找到起始相同的地方，输出
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

