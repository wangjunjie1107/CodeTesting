#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<queue>
#include<vector>
using namespace std;

/*
	�����������

			Ҫô�����������һ�ſ���

			Ҫô������������������ϵ����нڵ�С�ڻ���ڸ��ڵ�����������������ڸ��ڵ��������
*/

struct node
{
	int data;
	node* lchild;
	node* rchild;
};

int mutex = 1;	//Ϊ����������������ɾ��ǰ���ͺ�̽�㣬�����õ���

//������һ���ڵ�
node* newNode(int x)
{
	//�����ڵ�
	node* Node = new node;
	
	//��ֵ
	Node->data = x;
	Node->lchild = Node->rchild = NULL;

	//���ؽ��
	return Node;
}

//����������Ĳ��Ҳ���
void binarySearch(node* root, int x)
{
	//���ڵ�Ϊ�գ�����
	if (root == NULL)
	{
		return;
	}

	//�ҵ��˽��ͷ�����
	if (root->data == x)
	{
		cout << root->data << endl;
	}
	else if (root->data > x)
	{
		//����˽ڵ�����������x������������������
		binarySearch(root->lchild, x);
	}
	else if (root->data < x)
	{
		//����˽ڵ��������С��x������������������
		binarySearch(root->rchild, x);

	}

}

//����������Ĳ������
void binaryInsert(node* root,int x)
{
	//����˽ڵ�Ϊ�գ�˵���ҵ���Ҫ�����λ��
	if (root == NULL)
	{
		root = newNode(x);	//Ϊ�˽ڵ㸳ֵ
		return;
	}

	if (root->data == x)
	{
		return;	//����Ѵ��ڣ�ֱ�ӷ���
	}
	else if(root->data > x)
	{
		//���ֵ����x������������
		binaryInsert(root->lchild, x);
	}
	else
	{
		//���ֵС��x������������
		binaryInsert(root->rchild, x);
	}
}

//Ѱ����rootΪ���ڵ�����е����Ȩֵ���
node* findMax(node* root)
{
	while (root->rchild != NULL)
	{
		root = root->rchild;	//һֱ�����ң�ֱ��û���ҽڵ�
	}

	return root;
}

//Ѱ����rootΪ���ڵ�����е���СȨֵ���
node* findMin(node* root)
{
	while (root->lchild != NULL)
	{
		root = root->lchild;	//һֱ�����ң�ֱ��û����ڵ�
	}

	return root;
}

//�����������ɾ������  ɾ����rootΪ���ڵ��ȨֵΪx�Ľ��
void deleteNode(node* &root, int x)
{
	//������ȨֵΪx�Ľ��
	if (root == NULL)
	{
		return;
	}
	
	//�ҵ���ɾ���Ľ��
	if (root->data == x)
	{
		//����˽ڵ���Ҷ�ӽ�㣬��ֱ��ɾ��
		if (root->lchild == NULL && root->rchild == NULL)
		{
			root = NULL;
		}
		else if (root->lchild != NULL && mutex == 1)
		{
			//��������Ϊ��ʱ����root��ǰ����Ҳ����root���������������Ǹ����
			node* pre = findMax(root->lchild);

			//��ǰ����㸲��root
			root->data = pre->data;

			//���������У�ɾ��ǰ�����pre
			deleteNode(root->lchild, pre->data);

			//�ı�����ֵ��ʹ����һ��������������ɾ��
			mutex = 0;
		}
		else if (root->rchild != NULL && mutex == 0)
		{
			//��root����������Ѱ����С���Ǹ����
			node* next = findMin(root->rchild);

			//�ú�̽�㸲��root
			root->data = next->data;

			//����������ɾ�����next
			deleteNode(root->rchild, next->data);

			//�ı�����ֵ��ʹ����һ��������������ɾ��
			mutex = 1;
		}
	}
	else if (root->data > x)
	{
		//���������м���Ѱ��
		deleteNode(root->lchild, x);
	}
	else if (root->data < x)
	{
		//���������м���Ѱ��
		deleteNode(root->rchild, x);
	}
}

//����������Ľ���
node* binaryCreate(int data[], int n)
{
	node* root = NULL;	//�½����ڵ�

	for (int i = 0; i < n; i++)
	{
		//�����������뵽����
		binaryInsert(root, data[i]);
	}

	return root;
}


int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

