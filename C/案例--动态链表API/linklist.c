#include "linklist.h"


//��ʼ������ ͷ�巨
//��������ֵ �����õ������ͷ���
struct LinkNode* init_LinkNode()
{
	struct LinkNode* pHeader = malloc(sizeof(struct LinkNode));
	if (pHeader == NULL)
	{
		return NULL;
	}

	//ͷ��㸳ֵ
	pHeader->num = -1;
	pHeader->next = NULL;

	long long val = -1;
	while (1)
	{
		printf("��������ݣ�����-1�������������������ݵķ���Ϊͷ�巨��\n");

		scanf("%d", &val);
		if (val == -1)
		{
			break;
		}
		
		//�����½ڵ�
		struct LinkNode* newNode = malloc(sizeof(struct LinkNode));
		newNode->num = val;
		newNode->next = NULL;
		
		//����,ͷ�巨
		newNode->next = pHeader->next;
		pHeader->next = newNode;
		
		if (newNode->next == NULL)
		{
			struct LinkNode* pTail = newNode;
		}
	}
	return pHeader;
}

//�ҵ�β�ڵ�
struct LinkNode * find_TailLinkNode(struct LinkNode* pHeader)
{
	if (pHeader == NULL)
	{
		printf("pHeader == NULL !\n");
		return NULL;
	}
	if (pHeader->next == NULL)
	{
		printf("pHeader->next == NULL !\n");
		return NULL;
	}

	struct LinkNode* pCurrent = pHeader;
	while (pCurrent->next != NULL)
	{
		pCurrent = pCurrent->next;
	}

	if (pCurrent->next == NULL)
	{
		printf("find tail link node! the tail's value is %d\n", pCurrent->num);
		return pCurrent;
	}

}

//β�巨
struct LinkNode *  insert_LinkNodeatTail(struct LinkNode* pTail)
{
	if (pTail == NULL)
	{
		return NULL;
	}

	printf("������Ҫ��������ݣ�������β�巨����,����-1������������\n");
	int val = -1;
	scanf("%d", &val);
	if (val == -1)
	{
		return NULL;
	}

	//�����½ڵ�
	struct LinkNode* newNode = malloc(sizeof(struct LinkNode));
	newNode->num = val;

	//����
	newNode->next = NULL;
	pTail->next = newNode;

	printf("����ɹ�������β�ڵ�\n");
	return newNode;

}

//��������
void foreach_LinkList(struct LinkNode* pHeader)
{
	if (pHeader == NULL || pHeader->next == NULL)
	{
		return;
	}

	//��¼��ӡ���ڼ������
	int count = 0;
	//��¼��ǰ��Ч��㣨ͷ�����Ч��
	struct LinkNode* pCurrent1 = pHeader->next;
	struct LinkNode* pCurrent2 = pHeader->next;

	//��������,��ͳ���ж��ٸ����
	do
	{
		count++;
		pCurrent1 = pCurrent1->next;
	} while (pCurrent1 != NULL);
	printf("һ���� %d �����\n", count);

	count = 0; //����count  
	//��ӡ���
	do
	{
		count++;
		printf("���_%d : %d\n", count, pCurrent2->num);
		pCurrent2 = pCurrent2->next;
	}while(pCurrent2 != NULL);
	
	return;
}

//�����㹦�� �����з������ݵ�λ�ò�������
void insert_LinkList(struct LinkNode* pHeader, int oldVal, int newVal)
{
	if (pHeader == NULL)
	{
		return;
	}
	
	struct LinkNode* pCurrent = pHeader->next;

	
	int count = 0;
	while (pCurrent != NULL)
	{
		

		if (pCurrent->num == oldVal)
		{
			//�ҵ���Ҫ�����λ�ú�Ŵ����½ڵ�
			struct LinkNode* newNode = malloc(sizeof(struct LinkNode));
			newNode->num = newVal;
			newNode->next = NULL;

			//���� ��������
			count++;
			newNode->next = pCurrent->next;
			pCurrent->next = newNode;

			printf("�� %d �β���ɹ���\n",count);
		}

		pCurrent = pCurrent->next;
	}

	if (pCurrent == NULL && count == 0)
	{
		printf("����ʧ�ܣ�δ�ҵ�����λ�ã������ǲ���ľ���������\n");
		return;
	}

	if (pCurrent == NULL && count != 0)
	{
		printf("ȫ��������ɣ�\n");
		return;
	}

}

//ɾ�����
void delete_LinkList(struct LinkNode* pHeader, int delVal)
{
	if (pHeader == NULL || pHeader->next == NULL)
	{
		return NULL;
	}

	//��¼ʣ������
	int count = 0;
	struct LinkNode* pCount = pHeader->next;
	while (pCount != NULL)
	{
		count++;
		pCount = pCount->next;
	}

	//ɾ�������Ҫ�����ڵ�һ�����
	struct LinkNode* pCurrent = pHeader->next;
	struct LinkNode* pFront = pHeader;

	while (pCurrent != NULL)
	{
		if (pCurrent->num == delVal)
		{
			//ɾ�����  

			//1.����
			pFront->next = pCurrent->next;

			//2.�ͷŶ����ռ�
			free(pCurrent);
			pCurrent = NULL;

			printf("�Ѿ��ɹ�ɾ�����!\n");
			printf("ʣ������ĿΪ %d\n", count - 1);
			return;
		}

		pCurrent = pCurrent->next;
		pFront = pFront->next;
	}

	if (pCurrent == NULL)
	{
		printf("ɾ��ʧ�ܣ�δ�ҵ�Ҫɾ���Ľ�㣡\n");
		return;
	}

	
}

//�������
void clear_LinkNode(struct LinkNode* pHeader)
{
	if (pHeader == NULL || pHeader->next == NULL)
	{
		return;
	}

	struct LinkNode* pCurrent = pHeader->next;
	struct LinkNode* pNext = NULL; //��¼��һ���ڵ�λ��
	while (pCurrent != NULL)
	{
		pNext = pCurrent->next;

		free(pCurrent);
		pCurrent = pNext;
	}
	pHeader->next = NULL;
	return;
}

//��������
void destory_LinkNode(struct LinkNode* pHeader)
{
	if (pHeader == NULL)
	{
		return;
	}

	//���������
	struct LinkNode* pCurrent = pHeader->next;
	struct LinkNode* pNext = NULL; //��¼��һ���ڵ�λ��
	while (pCurrent != NULL)
	{
		pNext = pCurrent->next;

		free(pCurrent);
		pCurrent = pNext;
	}
	pHeader->next = NULL;

	free(pHeader);
	pHeader = NULL;
	return;
}