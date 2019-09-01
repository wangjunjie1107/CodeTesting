#include<stdio.h>

typedef struct Node
{
	ElemType data; //数据域
	struct Node* next; //指针域 
}Node;

typedef struct Node* LinkList;

//初始条件：顺序线性表L已存在， 1 <= i <= ListLength(L)
//操作结果：在 L 中第 i 个位置之前插入新的数据元素e

Status ListInsert(LinkList *L, int i, ElemType e)
{
	int j;
	LinkList p, s;
	
	p = *L;
	j = 1;
	
	while(p && j < i)   //寻找第i个结点
	{
		p = p->next;
		++j;
	}
	
	if(!p || j > i)
	{
		return ERROR;  //返回错误 
	} 
	
	s = (LinkList)malloc(sizeof(Node));  //创建一个新的结点 
	s->data = e; //填充结点的元素 
	
	s->next = p->next;   //挂链 
	p->next = s;
	
	return OK;
} 


