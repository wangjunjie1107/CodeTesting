#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<math.h>
using namespace std;

/*
	平衡二叉树（AVL）：左右结点的高度之差的绝对值不超过1的二叉查找树
*/

struct node
{
	int data;		//记录当前结点的权值
	int height;		//记录当前结点的高度
	node* lchild;	//左孩子
	node* rchild;	//右孩子
};

//新建结点
node* newNode(int x)
{
	node* Node = new node;

	//赋值
	Node->data = x;
	Node->height = 1;		//高度初始为1
	Node->lchild = NULL;
	Node->rchild = NULL;

	//返回
	return Node;
}

//获得当前结点的高度
int getHeight(node* root)
{
	//结点不为空，返回结点高度
	if (root != NULL)
	{
		return root->height;
	}

	//空节点高度为0
	return 0;
}

//计算结点的平衡因子
int getBalanceFactor(node* root)
{
	//左子树高度减去右子树高度
	return getHeight(root->lchild) - getHeight(root->rchild);
}

//计算结点的高度
void updateHeight(node* root)
{
	//当前结点的高度为  左子树和右子树高度的较大值 加 1
	root->height = max(getHeight(root->lchild), getHeight(root->rchild)) + 1;
}

//平衡二叉树的查找操作
void search(node* root, int x)
{
	//结点为空，查找失败
	if (root == NULL)
	{
		cout << "search failed" << endl;
		return;
	}

	if (root->data == x)
	{
		//找到了结点
		cout << root->data << endl;
		return;
	}
	else if (root->data > x)
	{
		//结点值大于x，在结点的左子树继续寻找
		search(root->lchild, x);
	}
	else if (root->data < x)
	{
		//结点值小于x，在结点的右子树继续寻找
		search(root->rchild, x);
	}
}

//左旋调整
void L(node*& root)
{
	//root为根节点，temp为root的右子树
	node* temp = root->rchild;

	//右节点的左子树 变为 root的右子树
	root->rchild = temp->lchild;

	//右节点的左子树 为 root
	temp->lchild = root;

	//更新结点高度
	updateHeight(temp);
	updateHeight(root);

	//将根节点设置为temp
	root = temp;
}


//右旋调整
void R(node*& root)
{
	//root为根节点，temp为root的左子树
	node* temp = root->lchild;

	//左节点的右子树 变为 root的左子树
	root->lchild = temp->rchild;

	//root 变为 左节点的右子树
	temp->rchild = root;

	//更新结点高度
	updateHeight(temp);
	updateHeight(root);

	//将根节点设置为temp
	root = temp;
}

//插入权值为v的结点
void insert(node*& root, int v)
{
	//到达空节点
	if (root == NULL)
	{
		root = newNode(v);
		return;
	}

	if (root->data > v)
	{
		//左子树继续找
		insert(root->lchild, v);

		//更新树的高度
		updateHeight(root);

		//左子树的调整：LL型、LR型
		if (getBalanceFactor(root) == 2)
		{
			if (getBalanceFactor(root->lchild) == 1)
			{
				//LL型
				R(root);
			}
			else if (getBalanceFactor(root->lchild) == -1)
			{
				//LR型
				L(root->lchild);
				R(root);
			}
		}
	}
	else if(root->data < v)
	{
		//右子树继续找
		insert(root->rchild, v);

		//更新树高
		updateHeight(root);

		//右子树的调整：RR型、RL型
		if (getBalanceFactor(root) == 2)
		{
			if (getBalanceFactor(root->lchild) == 1)
			{
				//RR型
				L(root);
			}
			else if (getBalanceFactor(root->lchild) == -1)
			{
				//RL型
				R(root->lchild);
				L(root);
			}
		}
	}
	else if (root->data == v)
	{
		cout << "结点已存在" << endl;
		return;
	}
}

//AVL树的建立
node* Create(int data[], int n)
{
	//新建空根节点root
	node* root = NULL;

	//将data[0]-data[n-1]插入AVL树中
	for (int i = 0; i < n; i++)
	{
		insert(root, data[i]);
	}

	//返回根节点
	return root;
}

int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

