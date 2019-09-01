#include<stdio.h>

typedef struct Node
{
	ElemType data; //数据域
	struct Node* next; //指针域 
}Node;

typedef struct Node* LinkList;

//初始条件：顺序线性表L已存在， 1 <= i <= ListLength(L)
//操作结果：将 L 中第 i 个位置之前的元素e删除

Status ListInsert(LinkList *L, int i, ElemType e)
{
	int j;
	LinkList p, q;
	
	p = *L;
	j = 1;
	
	while(p->next && j < i)  //寻找第i个结点
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

