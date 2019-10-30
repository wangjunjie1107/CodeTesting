#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<math.h>
using namespace std;

/*
	ƽ���������AVL�������ҽ��ĸ߶�֮��ľ���ֵ������1�Ķ��������
*/

struct node
{
	int data;		//��¼��ǰ����Ȩֵ
	int height;		//��¼��ǰ���ĸ߶�
	node* lchild;	//����
	node* rchild;	//�Һ���
};

//�½����
node* newNode(int x)
{
	node* Node = new node;

	//��ֵ
	Node->data = x;
	Node->height = 1;		//�߶ȳ�ʼΪ1
	Node->lchild = NULL;
	Node->rchild = NULL;

	//����
	return Node;
}

//��õ�ǰ���ĸ߶�
int getHeight(node* root)
{
	//��㲻Ϊ�գ����ؽ��߶�
	if (root != NULL)
	{
		return root->height;
	}

	//�սڵ�߶�Ϊ0
	return 0;
}

//�������ƽ������
int getBalanceFactor(node* root)
{
	//�������߶ȼ�ȥ�������߶�
	return getHeight(root->lchild) - getHeight(root->rchild);
}

//������ĸ߶�
void updateHeight(node* root)
{
	//��ǰ���ĸ߶�Ϊ  ���������������߶ȵĽϴ�ֵ �� 1
	root->height = max(getHeight(root->lchild), getHeight(root->rchild)) + 1;
}

//ƽ��������Ĳ��Ҳ���
void search(node* root, int x)
{
	//���Ϊ�գ�����ʧ��
	if (root == NULL)
	{
		cout << "search failed" << endl;
		return;
	}

	if (root->data == x)
	{
		//�ҵ��˽��
		cout << root->data << endl;
		return;
	}
	else if (root->data > x)
	{
		//���ֵ����x���ڽ�������������Ѱ��
		search(root->lchild, x);
	}
	else if (root->data < x)
	{
		//���ֵС��x���ڽ�������������Ѱ��
		search(root->rchild, x);
	}
}

//��������
void L(node*& root)
{
	//rootΪ���ڵ㣬tempΪroot��������
	node* temp = root->rchild;

	//�ҽڵ�������� ��Ϊ root��������
	root->rchild = temp->lchild;

	//�ҽڵ�������� Ϊ root
	temp->lchild = root;

	//���½��߶�
	updateHeight(temp);
	updateHeight(root);

	//�����ڵ�����Ϊtemp
	root = temp;
}


//��������
void R(node*& root)
{
	//rootΪ���ڵ㣬tempΪroot��������
	node* temp = root->lchild;

	//��ڵ�������� ��Ϊ root��������
	root->lchild = temp->rchild;

	//root ��Ϊ ��ڵ��������
	temp->rchild = root;

	//���½��߶�
	updateHeight(temp);
	updateHeight(root);

	//�����ڵ�����Ϊtemp
	root = temp;
}

//����ȨֵΪv�Ľ��
void insert(node*& root, int v)
{
	//����սڵ�
	if (root == NULL)
	{
		root = newNode(v);
		return;
	}

	if (root->data > v)
	{
		//������������
		insert(root->lchild, v);

		//�������ĸ߶�
		updateHeight(root);

		//�������ĵ�����LL�͡�LR��
		if (getBalanceFactor(root) == 2)
		{
			if (getBalanceFactor(root->lchild) == 1)
			{
				//LL��
				R(root);
			}
			else if (getBalanceFactor(root->lchild) == -1)
			{
				//LR��
				L(root->lchild);
				R(root);
			}
		}
	}
	else if(root->data < v)
	{
		//������������
		insert(root->rchild, v);

		//��������
		updateHeight(root);

		//�������ĵ�����RR�͡�RL��
		if (getBalanceFactor(root) == 2)
		{
			if (getBalanceFactor(root->lchild) == 1)
			{
				//RR��
				L(root);
			}
			else if (getBalanceFactor(root->lchild) == -1)
			{
				//RL��
				R(root->lchild);
				L(root);
			}
		}
	}
	else if (root->data == v)
	{
		cout << "����Ѵ���" << endl;
		return;
	}
}

//AVL���Ľ���
node* Create(int data[], int n)
{
	//�½��ո��ڵ�root
	node* root = NULL;

	//��data[0]-data[n-1]����AVL����
	for (int i = 0; i < n; i++)
	{
		insert(root, data[i]);
	}

	//���ظ��ڵ�
	return root;
}

int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

