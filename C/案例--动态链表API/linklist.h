#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//�ڵ�ṹ��
struct LinkNode
{
	int num;

	struct LinkNode* next;
};

//��ʼ������
//��������ֵ �����õ������ͷ���
struct LinkNode* init_LinkNode();

//�ҵ�β�ڵ�
struct LinkNode* find_TailLinkNode(struct LinkNode* pHeader);

//β�巨
struct LinkNode* insert_LinkNodeatTail(struct LinkNode* pTail);

//��������
void foreach_LinkList(struct LinkNode* pHeader);

//�����㹦��
void insert_LinkList(struct LinkNode* pHeader, int oldVal, int newVal);

//ɾ�����
void delete_LinkList(struct LinkNode* pHeader, int delVal);

//�������
void clear_LinkNode(struct LinkNode* pHeader);

//��������
void destory_LinkNode(struct LinkNode* pHeader);