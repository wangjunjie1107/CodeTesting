#include<stdio.h>

typedef struct LNode{
		ElemType  data;
		struct Lnode *next;
}Lnode, *LinkList

//�����ʼ�� 
Status InitList_L(LinkList &L)
{
	//����ͷ��㣬 ��nextΪ��
	
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	return OK; 
} 


Status ListInsert L(LinkList &L, int i, ElemType e) 
{
	//����������ĵ� i ��Ԫ��֮ǰ����һ��Ԫ��e
	p = (LinkList)malloc(sizeof(LNode));
	if(!p)
		exit(OVERFLOW);
	p->data = e;
	q = L;
	j = 0;
	while(q && j < i - 1)
	{
		q = q->next;
		++j;
	}
	
	if(!q || j > i - 1)
		return ERROR; 
	
	p->next = q->next;
	q->next = p;       //���� 
	
	return OK;
}//ListInsert_L









 

 
