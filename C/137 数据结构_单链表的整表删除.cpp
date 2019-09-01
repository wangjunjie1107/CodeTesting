#include<stdio.h>

typedef struct Node
{
	ElemType data;        //数据域
	struct Node* next;   //指针域 
}Node;

typedef struct Node* LinkList;


Status ClearList(LinkList *L)
{
	LinkList p, q;   //定义两个指针 
	
	p = (*L)->next;  //让p指向链表的第一个结点 
	
	while(p)
	{
		q = p->next;  //让q指向下一个结点 
		free(p);	  //释放上一个结点 
		p = q;		 //继续让p指向下一个结点 
	}
	
	(*L)->next = NULL;  //头指针指向空 
	
	return OK;
} 
