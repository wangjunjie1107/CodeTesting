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
	//��ʼ������
	struct LinkNode* pHeader = init_LinkNode();

	//�ҵ�β�ڵ�
	struct LinkNode* pTail = find_TailLinkNode(pHeader);
	if (pTail != NULL)
	{
		printf("pTail value is %d\n", pTail->num);
	}

	//β�巨����һ��Ԫ��,����β�ڵ�
	pTail = insert_LinkNodeatTail(pTail);
	if (pTail != NULL)
	{
		printf("pTail value is %d\n", pTail->num);
	}

	//��������
	foreach_LinkList(pHeader);

	//��������,�����з������ݵ�λ�ò�������
	insert_LinkList(pHeader, 10, 100);

	//ɾ�����
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