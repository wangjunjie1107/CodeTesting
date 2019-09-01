#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct LinkNode
{
	//只维护指针域
	struct LinkNode * next;
};

struct LStack
{
	struct LinkNode pHeader;//头结点
	int m_Size;//栈大小
};

//重命名
typedef void * LinkStack;

//初始化栈
LinkStack init_LinkStack();

//入栈
void push_LinkStack(LinkStack stack, void * data);

//出栈
void pop_LinkStack(LinkStack stack);

//返回栈顶
void * top_LinkStack(LinkStack stack);


//返回栈的大小
int size_LinkStack(LinkStack stack);

//判断栈是否为空
int isEmpty_LinkStack(LinkStack stack);

//销毁栈
void destroy_LinkStack(LinkStack stack);

//将栈清空
void removeAllNode_LinkStack(LinkStack stack);
