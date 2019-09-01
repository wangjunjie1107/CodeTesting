#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//���ṹ�����
struct LinkNode
{
	//ֻά��ָ����
	struct LinkNode * next;
};

struct LList
{
	struct LinkNode pHeader;//ͷ���
	int m_Size;//������
};

//������
typedef void * LinkList;

//��ʼ������
LinkList init_LinkList();

//��������
void insert_LinkList(LinkList list, int pos, void * data);

//��������
void foreach_LinkList(LinkList list, void(*myPrint)(void *));

//ɾ�� ��λ��ɾ��
void removeByPos_LinkList(LinkList list, int pos);

//��������
void destroy_LinkList(LinkList list);

//����������
int length_LinkList(LinkList list);

//ɾ�����  ��ֵɾ��
void removeByValue_LinkList(LinkList list, void * data, int(*myCompare)(void *,void *));

//�������
void removeAllNode_LinkList(LinkList list);
