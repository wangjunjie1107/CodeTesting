#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 50

typedef struct
{
	char name[15];
	int age;
}DATA;

#include "287 �㷨_ջ�Ĳ���.h"

int main()
{
	SeqStack *stack;
	DATA data, data1;
	
	//��ʼ��ջ 
	stack = SeqStackInit();	
	
	printf("��ջ������\n");
	printf("�������� ���������ջ������");
	scanf("%s%d", data.name, &data.age);
	
	//��ջ 
	SeqStackPush(stack, data);
	
	printf("�������� �����ٽ�����ջ������");
	scanf("%s%d", data.name, &data.age);
	SeqStackPush(stack, data);
	
	printf("\n��ջ������\n����������г�ջ������");
	getchar();
	
	//��ջ 
	data1 = SeqStackPop(stack);
	printf("��ջ�������ǣ�%s%d)\n",data1.name, data1.age);
	printf("�ٰ���������г�ջ������");
	getchar();
	
	data1 = SeqStackPop(stack);
	printf("��ջ�������ǣ�%s%d)\n",data1.name, data1.age);
	SeqStackFree(stack); //�ͷ�ջ��ռ�õĿռ� 
	getchar();
	
	return 0; 
} 
 
 
 
 
 
 
 
 
 
 
 
 
