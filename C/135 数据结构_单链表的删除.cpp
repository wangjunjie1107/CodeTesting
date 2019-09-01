#include<stdio.h>

typedef struct Node
{
	ElemType data; //������
	struct Node* next; //ָ���� 
}Node;

typedef struct Node* LinkList;

//��ʼ������˳�����Ա�L�Ѵ��ڣ� 1 <= i <= ListLength(L)
//����������� L �е� i ��λ��֮ǰ��Ԫ��eɾ��

Status ListInsert(LinkList *L, int i, ElemType e)
{
	int j;
	LinkList p, q;
	
	p = *L;
	j = 1;
	
	while(p->next && j < i)  //Ѱ�ҵ�i�����
	{
		p = p->next;
		++j;
	}
	
	if(!(p->next) || j > i)
	{
		return ERROR;
	} 
	
	q = p->next;
	p->next = q->next;
	
	*e = q->data;  
	free(q); 
	
	
	return OK;
} 

