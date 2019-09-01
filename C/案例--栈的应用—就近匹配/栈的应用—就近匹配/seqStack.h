#pragma  once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//ջ��˳��洢
#define  MAX 1024

typedef void * SeqStack;

//��ʼ��ջ
SeqStack init_SeqStack();

//��ջ
void push_SeqStack(SeqStack stack, void * data);

//��ջ
void pop_SeqStack(SeqStack stack);

//����ջ��
void * top_SeqStack(SeqStack stack);

//����ջ��С
int size_SeqStack(SeqStack stack);

//�ж�ջ�Ƿ�Ϊ��
int isEmpty_SeqStack(SeqStack stack);

//����
void destroy_SeqStack(SeqStack stack);

