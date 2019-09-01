#include<stdio.h>

typedef struct Node
{
	ElemType data; //数据域
	struct Node* next; //指针域 
}Node;

typedef struct Node* LinkList;

//初始条件：顺序线性表L已存在， 1 <= i <= ListLength(L)
//操作结果：用 e 返回 L 中第 i 个数据元素的值

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
