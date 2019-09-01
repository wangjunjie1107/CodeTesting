#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//�������ڵ�
struct BinaryNode
{
	char ch;

	struct BinaryNode * lChild;
	struct BinaryNode * rChild;
};

//ͳ��Ҷ������
void calculateLeafNum(struct BinaryNode * root, int * p)
{
	if (root == NULL)
	{
		return;
	}

	//ͳ��Ҷ��
	if (root->lChild == NULL && root->rChild == NULL)
	{
		(*p)++;
	}

	calculateLeafNum(root->lChild,p);
	calculateLeafNum(root->rChild,p);
}

//ͳ�����ĸ߶�
int getTreeHeight(struct BinaryNode * root)
{
	if (root == NULL)
	{
		return 0;
	}

	//��ȡ�������߶�
	int lHeight = getTreeHeight(root->lChild);

	//��ȡ�������߶�
	int rHeight = getTreeHeight(root->rChild);

	//ȡ���ֵ +1  �������ĸ߶�
	int height = lHeight > rHeight ? lHeight + 1 : rHeight + 1; 

	return height;
}

//����������
struct BinaryNode * copyTree(struct BinaryNode * root)
{
	if (root == NULL)
	{
		return  NULL;
	}

	//�ȿ���������
	struct BinaryNode * lChild = copyTree(root->lChild);

	//�ٿ���������
	struct BinaryNode * rChild = copyTree(root->rChild);

	//�����½ڵ�
	struct BinaryNode * newNode = malloc(sizeof(struct BinaryNode));

	//���������������� ���ص��½ڵ���
	newNode->lChild = lChild;
	newNode->rChild = rChild;
	newNode->ch = root->ch;

	//���ؽ��
	return newNode;
}

//�ݹ麯�� ʵ�ֱ���
void recursion(struct BinaryNode * root)
{
	if (root == NULL)
	{
		return;
	}

	//������� �ȸ� ���� ����
	printf("%c\n", root->ch);

	recursion(root->lChild);

	recursion(root->rChild);

}

//�ͷ���
void freeTree(struct BinaryNode * root)
{
	if (root == NULL)
	{
		return;
	}
	
	freeTree(root->lChild);
	
	freeTree(root->rChild);

	printf("%c���ͷ��ˡ�\n", root->ch);
	free(root);
}


void test01()
{
	//�����ڵ�
	struct BinaryNode nodeA = { 'A', NULL, NULL };
	struct BinaryNode nodeB = { 'B', NULL, NULL };
	struct BinaryNode nodeC = { 'C', NULL, NULL };
	struct BinaryNode nodeD = { 'D', NULL, NULL };
	struct BinaryNode nodeE = { 'E', NULL, NULL };
	struct BinaryNode nodeF = { 'F', NULL, NULL };
	struct BinaryNode nodeG = { 'G', NULL, NULL };
	struct BinaryNode nodeH = { 'H', NULL, NULL };

	//�����ڵ�֮���ϵ
	nodeA.lChild = &nodeB;
	nodeA.rChild = &nodeF;

	nodeB.rChild = &nodeC;

	nodeC.lChild = &nodeD;
	nodeC.rChild = &nodeE;

	nodeF.rChild = &nodeG;

	nodeG.lChild = &nodeH;

	//ͳ�ƶ�����Ҷ������
	int num = 0;
	calculateLeafNum(&nodeA, &num);
	printf("����Ҷ������Ϊ:%d\n", num);

	//ͳ�����߶�
	int height = getTreeHeight(&nodeA);
	printf("���ĸ߶�Ϊ:%d\n", height);

	//����������
	struct BinaryNode * newTree = copyTree(&nodeA);

	//�ݹ�
	recursion(newTree);

	//�ͷ���
	freeTree(newTree);
}


int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
