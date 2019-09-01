#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//��̬����ṹ��
struct dynamicArray
{
	//��ʵ�ڶ������������ָ��
	void ** pAddr;
	//��������
	int m_Capacity;
	//�����С
	int m_size;
};

//��ʼ������ 
//��������ʼ�������� 
//����ֵ������ָ��
struct dynamicArray * init_dynamicArray(int capacity);


//��������
void insert_dynamicArray(struct dynamicArray * arr, void * data, int pos);


//������̬����  �ص����� void(*myPrint)(void *)
void foreach_dynamicArray(struct dynamicArray * arr, void(*myPrint)(void *));


//ɾ������
//����λ��ɾ������
void removeByPos_dynamicArray(struct dynamicArray * arr, int pos);


//��ֵ��ʽɾ������  int(*myCompare)(void *,void *) �ص�����
void removeByValue_dynamicArray(struct dynamicArray * arr, void * data, int(*myCompare)(void *, void *));


//��������
void destroy_dynamicArray(struct dynamicArray * arr);