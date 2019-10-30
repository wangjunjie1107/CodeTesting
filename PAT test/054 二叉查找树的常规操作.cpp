#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<queue>
#include<vector>
using namespace std;

/*
	二叉查找树：

			要么二叉查找树是一颗孔数

			要么二叉查找树的左子树上的所有节点小于或等于根节点的数据域，右子树大于根节点的数据域
*/

struct node
{
	int data;
	node* lchild;
	node* rchild;
};

int mutex = 1;	//为了在左右子树交替删除前驱和后继结点，而设置的锁

//新生成一个节点
node* newNode(int x)
{
	//创建节点
	node* Node = new node;
	
	//赋值
	Node->data = x;
	Node->lchild = Node->rchild = NULL;

	//返回结点
	return Node;
}

//二叉查找树的查找操作
void binarySearch(node* root, int x)
{
	//根节点为空，返回
	if (root == NULL)
	{
		return;
	}

	//找到了结点就访问它
	if (root->data == x)
	{
		cout << root->data << endl;
	}
	else if (root->data > x)
	{
		//如果此节点的数据域大于x，就往它的左子树找
		binarySearch(root->lchild, x);
	}
	else if (root->data < x)
	{
		//如果此节点的数据域小于x，就往它的右子树找
		binarySearch(root->rchild, x);

	}

}

//二叉查找树的插入操作
void binaryInsert(node* root,int x)
{
	//如果此节点为空，说明找到了要插入的位置
	if (root == NULL)
	{
		root = newNode(x);	//为此节点赋值
		return;
	}

	if (root->data == x)
	{
		return;	//结点已存在，直接返回
	}
	else if(root->data > x)
	{
		//结点值大于x，往左子树找
		binaryInsert(root->lchild, x);
	}
	else
	{
		//结点值小于x，往右子树找
		binaryInsert(root->rchild, x);
	}
}

//寻找以root为根节点的树中的最大权值结点
node* findMax(node* root)
{
	while (root->rchild != NULL)
	{
		root = root->rchild;	//一直往右找，直到没有右节点
	}

	return root;
}

//寻找以root为根节点的树中的最小权值结点
node* findMin(node* root)
{
	while (root->lchild != NULL)
	{
		root = root->lchild;	//一直往左找，直到没有左节点
	}

	return root;
}

//二叉查找树的删除操作  删除以root为根节点的权值为x的结点
void deleteNode(node* &root, int x)
{
	//不存在权值为x的结点
	if (root == NULL)
	{
		return;
	}
	
	//找到欲删除的结点
	if (root->data == x)
	{
		//如果此节点是叶子结点，则直接删除
		if (root->lchild == NULL && root->rchild == NULL)
		{
			root = NULL;
		}
		else if (root->lchild != NULL && mutex == 1)
		{
			//左子树不为空时，找root的前驱，也就是root的左子树中最大的那个结点
			node* pre = findMax(root->lchild);

			//用前驱结点覆盖root
			root->data = pre->data;

			//在左子树中，删除前驱结点pre
			deleteNode(root->lchild, pre->data);

			//改变锁的值，使得下一次在右子树进行删除
			mutex = 0;
		}
		else if (root->rchild != NULL && mutex == 0)
		{
			//在root的右子树中寻找最小的那个结点
			node* next = findMin(root->rchild);

			//用后继结点覆盖root
			root->data = next->data;

			//在右子树中删除结点next
			deleteNode(root->rchild, next->data);

			//改变锁的值，使得下一次在左子树进行删除
			mutex = 1;
		}
	}
	else if (root->data > x)
	{
		//在左子树中继续寻找
		deleteNode(root->lchild, x);
	}
	else if (root->data < x)
	{
		//在右子树中继续寻找
		deleteNode(root->rchild, x);
	}
}

//二叉查找树的建立
node* binaryCreate(int data[], int n)
{
	node* root = NULL;	//新建根节点

	for (int i = 0; i < n; i++)
	{
		//将各个结点插入到树中
		binaryInsert(root, data[i]);
	}

	return root;
}


int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

