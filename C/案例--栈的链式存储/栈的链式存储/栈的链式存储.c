#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include "linkStack.h"


//重命名
typedef void * LinkStack;

struct Person
{
	//struct LinkNode node;
	int *a; //留出4个字节的空间
	char name[64];
	int age;
};

//测试
void test01()
{
	//创建栈
	LinkStack myStack = init_LinkStack();

	//创建数据
	struct Person p1 = { NULL, "aaa", 11 };
	struct Person p2 = { NULL, "bbb", 22 };
	struct Person p3 = { NULL, "ccc", 33 };
	struct Person p4 = { NULL, "ddd", 44 };
	struct Person p5 = { NULL, "eee", 55 };

	//入栈
	push_LinkStack(myStack, &p1);
	push_LinkStack(myStack, &p2);
	push_LinkStack(myStack, &p3);
	push_LinkStack(myStack, &p4);
	push_LinkStack(myStack, &p5);


	printf("栈的大小为:%d\n", size_LinkStack(myStack));

	while (isEmpty_LinkStack(myStack) == 0) //栈不为空 开始查看栈顶，并且出栈
	{
		struct Person * pTop = top_LinkStack(myStack);
		printf("链式存储：：：栈顶元素- 姓名: %s  年龄: %d\n", pTop->name, pTop->age);
	
		//出栈
		pop_LinkStack(myStack);
	}

	printf("元素全部出栈后，栈的大小为:%d\n", size_LinkStack(myStack));
	
	//将栈置空
	removeAllNode_LinkStack(myStack);
	printf("栈置空后的大小为:%d\n", size_LinkStack(myStack));
	
	destroy_LinkStack(myStack);
}

int main() 
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

