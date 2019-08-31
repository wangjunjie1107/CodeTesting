#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<queue>
#include<vector>
using namespace std;

const int maxn = 100;

struct node
{
	int layer;			//�洢��ǰ���Ĳ���
	int data;			//�洢��ǰ��������
	vector<int>child;	//�洢���������ӽڵ�
}Node[maxn];


//���Ĳ������
void LayerOrder(int root)
{
	//��������
	queue<int> q;
	
	//���ڵ����
	q.push(root);

	//�����в�Ϊ�յ�ʱ�򣬲������
	while (!q.empty())
	{
		//ȡ������Ԫ��
		int front = q.front();	
		
		//���ʶ���Ԫ�ص�������
		cout << Node[front].data << " " << endl;

		//����Ԫ�س���
		q.pop();

		//����ǰ���������ӽڵ����
		int child = 0;
		for (int i = 0; i < Node[front].child.size(); i++)
		{
			//����ǰ���ĵ�i���ӽڵ���±��¼
			child = Node[front].child[i];

			//��ǰ�ӽڵ�Ĳ����Ǹ��ڵ������1
			Node[child].layer = Node[front].layer + 1;
			
			//���ӽڵ����
			q.push(child);
		}
	}
}

int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

