#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//栈的顺序存储
#define MAX 1024

struct SStack
{
	//栈中数组  数组中元素类型为 void *
	void * data[MAX];

	//栈大小
	int m_Size;
};

//重命名 提高可读性
typedef void * SeqStack;

//初始化栈
SeqStack init_SeqStack();

//入栈
void push_SeqStack(SeqStack stack, void * data);

//出栈
void pop_SeqStack(SeqStack stack);

//返回栈顶
void * top_SeqStack(SeqStack stack);

//返回栈的大小
int size_SeqStack(SeqStack stack);

//判断栈是否为空
int isEmpty_SeqStack(SeqStack stack);

//销毁栈
void destroy_SeqStack(SeqStack stack);
