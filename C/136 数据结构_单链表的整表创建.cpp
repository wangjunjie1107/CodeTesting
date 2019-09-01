#include<stdio.h>

typedef struct Node
{
	ElemType data; //数据域
	struct Node* next; //指针域 
}Node;

typedef struct Node* LinkList;

//头插法建立单链表示例 

void CreateListHead(LinkList *L, int n)
{
	LinkList p;
	int i;
	
	srand(time(0));  //初始化随机数种子
	
	*L = (LinkList)malloc(sizeof(Node));
	(*L)->next = NULL;
	
	for( i = 0; i < n; i++)
	{
		p = (LinkList)malloc(sizeof(Node)); //生成新结点
		p->data = rand()%100+1; //数据域 
		p->next = (*L)->next;	//指针域 
		(*L)->next = p; 
	} 
 } 
 
 
//尾插法建立单链表演示

void CreateListTail(LinkList *L, int n)
{
	LinkList p, r; //指针域 
	int i;
	
	srand(time(0));//生成随机数种子 
	*L = (LinkList)malloc(sizeof(Node));//生成链表结点 
	r = *L;
	
	for( i = 0; i < n; i++)
	{
		p = (Node *)malloc(sizeof(Node));//生成新链表结点 
		p->data = rand()%100+1;//数据域
		 
		r->next = p; //尾指针指向新的结点 
		r = p;  // 让指针后移 
	 } 
	 
	r->next = NULL; //指针的后继继续为空 
 } 
