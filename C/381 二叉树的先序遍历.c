#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//�������ڵ�
struct BinaryNode
{
	char ch;//��ʾ��ĸ

	struct BinaryNode * lChild;//����

	struct BinaryNode * rChild;  //�Һ���

};

//�ݹ麯��
void recursion(struct BinaryNode * node)
{
	if (node == NULL)
	{
		return;
	}

	//�������  �ȸ�  ����  ����
	printf("%c\n", node->ch);

	recursion(node->lChild);

	recursion(node->rChild);
	
	
}
void test01()
{
	//�����ڵ�
	struct BinaryNode nodeA = { 'A',NULL,NULL };
	struct BinaryNode nodeB = { 'B',NULL,NULL };
	struct BinaryNode nodeC = { 'C',NULL,NULL };
	struct BinaryNode nodeD = { 'D',NULL,NULL };
	struct BinaryNode nodeE = { 'E',NULL,NULL };
	struct BinaryNode nodeF = { 'F',NULL,NULL };
	struct BinaryNode nodeG = { 'G',NULL,NULL };
	

	//������ϵ
	nodeA.lChild = &nodeB;
	nodeA.rChild = &nodeC;

	nodeB.lChild = &nodeD;
	nodeB.rChild = &nodeE;

	nodeC.lChild = &nodeF;
	nodeC.rChild = &nodeG;


	//ͨ���ݹ麯��ʵ���������
	recursion(&nodeA);

}
int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
