#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stddef.h>
#include<time.h>
#include "linklist.h"

void test01()
{
	//初始化链表
	struct LinkNode* pHeader = init_LinkNode();

	//找到尾节点
	struct LinkNode* pTail = find_TailLinkNode(pHeader);
	if (pTail != NULL)
	{
		printf("pTail value is %d\n", pTail->num);
	}

	//尾插法插入一个元素,返回尾节点
	pTail = insert_LinkNodeatTail(pTail);
	if (pTail != NULL)
	{
		printf("pTail value is %d\n", pTail->num);
	}

	//遍历链表
	foreach_LinkList(pHeader);

	//插入数据,在所有符合数据的位置插入数据
	insert_LinkList(pHeader, 10, 100);

	//删除结点
	delete_LinkList(pHeader, 100);
}


void test02()
{

}



void test03()
{

}


int main()
{
	test01();
	test02();
	test03();


	system("pause");
	return EXIT_SUCCESS;
}