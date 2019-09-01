#include<stdio.h>

#define MAXSIZE 1000

typedef struct
{
	ElemType data;  //数据
	int cur;       //游标  Cursor
	 
}Component, StaticLinkList[MAXSIZE];


//对静态链表初始化相当于初始化数组
Status InitList(StaticLinkList space)
{
	int i;
	
	for(i = 0; i < MAXSIZE - 1; i++)
	{
		space[i].cur = i + 1;
	}
	
	space[MAXSIZE - 1].cur = 0;
	
	return OK;
 } 
 
/*
	  我们对数组的第一个和最后一个元素做特殊处理，他们的data
	存放数据。
	
	  通常把未使用的数组元素称为备用链表。
	  
	  数组的第一个元素，即下标为0的那个元素的cur就存放备用链表
	的第一个结点的下标。 
	 
	  数组的最后一个元素，即下标为MAXSIZE-1的cur则存放第一个有
	数值的元素的下标，相当于单链表中的头结点的作用。
	
	  在静态链表中，操作的是数组，不存在像动态链表的结点申请和
	释放的问题，所以我们需要自己实现这两个函数，才可以做到插入
	和删除操作。
	
	  为了辨明数组中哪些分量未被使用，解决的办法是将所有未被使用过的
	及已被删除的用游标链成一个备用链表。 
*/ 
 

//静态链表的插入操作

//首先是获得空闲分量的下标
int Malloc_SLL(StaticLinkList space)
{
	int i = space[0].cur;
	
	if( space[0].cur )
		space[0].cur = space[i].cur;
		//把它的下一个分量用来作为备用。
	
	return i;	 //返回空闲分量的下标。 
}

//在静态链表L中第i个元素之前插入新的数据元素e

Status ListInsert( StaticLinkList L, int i, ElemType e )
{
	int j, k, l;
	
	k = MAX_SIZE - 1; //数组的最后一个元素
	if( i < 1 || i > ListLength(L)+1 )
	{
		return ERROR;
	}
	
	j = Malloc_SLL(L);
	if(j)
	{
		L[j].data = e;
		for( l = 1; l <= i - 1; l++)
		{
			k = L[k].cur; 
		}
		L[j].cur = L[k].cur;
		L[k].cur = j;
		
		return OK;
	}
	
	return ERROR; 
 } 
 
//删除在L中的第i个数据元素
Status ListDelete( StaticLinkList L, int i)
{
	int j, k;
	
	if( i < 1 || i > ListLength(L) )
	{
		return ERROR;
	}
	
	k = MAX_SIZE - 1;
	
	for( j = 1; j <= i - 1; j++)
	{
		k = L[k].cur;
	}
	
	j = L[k].cur;
	L[k].cur = L[j].cur;
	
	Free_SLL(L, j);
	
	return OK;
}

//将下标为K的空闲节点回收到备用链表
void Free_SLL(StaticLinkList space, int k)
{
	space[k].cur = space[0].cur;
	space[0].cur = k;
} 
 
 
//返回L中数据元素个数
int ListLength(StaticLinkList L) 
{
	int j = 0;
	int i = L[MAXSIZE - 1].cur;
	
	while(i)
	{
		i = L[i].cur;
		j++;
	}
	
	return j;
}
 
 
 
 
 
 
 
 
 
 
 
