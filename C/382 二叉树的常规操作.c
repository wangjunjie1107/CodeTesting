#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//二叉树节点
struct BinaryNode
{
	char ch;

	struct BinaryNode * lChild;
	struct BinaryNode * rChild;
};

//统计叶子数量
void calculateLeafNum(struct BinaryNode * root, int * p)
{
	if (root == NULL)
	{
		return;
	}

	//统计叶子
	if (root->lChild == NULL && root->rChild == NULL)
	{
		(*p)++;
	}

	calculateLeafNum(root->lChild,p);
	calculateLeafNum(root->rChild,p);
}

//统计树的高度
int getTreeHeight(struct BinaryNode * root)
{
	if (root == NULL)
	{
		return 0;
	}

	//获取左子树高度
	int lHeight = getTreeHeight(root->lChild);

	//获取右子树高度
	int rHeight = getTreeHeight(root->rChild);

	//取最大值 +1  就是树的高度
	int height = lHeight > rHeight ? lHeight + 1 : rHeight + 1; 

	return height;
}

//拷贝二叉树
struct BinaryNode * copyTree(struct BinaryNode * root)
{
	if (root == NULL)
	{
		return  NULL;
	}

	//先拷贝左子树
	struct BinaryNode * lChild = copyTree(root->lChild);

	//再拷贝右子树
	struct BinaryNode * rChild = copyTree(root->rChild);

	//创建新节点
	struct BinaryNode * newNode = malloc(sizeof(struct BinaryNode));

	//将拷贝的左右子树 挂载到新节点上
	newNode->lChild = lChild;
	newNode->rChild = rChild;
	newNode->ch = root->ch;

	//返回结果
	return newNode;
}

//递归函数 实现遍历
void recursion(struct BinaryNode * root)
{
	if (root == NULL)
	{
		return;
	}

	//先序遍历 先根 再左 后右
	printf("%c\n", root->ch);

	recursion(root->lChild);

	recursion(root->rChild);

}

//释放树
void freeTree(struct BinaryNode * root)
{
	if (root == NULL)
	{
		return;
	}
	
	freeTree(root->lChild);
	
	freeTree(root->rChild);

	printf("%c被释放了。\n", root->ch);
	free(root);
}


void test01()
{
	//创建节点
	struct BinaryNode nodeA = { 'A', NULL, NULL };
	struct BinaryNode nodeB = { 'B', NULL, NULL };
	struct BinaryNode nodeC = { 'C', NULL, NULL };
	struct BinaryNode nodeD = { 'D', NULL, NULL };
	struct BinaryNode nodeE = { 'E', NULL, NULL };
	struct BinaryNode nodeF = { 'F', NULL, NULL };
	struct BinaryNode nodeG = { 'G', NULL, NULL };
	struct BinaryNode nodeH = { 'H', NULL, NULL };

	//建立节点之间关系
	nodeA.lChild = &nodeB;
	nodeA.rChild = &nodeF;

	nodeB.rChild = &nodeC;

	nodeC.lChild = &nodeD;
	nodeC.rChild = &nodeE;

	nodeF.rChild = &nodeG;

	nodeG.lChild = &nodeH;

	//统计二叉树叶子数量
	int num = 0;
	calculateLeafNum(&nodeA, &num);
	printf("树的叶子数量为:%d\n", num);

	//统计树高度
	int height = getTreeHeight(&nodeA);
	printf("树的高度为:%d\n", height);

	//拷贝二叉树
	struct BinaryNode * newTree = copyTree(&nodeA);

	//递归
	recursion(newTree);

	//释放树
	freeTree(newTree);
}


int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
