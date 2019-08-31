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
	int layer;			//存储当前结点的层数
	int data;			//存储当前结点的数据
	vector<int>child;	//存储树的所有子节点
}Node[maxn];


//树的层序遍历
void LayerOrder(int root)
{
	//创建队列
	queue<int> q;
	
	//根节点入队
	q.push(root);

	//当队列不为空的时候，层序遍历
	while (!q.empty())
	{
		//取出队首元素
		int front = q.front();	
		
		//访问队首元素的数据域
		cout << Node[front].data << " " << endl;

		//队首元素出队
		q.pop();

		//将当前结点的所有子节点入队
		int child = 0;
		for (int i = 0; i < Node[front].child.size(); i++)
		{
			//将当前结点的第i个子节点的下标记录
			child = Node[front].child[i];

			//当前子节点的层数是父节点层数加1
			Node[child].layer = Node[front].layer + 1;
			
			//将子节点入队
			q.push(child);
		}
	}
}

int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

