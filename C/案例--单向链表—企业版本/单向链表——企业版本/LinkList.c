#include "LinkList.h"
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//重命名
typedef void * LinkList;

//初始化链表
LinkList init_LinkList()
{
	struct LList * mylist = malloc(sizeof(struct LList));

	if (mylist == NULL)
	{
		return NULL;
	}

	mylist->m_Size = 0;
	mylist->pHeader.next = NULL;

	return mylist;
}

//插入链表
void insert_LinkList(LinkList list, int pos, void * data)
{
	if (list == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}

	struct LList * mylist = list;

	if (pos < 0 || pos > mylist->m_Size - 1)
	{
		//位置错误 直接尾插
		pos = mylist->m_Size;
	}

	//取出用户数据的前4个字节空间 ？？？？？？？？
	struct LinkNode * myNode = data;

	//找到待插入位置的前驱结点
	struct LinkNode * pCurrent = &mylist->pHeader;

	for (int i = 0;i < pos;i++)
	{
		pCurrent = pCurrent->next;
	}

	//更改指针指向
	myNode->next = pCurrent->next;
	pCurrent->next = myNode;

	//更新链表长度
	mylist->m_Size++;
}

//遍历数据
void foreach_LinkList(LinkList list, void(*myPrint)(void *))
{
	if (list == NULL)
	{
		return;
	}
	struct LList * mylist = list;

	//pCurrent指向第一个有真实数据的结点
	struct LinkNode * pCurrent = mylist->pHeader.next;

	for (int i = 0;i < mylist->m_Size;i++)
	{
		myPrint(pCurrent);
		pCurrent = pCurrent->next;
	}
}

//删除 按位置删除
void removeByPos_LinkList(LinkList list, int pos)
{
	if (list == NULL)
	{
		return;
	}
	struct LList * mylist = list;
	if (pos<0 || pos > mylist->m_Size - 1)
	{
		return;
	}

	//找到待删除前驱结点位置 从头结点开始寻找
	struct LinkNode * pCurrent = &mylist->pHeader;

	for (int i = 0;i < pos;i++)
	{
		pCurrent = pCurrent->next;
	}

	//记录待删除结点位置
	struct LinkNode * pDel = pCurrent->next;

	//重新建立结点之间的关系
	pCurrent->next = pDel->next;

	//free(pDel); 数据本身是用户开辟的，由用户自己管理释放

	//链表长度更新
	mylist->m_Size--;
}

//销毁链表
void destroy_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return;
	}
	free(list);
	list = NULL;
}


//返回链表长度 
int length_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return -1;
	}

	struct LList * mylist = list;

	return mylist->m_Size;
}

//删除结点  按值删除 
void removeByValue_LinkList(LinkList list, void * data, int(*myCompare)(void *,void *))
{
	if (list == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}

	struct LList * mylist = list;

	//查找结点 用于比较的数据
	struct LinkNode * pCurrent = mylist->pHeader.next;

	//用于记录之前的节点
	struct LinkNode * pPrev = &mylist->pHeader;

	for (int i = 0;i < mylist->m_Size; i++)
	{

		if (myCompare(data, pCurrent))
		{
			break;
		}
		//继续向下查找
		pPrev = pCurrent;
		pCurrent = pCurrent->next;

		//如果没有找到 直接返回
		if (pCurrent == NULL)
		{
			return;
		}
	}

	//找到后 更新指针
	pPrev->next = pCurrent->next;
	pCurrent = NULL;
	mylist->m_Size--;
	return;

}

//清空链表  
void removeAllNode_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return;
	}
	struct LList * mylist = list;

	//清空链表  不用自己释放数据  由用户释放  自己释放指针就可以
	mylist->m_Size = 0;
	mylist->pHeader.next = NULL;
}
