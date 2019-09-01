#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include "linkStack.h"


//������
typedef void * LinkStack;

struct Person
{
	//struct LinkNode node;
	int *a; //����4���ֽڵĿռ�
	char name[64];
	int age;
};

//����
void test01()
{
	//����ջ
	LinkStack myStack = init_LinkStack();

	//��������
	struct Person p1 = { NULL, "aaa", 11 };
	struct Person p2 = { NULL, "bbb", 22 };
	struct Person p3 = { NULL, "ccc", 33 };
	struct Person p4 = { NULL, "ddd", 44 };
	struct Person p5 = { NULL, "eee", 55 };

	//��ջ
	push_LinkStack(myStack, &p1);
	push_LinkStack(myStack, &p2);
	push_LinkStack(myStack, &p3);
	push_LinkStack(myStack, &p4);
	push_LinkStack(myStack, &p5);


	printf("ջ�Ĵ�СΪ:%d\n", size_LinkStack(myStack));

	while (isEmpty_LinkStack(myStack) == 0) //ջ��Ϊ�� ��ʼ�鿴ջ�������ҳ�ջ
	{
		struct Person * pTop = top_LinkStack(myStack);
		printf("��ʽ�洢������ջ��Ԫ��- ����: %s  ����: %d\n", pTop->name, pTop->age);
	
		//��ջ
		pop_LinkStack(myStack);
	}

	printf("Ԫ��ȫ����ջ��ջ�Ĵ�СΪ:%d\n", size_LinkStack(myStack));
	
	//��ջ�ÿ�
	removeAllNode_LinkStack(myStack);
	printf("ջ�ÿպ�Ĵ�СΪ:%d\n", size_LinkStack(myStack));
	
	destroy_LinkStack(myStack);
}

int main() 
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

