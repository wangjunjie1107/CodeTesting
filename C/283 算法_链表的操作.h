#include<stdlib.h>
typedef struct Node
{
	DATA data;
	struct Node *next;
}ChainListType;

//添加结点到链表尾部 
ChainListType *ChainListAddEnd(ChainListType *head, DATA data); 
 
//添加结点到链表头部 
ChainListType *ChainListAddFirst(ChainListType *head, DATA data); 
 
//按关键字在链表中查找  
ChainListType *ChainListFind(ChainListType *head, char *key); 
 

//将结点插入到链表当中 
ChainListType *ChainListInsert(ChainListType *head, char *findkey, DATA data);

//删除指定关键字的结点
int  ChainListDelete(ChainListType *head, char *key); 

//获取链表结点数量 
int  ChainListLength(ChainListType *head);
 
 
 
 
 
 
 
 
