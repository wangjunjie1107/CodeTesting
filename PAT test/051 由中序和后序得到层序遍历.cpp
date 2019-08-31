#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<queue>
#include<map>
#include<stack>
#include<algorithm>

using namespace std;

/*
	给一个二叉树的后序和中序遍历，求层序遍历
*/

const int maxn = 50;

struct node
{
	int data;
	node* lchild;
	node* rchild;
};

int pre[maxn], in[maxn], post[maxn];	//先序，中序，后序

int n;		//结点个数

//当前二叉树的后序序列区间为[postL,postR],中序序列区间为[inL,inR]
//create函数返回构建出的二叉树的根节点地址
node* create(int postL, int postR, int inL, int inR)
{
	if (postL > postR)
	{
		return NULL;
	}

	node* root = new node;		
	root->data = post[postR];	//新结点的数据域为根节点的值

	int k;
	for (k = inL; k <= inR; ++k)
	{
		if (root->data == in[k])
		{
			break;	//找到根节点在中序遍历中的位置k
		}
	}

	int numLeft = k - inL;	//左子树的结点个数

	//返回左子树的根节点地址，赋值给root的左指针
	root->lchild = create(postL, postL + numLeft - 1, inL, k - 1);

	//返回右子树的根节点地址，赋值给root的右指针
	root->rchild = create(postL + numLeft, postR - 1, k + 1, inR);

	//返回根节点地址
	return root;
}

int num = 0;	//已输出的结点个数

//BFS:广度优先遍历，采用的就是层序遍历，刚好能输出层序遍历的结果
void BFS(node* root)
{
	queue<node*> q;
	q.push(root);

	while (!q.empty())
	{
		//头结点出队
		node* now = q.front();
		q.pop();

		//输出数据
		cout << now->data;
		++num;
		if (num < n)
		{
			//如果还没有输出到最后一个节点，后面跟空格
			cout << " ";
		}

		//左结点入队
		if (now->lchild != NULL)
		{
			q.push(now->lchild);	
		}

		//右结点入队
		if (now->rchild != NULL)
		{
			q.push(now->rchild);	
		}
	}
}

int main()
{
	//结点总数入队
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> post[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> in[i];
	}

	//1.由中序和后序遍历将二叉树恢复，建立树
	node* root = create(0, n - 1, 0, n - 1);

	//2.对二叉树进行层序遍历，也就是使用BFS
	BFS(root);

	system("pause");
	return EXIT_SUCCESS;
}

