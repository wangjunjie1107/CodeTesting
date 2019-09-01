#include<stdio.h>

typedef struct Node
{
	ElemType data;        //������
	struct Node* next;   //ָ���� 
}Node;

typedef struct Node* LinkList;


Status ClearList(LinkList *L)
{
	LinkList p, q;   //��������ָ�� 
	
	p = (*L)->next;  //��pָ������ĵ�һ����� 
	
	while(p)
	{
		q = p->next;  //��qָ����һ����� 
		free(p);	  //�ͷ���һ����� 
		p = q;		 //������pָ����һ����� 
	}
	
	(*L)->next = NULL;  //ͷָ��ָ��� 
	
	return OK;
} 
