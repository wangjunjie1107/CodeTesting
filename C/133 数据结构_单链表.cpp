#include<stdio.h>

typedef struct Node
{
	ElemType data; //������
	struct Node* next; //ָ���� 
}Node;

typedef struct Node* LinkList;

//��ʼ������˳�����Ա�L�Ѵ��ڣ� 1 <= i <= ListLength(L)
//����������� e ���� L �е� i ������Ԫ�ص�ֵ

Status GetElement(LinkList L, int i, ElemType *e)
{
	int j;
	LinkList p;
	
	p = L->next;
	j = 1;
	
	while(p && j < i)
	{
		p = p->next;
		++j;
	}
	
	if(!p || j>i)
	{
		return ERROR;
	}
	
	*e = p->data;
	
	return OK;

} 	
