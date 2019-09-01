#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct LinkNode
{
	//ֻά��ָ����
	struct LinkNode * next;
};

struct LStack
{
	struct LinkNode pHeader;//ͷ���
	int m_Size;//ջ��С
};

//������
typedef void * LinkStack;

//��ʼ��ջ
LinkStack init_LinkStack();

//��ջ
void push_LinkStack(LinkStack stack, void * data);

//��ջ
void pop_LinkStack(LinkStack stack);

//����ջ��
void * top_LinkStack(LinkStack stack);


//����ջ�Ĵ�С
int size_LinkStack(LinkStack stack);

//�ж�ջ�Ƿ�Ϊ��
int isEmpty_LinkStack(LinkStack stack);

//����ջ
void destroy_LinkStack(LinkStack stack);

//��ջ���
void removeAllNode_LinkStack(LinkStack stack);
