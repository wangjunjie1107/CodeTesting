#include "LinkList.h"
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//������
typedef void * LinkList;

//��ʼ������
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

//��������
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
		//λ�ô��� ֱ��β��
		pos = mylist->m_Size;
	}

	//ȡ���û����ݵ�ǰ4���ֽڿռ� ����������������
	struct LinkNode * myNode = data;

	//�ҵ�������λ�õ�ǰ�����
	struct LinkNode * pCurrent = &mylist->pHeader;

	for (int i = 0;i < pos;i++)
	{
		pCurrent = pCurrent->next;
	}

	//����ָ��ָ��
	myNode->next = pCurrent->next;
	pCurrent->next = myNode;

	//����������
	mylist->m_Size++;
}

//��������
void foreach_LinkList(LinkList list, void(*myPrint)(void *))
{
	if (list == NULL)
	{
		return;
	}
	struct LList * mylist = list;

	//pCurrentָ���һ������ʵ���ݵĽ��
	struct LinkNode * pCurrent = mylist->pHeader.next;

	for (int i = 0;i < mylist->m_Size;i++)
	{
		myPrint(pCurrent);
		pCurrent = pCurrent->next;
	}
}

//ɾ�� ��λ��ɾ��
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

	//�ҵ���ɾ��ǰ�����λ�� ��ͷ��㿪ʼѰ��
	struct LinkNode * pCurrent = &mylist->pHeader;

	for (int i = 0;i < pos;i++)
	{
		pCurrent = pCurrent->next;
	}

	//��¼��ɾ�����λ��
	struct LinkNode * pDel = pCurrent->next;

	//���½������֮��Ĺ�ϵ
	pCurrent->next = pDel->next;

	//free(pDel); ���ݱ������û����ٵģ����û��Լ������ͷ�

	//�����ȸ���
	mylist->m_Size--;
}

//��������
void destroy_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return;
	}
	free(list);
	list = NULL;
}


//���������� 
int length_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return -1;
	}

	struct LList * mylist = list;

	return mylist->m_Size;
}

//ɾ�����  ��ֵɾ�� 
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

	//���ҽ�� ���ڱȽϵ�����
	struct LinkNode * pCurrent = mylist->pHeader.next;

	//���ڼ�¼֮ǰ�Ľڵ�
	struct LinkNode * pPrev = &mylist->pHeader;

	for (int i = 0;i < mylist->m_Size; i++)
	{

		if (myCompare(data, pCurrent))
		{
			break;
		}
		//�������²���
		pPrev = pCurrent;
		pCurrent = pCurrent->next;

		//���û���ҵ� ֱ�ӷ���
		if (pCurrent == NULL)
		{
			return;
		}
	}

	//�ҵ��� ����ָ��
	pPrev->next = pCurrent->next;
	pCurrent = NULL;
	mylist->m_Size--;
	return;

}

//�������  
void removeAllNode_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return;
	}
	struct LList * mylist = list;

	//�������  �����Լ��ͷ�����  ���û��ͷ�  �Լ��ͷ�ָ��Ϳ���
	mylist->m_Size = 0;
	mylist->pHeader.next = NULL;
}
