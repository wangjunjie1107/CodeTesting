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

//����keyֵ����,keyֵС����ǰ
bool myCmp(node n1, node n2)
{
	return n1.key < n2.key;
}

void test()
{
	//�����������ͷ�ڵ��ַ
	long n;
	string head_add;
	cin >> n >> head_add;

	//�ݴ����������
	node* arr = new node[n + 1];

	//�������еĽ��
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].address >> arr[i].key >> arr[i].next;
	}

	//�����нڵ㰴��keyֵ����
	sort(arr, arr + n, myCmp);
	

	//�����һ��
	cout << n << " " << arr[0].address << endl;
	
	//���ǰn-1�����
	for (int i = 0; i < n - 1; i++)
	{
		cout << arr[i].address << " " << arr[i].key << " " << arr[i + 1].address << endl;
	}

	//����������һ���ڵ㣬
	cout << arr[n - 1].address << " " << arr[n - 1].key << " " << -1 << endl;

}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

