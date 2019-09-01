#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//结点结构体
struct LinkNode
{
	//数据域 声明为void  让用户自己定义数据类型
	void * data;
	//指针域
	struct LinkNode * next;
};

//链表结构体
struct LList
{
	struct LinkNode pHeader; //头结点
	int m_Size;//链表长度
};


//void * 别名
typedef void * LinkList;

//初始化链表
LinkList init_LinkList();

//插入结点
void insert_LinkList(LinkList list, int pos, void * data);


//遍历链表 void(*myPrint)(void *) 回调函数  让用户自己考虑数据的打印
void foreach_LinkList(LinkList list, void(*myPrint)(void *));


//删除链表结点 按位置删除
void removeByPos_LinkList(LinkList list, int pos);

//删除链表结点  按值删除
void removeByValue_LinkList(LinkList list, void * data, int(*myCompare)(void *, void *));

//返回链表长度
int size_LinkList(LinkList list);

//清空链表
void clear_LinkList(LinkList list);

//销毁链表
void destroy_LinkList(LinkList list);