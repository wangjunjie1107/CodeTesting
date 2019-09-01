#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include "SeqStack.h"

typedef void * SeqStack;

struct Person
{
	char name[64];
	int age;
};

//����ջ
void test01()
{
	//����ջ
	SeqStack myStack = init_SeqStack();

	//�������� ��ջ�ϴ���
	struct Person p1 = { "aaa", 11 };
	struct Person p2 = { "bbb", 22 };
	struct Person p3 = { "ccc", 33 };
	struct Person p4 = { "ddd", 44 };
	struct Person p5 = { "eee", 55 };

	//��ջ
	push_SeqStack(myStack, &p1);
	push_SeqStack(myStack, &p2);
	push_SeqStack(myStack, &p3);
	push_SeqStack(myStack, &p4);
	push_SeqStack(myStack, &p5);

	printf("ջ�Ĵ�СΪ:%d\n", size_SeqStack(myStack));

	while (isEmpty_SeqStack(myStack) == 0) //ջ��Ϊ�� ��ʼ�鿴ջ�������ҳ�ջ
	{
		struct Person * pTop = top_SeqStack(myStack);
		printf("ջ��Ԫ��- ����: %s  ����: %d\n", pTop->name, pTop->age);

		//��ջ
		pop_SeqStack(myStack);
	}

	printf("ջ�Ĵ�СΪ:%d\n", size_SeqStack(myStack));

	destroy_SeqStack(myStack);
}

int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}