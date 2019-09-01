#include<stdio.h>

typedef struct LNode{
		ElemType  data;
		struct Lnode *next;
}Lnode, *LinkList

//链表初始化 
Status InitList_L(LinkList &L)
{
	//建立头结点， 其next为空
	
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	return OK; 
} 


Status ListInsert L(LinkList &L, int i, ElemType e) 
{
	//在线性链表的第 i 个元素之前插入一个元素e
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
	q->next = p;       //挂链 
	
	return OK;
}//ListInsert_L









 

 
