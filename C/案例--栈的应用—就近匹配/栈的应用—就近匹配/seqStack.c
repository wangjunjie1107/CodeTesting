#include "seqStack.h"

struct SStack
{
	//栈中数组
	void * data[MAX];

	//栈大小
	int m_Size;
};


//初始化栈
SeqStack init_SeqStack()
{
	struct SStack * myStack = malloc(sizeof(struct SStack));

	if (myStack == NULL)
	{
		return NULL;
	}

	memset(myStack->data, 0, sizeof(void *)*MAX);

	myStack->m_Size = 0;

	return myStack;
}

//入栈
void push_SeqStack(SeqStack stack, void * data)
{
	//本质 数组尾插
	if (stack == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}

	struct SStack * mystack = stack;

	//判断栈是否满
	if (mystack->m_Size == MAX)
	{
		return;
	}
	//数组进行尾插
	mystack->data[mystack->m_Size] = data;
	//更新栈大小
	mystack->m_Size++;

}

//出栈
void pop_SeqStack(SeqStack stack)
{
	//出栈本质  数组尾删除

	if (stack == NULL)
	{
		return;
	}

	struct SStack * mystack = stack;

	if (mystack->m_Size == 0)
	{
		return;
	}

	mystack->data[mystack->m_Size - 1] = NULL;

	mystack->m_Size--;
}

//返回栈顶
void * top_SeqStack(SeqStack stack)
{
	//本质 返回数组的最后一个元素

	if (stack == NULL)
	{
		return NULL;
	}

	struct SStack * mystack = stack;
	if (mystack->m_Size == 0)
	{
		return NULL;
	}

	return mystack->data[mystack->m_Size - 1];

}

//返回栈大小
int size_SeqStack(SeqStack stack)
{

	if (stack == NULL)
	{
		return -1;
	}
	struct SStack * mystack = stack;
	return mystack->m_Size;

}

//判断栈是否为空
int isEmpty_SeqStack(SeqStack stack)
{
	if (stack == NULL)
	{
		return -1; //传入空指针 返回真 栈也是空
	}
	struct SStack * mystack = stack;

	if (mystack->m_Size == 0)
	{
		return 1; //1代表真 栈确实为空
	}

	return 0; //不为空 假

}

//销毁
void destroy_SeqStack(SeqStack stack)
{
	if (stack == NULL)
	{
		return;
	}
	free(stack);
	stack = NULL;
}

