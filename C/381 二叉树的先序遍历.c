#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//二叉树节点
struct BinaryNode
{
	char ch;//显示字母

	struct BinaryNode * lChild;//左孩子

	struct BinaryNode * rChild;  //右孩子

};

//递归函数
void recursion(struct BinaryNode * node)
{
	if (node == NULL)
	{
		return;
	}

	//先序遍历  先根  再左  再右
	printf("%c\n", node->ch);

	recursion(node->lChild);

	recursion(node->rChild);
	
	
}
void test01()
{
	//创建节点
	struct BinaryNode nodeA = { 'A',NULL,NULL };
	struct BinaryNode nodeB = { 'B',NULL,NULL };
	struct BinaryNode nodeC = { 'C',NULL,NULL };
	struct BinaryNode nodeD = { 'D',NULL,NULL };
	struct BinaryNode nodeE = { 'E',NULL,NULL };
	struct BinaryNode nodeF = { 'F',NULL,NULL };
	struct BinaryNode nodeG = { 'G',NULL,NULL };
	

	//建立关系
	nodeA.lChild = &nodeB;
	nodeA.rChild = &nodeC;

	nodeB.lChild = &nodeD;
	nodeB.rChild = &nodeE;

	nodeC.lChild = &nodeF;
	nodeC.rChild = &nodeG;


	//通过递归函数实现先序遍历
	recursion(&nodeA);

}
int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
