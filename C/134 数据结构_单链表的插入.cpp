#include<stdio.h>

typedef struct Node
{
	ElemType data; //������
	struct Node* next; //ָ���� 
}Node;

typedef struct Node* LinkList;

//��ʼ������˳�����Ա�L�Ѵ��ڣ� 1 <= i <= ListLength(L)
//����������� L �е� i ��λ��֮ǰ�����µ�����Ԫ��e

Status ListInsert(LinkList *L, int i, ElemType e)
{
	int j;
	LinkList p, s;
	
	p = *L;
	j = 1;
	
	while(p && j < i)   //Ѱ�ҵ�i�����
	{
		p = p->next;
		++j;
	}
	
	if(!p || j > i)
	{
		return ERROR;  //���ش��� 
	} 
	
	s = (LinkList)malloc(sizeof(Node));  //����һ���µĽ�� 
	s->data = e; //������Ԫ�� 
	
	s->next = p->next;   //���� 
	p->next = s;
	
	return OK;
} 


