#include<stdlib.h>
typedef struct Node
{
	DATA data;
	struct Node *next;
}ChainListType;

//��ӽ�㵽����β�� 
ChainListType *ChainListAddEnd(ChainListType *head, DATA data); 
 
//��ӽ�㵽����ͷ�� 
ChainListType *ChainListAddFirst(ChainListType *head, DATA data); 
 
//���ؼ����������в���  
ChainListType *ChainListFind(ChainListType *head, char *key); 
 

//�������뵽������ 
ChainListType *ChainListInsert(ChainListType *head, char *findkey, DATA data);

//ɾ��ָ���ؼ��ֵĽ��
int  ChainListDelete(ChainListType *head, char *key); 

//��ȡ���������� 
int  ChainListLength(ChainListType *head);
 
 
 
 
 
 
 
 
