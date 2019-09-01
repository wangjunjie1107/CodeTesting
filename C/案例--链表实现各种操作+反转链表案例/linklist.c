#include "linklist.h"

//���ṹ��
struct LinkNode
{
	//������
	int num;

	//ָ����
	struct LinkNode * nextNode;
};
//��ʼ������
//��������ֵ �����õ������ͷ���
struct LinkNode * init_LinkList()
{
	struct LinkNode * pHeader = malloc(sizeof(struct LinkNode));
	if (pHeader == NULL)
	{
		return NULL;
	}

	//ͷ��㲻ά��������
	pHeader->num = -1;
	pHeader->nextNode = NULL;

	//����β�ڵ�ָ�� �û���¼��ǰ����β���ڵ�λ�ã�������β��
	struct LinkNode * pTail = pHeader;
	int val = -1;
	while (1)
	{
		printf("��������ݣ�����-1����������\n");

		scanf("%d", &val);

		if (val == -1)
		{
			break;
		}

		//�����½ڵ�
		struct LinkNode * newNode = malloc(sizeof(struct LinkNode));
		newNode->num = val;
		newNode->nextNode = NULL;

		//���½��ָ��
		pTail->nextNode = newNode;
		pTail = newNode;
	}

	//���ظ��û�
	return pHeader;
}

//��������
void foreach_LinkList(struct LinkNode * pHeader)
{
	if (pHeader == NULL)
	{
		return;
	}
	//��ǰ��� ָ���һ������ʵ���ݽ��
	struct LinkNode * temp = pHeader->nextNode;

	while (temp != NULL)
	{
		printf("%d ", temp->num);
		temp = temp->nextNode;
	}
}

//�����㹦��
void insert_LinkList(struct LinkNode * pHeader, int oldVal,int newVal)
{
	while (pHeader == NULL)
	{
		return;
	}

	//����������ʱָ��ʵ�ֽ�����
	struct LinkNode * pPrev = pHeader;
	struct LinkNode * pCurrent = pHeader->nextNode;
	
	while (pCurrent != NULL)
	{
		if (pCurrent->num == oldVal)
		{
			//�ҵ���Ҫ����ĵط�
			break;
		}

		//δ�ҵ� ����������ָ������ƶ�
		pPrev = pCurrent;
		pCurrent = pCurrent->nextNode;
	}

	//�����½ڵ�
	struct LinkNode * newNode = malloc(sizeof(struct LinkNode));
	newNode->num = newVal;
	newNode->nextNode = NULL;

	//����
	newNode->nextNode = pCurrent;
	pPrev->nextNode = newNode;
}

//ɾ���ڵ㹦��
void delete_LinkList(struct LinkNode * pHeader, int delVal)
{
	if (pHeader == NULL)
	{
		return;
	}

	//������������ָ�����
	struct LinkNode * pPrev = pHeader;
	struct LinkNode * pCurrent = pHeader->nextNode;

	while (pCurrent != NULL)
	{
		if (pCurrent->num == delVal)
		{
			break;
		}

		//���û�ҵ� ָ���������ƶ�
		pPrev = pCurrent;
		pCurrent =pCurrent->nextNode;
	}

	if (pCurrent == NULL)
	{
		//����û���ҵ��û���ɾ���Ľ��
		return;
	}

	//�ҵ��� ����ָ��ָ��
	pPrev->nextNode = pCurrent->nextNode;
	free(pCurrent);
	pCurrent = NULL;
}

//�������
void clear_LinkList(struct LinkNode * pHeader)
{
	if (pHeader == NULL)
	{
		return;
	}

	//������ʱ���
	struct LinkNode * pCurrent = pHeader;

	while (pCurrent != NULL)
	{
		//�ȼ�¼��һ�����
		struct LinkNode * temp = pCurrent->nextNode;
		free(pCurrent);
		pCurrent = temp;
	}
	pHeader->nextNode = NULL;
}

//��������
void destroy_LinkList(struct LinkNode * pHeader)
{
	if (pHeader == NULL)
	{
		return;
	}

	//��ʱָ��
	struct LinkNode * pCurrent = pHeader;
	while (pCurrent != NULL)
	{
		//��¼��һ�����
		struct LinkNode * temp = pCurrent->nextNode;
		free(pCurrent);
		pCurrent = temp;
	}
	//��ͷ���Ҳ�ͷ�
	//���ٺ���յ���������Ƿ��ͷ�ͷ���
	free(pHeader);
	pHeader = NULL;
}


//��λ��ɾ�����
void deleteSite_LinkList(struct LinkNode * pHeader, int site)
{
	if(pHeader == NULL)
	{
		return;
	}
	if(site < 1) //�ӵ�һ����㿪ʼ���ſ���ɾ�� 
	{
		return;
	}
	
	//������ʱָ��
	struct LinkNode * temp = pHeader->nextNode;
	struct LinkNode * pPrev = pHeader;
	int count = 1;//��¼λ�� 
	
	while(temp != NULL) 
	{
		if(count == site)
		{
			break;
		}
		
		count++;
		pPrev = temp;
		temp = temp->nextNode;
		
	} 
	
	//δ�ҵ�Ҫɾ����λ�� 
	while(temp == NULL)
	{
		return;
	} 
	
	//ɾ�����  ��ʱtempָ���λ����Ҫɾ���Ľ��
	pPrev->nextNode = temp->nextNode;
	free(temp);
	temp = NULL;
} 

//��λ�ò��ҽ��  ���ӡ����ֵ 
void researchSite_LinkList(struct LinkNode * pHeader, int site)
{
	if(pHeader == NULL)
	{
		return;
	}
	if(site < 1) //�ӵ�һ����㿪ʼ���ſ��Բ��� 
	{
		return;
	}
	
	//������ʱָ��
	struct LinkNode * temp = pHeader->nextNode;
	struct LinkNode * pPrev = pHeader;
	int count = 1;//��¼λ�� 
	
	while(temp != NULL) 
	{
		if(count == site)
		{
			break;
		}
		
		count++;
		pPrev = temp;
		temp = temp->nextNode;
		
	} 
	
	//δ�ҵ� 
	while(temp == NULL)
	{
		return;
	} 
	
	//��ӡ���  ��ʱtempָ���λ����Ҫ���ҵĽ��
	printf("%d ",temp->num); 

}  

//��ȡ������ 
int strlen_LinkList(struct LinkNode * pHeader)
{
	if(pHeader == NULL)
	{
		return;
	}
	
	//������ʱ���
	struct LinkNode * temp = pHeader;
	int len = 0;//��㳤�ȼ��� 
	while(temp->nextNode != NULL)
	{
		len++;
		temp = temp->nextNode;
			
	} 
	
	return len;
}

//��ת����  ֻ�����ֵ��ת��ӡ�� ����ʵ�ʽ������෴����  
void reverseValue_LinkList(struct LinkNode * pHeader)
{
	if(pHeader == NULL)
	{
		return;
	}
	
	//��ȡ������ 
	int lens = strlen_LinkList(pHeader);
	 
	//��λ�ò��������ֵ ����ӡ 
	int i = 0;
	for(i = lens; i > 0; i--)
	{
		researchSite_LinkList(pHeader, i);
	} 
}

//��ת����  ʵ�ʽ������෴����  
void reverseLink_LinkList(struct LinkNode * pHeader)
{
	if(pHeader == NULL)
	{
		return;
	}
	
	//���������ṹ��ָ�� ʵ������ķ�ת
	struct LinkNode * pPrev = NULL; 
	struct LinkNode * pCurrent = pHeader->nextNode; 
	struct LinkNode * pNext = NULL;
	
	while(pCurrent != NULL)
	{
		//�ȼ�¼��һ�����
		pNext = pCurrent->nextNode;
		
		//����ָ��ָ��  ����ָ
		pCurrent->nextNode = pPrev;
		
		//������������ָ���ָ��
		pPrev = pCurrent;
		pCurrent = pNext; 
	}
	
	//��ͷ������ӵ���һ�������
	pHeader->nextNode = pPrev; 
} 





















