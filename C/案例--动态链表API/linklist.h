#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//节点结构体
struct LinkNode
{
	int num;

	struct LinkNode* next;
};

//初始化链表
//函数返回值 创建好的链表的头结点
struct LinkNode* init_LinkNode();

//找到尾节点
struct LinkNode* find_TailLinkNode(struct LinkNode* pHeader);

//尾插法
struct LinkNode* insert_LinkNodeatTail(struct LinkNode* pTail);

//遍历链表
void foreach_LinkList(struct LinkNode* pHeader);

//插入结点功能
void insert_LinkList(struct LinkNode* pHeader, int oldVal, int newVal);

//删除结点
void delete_LinkList(struct LinkNode* pHeader, int delVal);

//清空链表
void clear_LinkNode(struct LinkNode* pHeader);

//销毁链表
void destory_LinkNode(struct LinkNode* pHeader);