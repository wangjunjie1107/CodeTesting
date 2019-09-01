#include<string.h>
 
//��ӽ�㵽����β�� 
ChainListType *ChainListAddEnd(ChainListType *head, DATA data)
{
	ChainListType *node, *h;
	
	if(!(node = (ChainListType *)malloc(sizeof(ChainListType))))
	{
		printf("Ϊ���������������ڴ�ʧ�ܣ�\n");
		return NULL; //�����ڴ�ʧ�� 
	}
	
	node->data = data;  //�������� 
	node->next = NULL; //���ý��ָ��Ϊ�գ���Ϊ��β
	
	if(head == NULL) 	//����ͷ���ָ���
	{
		head = node;	//��ͷ���ָ�����Ľ�� 
		return head;	//����ͷ��� 
	}
	
	
	h = head;//����һ��ָ�룬ָ��ͷ��㣬������ͷ��㿪ʼ���²��ң�ֱ���ҵ�β�ڵ� 
	while(h->next != NULL) //���������ĩβ
	{
		h = h->next;
	}		
	h->next = node;
	return head;
}

//��ӽ�㵽����ͷ�� 
ChainListType *ChainListAddFirst(ChainListType *head, DATA data)
{
	ChainListType *node, *h;
	
	if(!(node = (ChainListType *)malloc(sizeof(ChainListType))))
	{
		printf("Ϊ���������������ڴ�ʧ�ܣ�\n");
		return NULL; //�����ڴ�ʧ�� 
	}
	
 
	node->data = data;  //�������� 
	
	//��������
	node->next = head; //ָ��ͷָ����ָ���
	head = node;		//ͷָ��ָ��������� 
	
	return head; 
} 

//�������뵽������ 
ChainListType *ChainListInsert(ChainListType *head, char *findkey, DATA data)
{
	ChainListType *node, *node1;
	
	//Ϊ�½ڵ�����ڴ�ռ䣬׼��װ������ 
	if(!(node = (ChainListType *)malloc(sizeof(ChainListType))))
	{
		printf("Ϊ���������������ڴ�ʧ�ܣ�\n");
		return NULL; //�����ڴ�ʧ�� 
	}
	
	node->data = data;	//�������е����� 
	node1 = ChainListFind(head, findkey);
	
	if(node1)  //���ҵ�Ҫ�����λ�ã�Ҳ�������ĸ����֮����� 
	{
		//�������� 
		node->next  = node1->next;
		node1->next = node;
	}
	else{
		free(node); //�ͷ��ڴ�
		printf("δ�ҵ�����λ�ã�\n");  
	} 
	
	return head; //����ͷָ�� 
}

//���ؼ����������в���  
ChainListType *ChainListFind(ChainListType *head, char *key)
{
	ChainListType *h;
	h = head; //��������ͷָ��
	
	while(h) //�������Ч������в��� 
	{
		//���ؼ����봫��ؼ�����ͬ	 
		if(strcmp(h->data.key, key) == 0)
			return h;  //���ظý��ָ��
			
		h = h->next; //����������һ��� 
	}
	
	return NULL;  //���ؿ�ָ�룬��ʾδ�ҵ�	
} 


//ɾ��ָ���ؼ��ֵĽ��
int  ChainListDelete(ChainListType *head, char *key)
{
	ChainListType *node, *h;//node����ɾ������ǰһ����� 
	node = h = head;
	
	while(h) //�� h ��= NULL ʱ 
	{
		if(strcmp(h->data.key, key) == 0)//�ҵ�Ҫɾ���Ľ��
		{
			node->next = h->next;//ʹǰһ���ָ��ǰ������һ�����
			free(h);//�ͷ��ڴ�
			return 1; 
		}
		else
		{
			node = h; //ָ��ǰ���
			h = h->next; //ָ����һ��� 
		}
	}
	
	return 0;//δ�ҵ�Ҫɾ���Ľ�� 
}

//��ȡ������ 
int ChainListLength(ChainListType *head) 
{
	ChainListType *h;
	int i = 0; //����
	h = head;
	
	while(h)  //������������ 
	{
		i++;  //�ۼӽ������ 
		h = h->next; //������һ��� 
	}
	return i; //���ؽ������ 
} 
  
