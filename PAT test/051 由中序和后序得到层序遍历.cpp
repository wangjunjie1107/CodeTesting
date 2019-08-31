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
	��һ���������ĺ���������������������
*/

const int maxn = 50;

struct node
{
	int data;
	node* lchild;
	node* rchild;
};

int pre[maxn], in[maxn], post[maxn];	//�������򣬺���

int n;		//������

//��ǰ�������ĺ�����������Ϊ[postL,postR],������������Ϊ[inL,inR]
//create�������ع������Ķ������ĸ��ڵ��ַ
node* create(int postL, int postR, int inL, int inR)
{
	if (postL > postR)
	{
		return NULL;
	}

	node* root = new node;		
	root->data = post[postR];	//�½���������Ϊ���ڵ��ֵ

	int k;
	for (k = inL; k <= inR; ++k)
	{
		if (root->data == in[k])
		{
			break;	//�ҵ����ڵ�����������е�λ��k
		}
	}

	int numLeft = k - inL;	//�������Ľ�����

	//�����������ĸ��ڵ��ַ����ֵ��root����ָ��
	root->lchild = create(postL, postL + numLeft - 1, inL, k - 1);

	//�����������ĸ��ڵ��ַ����ֵ��root����ָ��
	root->rchild = create(postL + numLeft, postR - 1, k + 1, inR);

	//���ظ��ڵ��ַ
	return root;
}

int num = 0;	//������Ľ�����

//BFS:������ȱ��������õľ��ǲ���������պ��������������Ľ��
void BFS(node* root)
{
	queue<node*> q;
	q.push(root);

	while (!q.empty())
	{
		//ͷ������
		node* now = q.front();
		q.pop();

		//�������
		cout << now->data;
		++num;
		if (num < n)
		{
			//�����û����������һ���ڵ㣬������ո�
			cout << " ";
		}

		//�������
		if (now->lchild != NULL)
		{
			q.push(now->lchild);	
		}

		//�ҽ�����
		if (now->rchild != NULL)
		{
			q.push(now->rchild);	
		}
	}
}

int main()
{
	//����������
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> post[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> in[i];
	}

	//1.������ͺ���������������ָ���������
	node* root = create(0, n - 1, 0, n - 1);

	//2.�Զ��������в��������Ҳ����ʹ��BFS
	BFS(root);

	system("pause");
	return EXIT_SUCCESS;
}

