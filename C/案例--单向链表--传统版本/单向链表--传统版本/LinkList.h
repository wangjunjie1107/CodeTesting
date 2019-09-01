#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//���ṹ��
struct LinkNode
{
	//������ ����Ϊvoid  ���û��Լ�������������
	void * data;
	//ָ����
	struct LinkNode * next;
};

//����ṹ��
struct LList
{
	struct LinkNode pHeader; //ͷ���
	int m_Size;//������
};


//void * ����
typedef void * LinkList;

//��ʼ������
LinkList init_LinkList();

//������
void insert_LinkList(LinkList list, int pos, void * data);


//�������� void(*myPrint)(void *) �ص�����  ���û��Լ��������ݵĴ�ӡ
void foreach_LinkList(LinkList list, void(*myPrint)(void *));


//ɾ�������� ��λ��ɾ��
void removeByPos_LinkList(LinkList list, int pos);

//ɾ��������  ��ֵɾ��
void removeByValue_LinkList(LinkList list, void * data, int(*myCompare)(void *, void *));

//����������
int size_LinkList(LinkList list);

//�������
void clear_LinkList(LinkList list);

//��������
void destroy_LinkList(LinkList list);