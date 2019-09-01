#include "LinkList.h"




//初始化链表
LinkList init_LinkList()
{
	//分配内存
	struct LList * mylist = malloc(sizeof(struct LList));

	if (mylist == NULL)
	{
		return NULL;
	}

	//给头结点属性初始化
	mylist->pHeader.data = NULL;
	mylist->pHeader.next = NULL;
	mylist->m_Size = 0;


	return mylist;

}

//插入结点
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
	if (pos < 0 || pos > mylist->m_Size)
	{
		//无效位置  则直接用尾插法
		pos = mylist->m_Size;
	}

	//创建临时结点 通过循环找到待插入位置的前驱结点位置
	struct LinkNode * pCurrent = &mylist->pHeader;

	for (int i = 0; i < pos;i++)
	{
		//将指针指向要插入的位置
		pCurrent = pCurrent->next;
	}

	//此时 pCurrent就是插入位置的前驱结点
	//创建新节点
	struct LinkNode * newNode = malloc(sizeof(struct LinkNode));
	newNode->data = data;
	newNode->next = NULL;


	//建立结点之间的关系  挂链
	newNode->next = pCurrent->next;
	pCurrent->next = newNode;

	//更新链表长度
	mylist->m_Size++;
}

//遍历链表 void(*myPrint)(void *) 回调函数  让用户自己考虑数据的打印
void foreach_LinkList(LinkList list, void(*myPrint)(void *))
{
	if (list == NULL)
	{
		return;
	}

	//还原链表真实结构体
	struct LList * mylist = list;
	struct LinkNode * pCurrent = mylist->pHeader.next;

	for (int i = 0;i < mylist->m_Size;i++)
	{
		myPrint(pCurrent->data);
		pCurrent = pCurrent->next;
	}
}

//删除链表结点 按位置删除
void removeByPos_LinkList(LinkList list, int pos)
{
	if (list == NULL)
	{
		return;
	}
	struct LList * mylist = list;
	if (pos<0 || pos > mylist->m_Size - 1)
	{
		//无效位置 return
		return;
	}

	//找到待删除位置的前驱结点的位置
	struct LinkNode * pCurrent = &mylist->pHeader;

	for (int i = 0; i < pos;i++)
	{
		pCurrent = pCurrent->next;
	}

	//挂链 先让temp指向待删除的结点，然后挂链 释放
	struct LinkNode * temp = pCurrent->next;
	pCurrent->next = temp->next;

	//释放待删除的结点
	free(temp);
	temp = NULL;

	//更新链表长度
	mylist->m_Size--;

}

//删除链表结点  按值删除
void removeByValue_LinkList(LinkList list, void * data, int(*myCompare)(void *, void *))
{
	if (list == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}

	//将list还原真实链表结构体
	struct LList * mylist = list;

	//创建两个辅助指针变量
	struct LinkNode * pPrev = &mylist->pHeader;
	struct LinkNode * pCurrent = mylist->pHeader.next;

	//遍历链表 找用户要删除的数据
	for (int i = 0;i < mylist->m_Size;i++)
	{
		if (myCompare(data, pCurrent->data))
		{
			//找到要删除的数据了，开始删除
			//更改指针指向  挂链
			pPrev->next = pCurrent->next;


			//释放结点
			free(pCurrent);
			pCurrent = NULL;

			//更新链表长度
			mylist->m_Size--;

			break;
			//return; //如果后续没有需求，则直接return
		}

		//如果没有找到的话，辅助指针继续向后移动
		pPrev = pCurrent;
		pCurrent = pCurrent->next;
	}
}

//返回链表长度
int size_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return -1;
	}

	//将list还原为真实链表结构体
	struct LList * mylist = list;

	return mylist->m_Size;
}


//清空链表  不销毁头结点
void clear_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return;
	}

	//将list还原真实链表结构体
	struct LList * mylist = list;

	//不删除头结点
	//先指向头结点之后的结点，从第一个有效结点开始删除
	struct LinkNode * pCurrent = mylist->pHeader.next;
	struct LinkNode * pNext = NULL;

	for (int i = 0;i < mylist->m_Size;i++)
	{
		//先记录下一个结点的位置
		pNext = pCurrent->next;

		//将数据清空 指针指向NULL
		free(pCurrent);

		//让pCurrent指向下一个要删除的结点
		pCurrent = pNext;
	}

	mylist->pHeader.next = NULL;
	mylist->m_Size = 0;
}

//销毁链表
void destroy_LinkList(LinkList list)
{

	if (list == NULL)
	{
		return;
	}

	//先清空链表，再销毁头结点
	clear_LinkList(list);

	//头结点在链表结构体中定义，直接删除
	free(list);
	list = NULL;
}
