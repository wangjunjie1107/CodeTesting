#include "LinkList.h"




//��ʼ������
LinkList init_LinkList()
{
	//�����ڴ�
	struct LList * mylist = malloc(sizeof(struct LList));

	if (mylist == NULL)
	{
		return NULL;
	}

	//��ͷ������Գ�ʼ��
	mylist->pHeader.data = NULL;
	mylist->pHeader.next = NULL;
	mylist->m_Size = 0;


	return mylist;

}

//������
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
		//��Чλ��  ��ֱ����β�巨
		pos = mylist->m_Size;
	}

	//������ʱ��� ͨ��ѭ���ҵ�������λ�õ�ǰ�����λ��
	struct LinkNode * pCurrent = &mylist->pHeader;

	for (int i = 0; i < pos;i++)
	{
		//��ָ��ָ��Ҫ�����λ��
		pCurrent = pCurrent->next;
	}

	//��ʱ pCurrent���ǲ���λ�õ�ǰ�����
	//�����½ڵ�
	struct LinkNode * newNode = malloc(sizeof(struct LinkNode));
	newNode->data = data;
	newNode->next = NULL;


	//�������֮��Ĺ�ϵ  ����
	newNode->next = pCurrent->next;
	pCurrent->next = newNode;

	//����������
	mylist->m_Size++;
}

//�������� void(*myPrint)(void *) �ص�����  ���û��Լ��������ݵĴ�ӡ
void foreach_LinkList(LinkList list, void(*myPrint)(void *))
{
	if (list == NULL)
	{
		return;
	}

	//��ԭ������ʵ�ṹ��
	struct LList * mylist = list;
	struct LinkNode * pCurrent = mylist->pHeader.next;

	for (int i = 0;i < mylist->m_Size;i++)
	{
		myPrint(pCurrent->data);
		pCurrent = pCurrent->next;
	}
}

//ɾ�������� ��λ��ɾ��
void removeByPos_LinkList(LinkList list, int pos)
{
	if (list == NULL)
	{
		return;
	}
	struct LList * mylist = list;
	if (pos<0 || pos > mylist->m_Size - 1)
	{
		//��Чλ�� return
		return;
	}

	//�ҵ���ɾ��λ�õ�ǰ������λ��
	struct LinkNode * pCurrent = &mylist->pHeader;

	for (int i = 0; i < pos;i++)
	{
		pCurrent = pCurrent->next;
	}

	//���� ����tempָ���ɾ���Ľ�㣬Ȼ����� �ͷ�
	struct LinkNode * temp = pCurrent->next;
	pCurrent->next = temp->next;

	//�ͷŴ�ɾ���Ľ��
	free(temp);
	temp = NULL;

	//����������
	mylist->m_Size--;

}

//ɾ��������  ��ֵɾ��
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

	//��list��ԭ��ʵ����ṹ��
	struct LList * mylist = list;

	//������������ָ�����
	struct LinkNode * pPrev = &mylist->pHeader;
	struct LinkNode * pCurrent = mylist->pHeader.next;

	//�������� ���û�Ҫɾ��������
	for (int i = 0;i < mylist->m_Size;i++)
	{
		if (myCompare(data, pCurrent->data))
		{
			//�ҵ�Ҫɾ���������ˣ���ʼɾ��
			//����ָ��ָ��  ����
			pPrev->next = pCurrent->next;


			//�ͷŽ��
			free(pCurrent);
			pCurrent = NULL;

			//����������
			mylist->m_Size--;

			break;
			//return; //�������û��������ֱ��return
		}

		//���û���ҵ��Ļ�������ָ���������ƶ�
		pPrev = pCurrent;
		pCurrent = pCurrent->next;
	}
}

//����������
int size_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return -1;
	}

	//��list��ԭΪ��ʵ����ṹ��
	struct LList * mylist = list;

	return mylist->m_Size;
}


//�������  ������ͷ���
void clear_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return;
	}

	//��list��ԭ��ʵ����ṹ��
	struct LList * mylist = list;

	//��ɾ��ͷ���
	//��ָ��ͷ���֮��Ľ�㣬�ӵ�һ����Ч��㿪ʼɾ��
	struct LinkNode * pCurrent = mylist->pHeader.next;
	struct LinkNode * pNext = NULL;

	for (int i = 0;i < mylist->m_Size;i++)
	{
		//�ȼ�¼��һ������λ��
		pNext = pCurrent->next;

		//��������� ָ��ָ��NULL
		free(pCurrent);

		//��pCurrentָ����һ��Ҫɾ���Ľ��
		pCurrent = pNext;
	}

	mylist->pHeader.next = NULL;
	mylist->m_Size = 0;
}

//��������
void destroy_LinkList(LinkList list)
{

	if (list == NULL)
	{
		return;
	}

	//���������������ͷ���
	clear_LinkList(list);

	//ͷ���������ṹ���ж��壬ֱ��ɾ��
	free(list);
	list = NULL;
}
