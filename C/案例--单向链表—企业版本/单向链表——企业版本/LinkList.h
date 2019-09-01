#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//结点结构体设计
struct LinkNode
{
	//只维护指针域
	struct LinkNode * next;
};

struct LList
{
	struct LinkNode pHeader;//头结点
	int m_Size;//链表长度
};

//重命名
typedef void * LinkList;

//初始化链表
LinkList init_LinkList();

//插入链表
void insert_LinkList(LinkList list, int pos, void * data);

//遍历数据
void foreach_LinkList(LinkList list, void(*myPrint)(void *));

//删除 按位置删除
void removeByPos_LinkList(LinkList list, int pos);

//销毁链表
void destroy_LinkList(LinkList list);

//返回链表长度
int length_LinkList(LinkList list);

//删除结点  按值删除
void removeByValue_LinkList(LinkList list, void * data, int(*myCompare)(void *,void *));

//清空链表
void removeAllNode_LinkList(LinkList list);
