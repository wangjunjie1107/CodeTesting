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

//测试栈
void test01()
{
	//创建栈
	SeqStack myStack = init_SeqStack();

	//创建数据 在栈上创建
	struct Person p1 = { "aaa", 11 };
	struct Person p2 = { "bbb", 22 };
	struct Person p3 = { "ccc", 33 };
	struct Person p4 = { "ddd", 44 };
	struct Person p5 = { "eee", 55 };

	//入栈
	push_SeqStack(myStack, &p1);
	push_SeqStack(myStack, &p2);
	push_SeqStack(myStack, &p3);
	push_SeqStack(myStack, &p4);
	push_SeqStack(myStack, &p5);

	printf("栈的大小为:%d\n", size_SeqStack(myStack));

	while (isEmpty_SeqStack(myStack) == 0) //栈不为空 开始查看栈顶，并且出栈
	{
		struct Person * pTop = top_SeqStack(myStack);
		printf("栈顶元素- 姓名: %s  年龄: %d\n", pTop->name, pTop->age);

		//出栈
		pop_SeqStack(myStack);
	}

	printf("栈的大小为:%d\n", size_SeqStack(myStack));

	destroy_SeqStack(myStack);
}

int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}