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
	string key;
	string next;
};

//按照key值排序,key值小的在前
bool myCmp(node n1, node n2)
{
	return n1.key < n2.key;
}

void test()
{
	//输入结点个数和头节点地址
	long n;
	string head_add;
	cin >> n >> head_add;

	//暂存输入的链表
	node* arr = new node[n + 1];

	//输入所有的结点
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].address >> arr[i].key >> arr[i].next;
	}

	//将所有节点按照key值排序
	sort(arr, arr + n, myCmp);
	

	//输出第一行
	cout << n << " " << arr[0].address << endl;
	
	//输出前n-1个结点
	for (int i = 0; i < n - 1; i++)
	{
		cout << arr[i].address << " " << arr[i].key << " " << arr[i + 1].address << endl;
	}

	//单独输出最后一个节点，
	cout << arr[n - 1].address << " " << arr[n - 1].key << " " << -1 << endl;

}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

