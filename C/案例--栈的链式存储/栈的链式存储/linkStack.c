#include "linkStack.h"


//重命名
typedef void * LinkStack;

//初始化栈
LinkStack init_LinkStack()
{
	struct LStack * myStack = malloc(sizeof(struct LStack));

	if (myStack == NULL)
	{
		return NULL;
	}

	myStack->pHeader.next = NULL;
	myStack->m_Size = 0;

	return myStack;
}

//入栈
void push_LinkStack(LinkStack stack, void * data)
{
	//本质 头插法
	if (stack == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}

	struct LStack * myStack = stack;

	//取出用户前4个字节
	struct LinkNode * myNode = data;

	//建立结点之间的关系 将新节点插入到头结点之后，头结点指向新节点
	//挂链
	myNode->next = myStack->pHeader.next;
	myStack->pHeader.next = myNode;

	//更新栈的大小
	myStack->m_Size++;
}

//出栈
void pop_LinkStack(LinkStack stack)
{
	if (stack == NULL)
	{
		return;
	}

	struct LStack * myStack = stack;

	//本质 是 头删
	if (myStack->m_Size == 0)
	{
		return;
	}

	//创建指向第一个结点指针
	struct LinkNode * pFirst = myStack->pHeader.next;

	//更新结点指向  挂链 跨过第一个指针
	myStack->pHeader.next = pFirst->next;

	//更新栈大小
	myStack->m_Size--;
}

//返回栈顶
void * top_LinkStack(LinkStack stack)
{
	if (stack == NULL)
	{
		return NULL;
	}

	struct LStack * myStack = stack;
	if (myStack->m_Size == 0)
	{
		return NULL;
	}

	return myStack->pHeader.next;
}


//返回栈的大小
int size_LinkStack(LinkStack stack)
{
	if (stack == NULL)
	{
		return -1;
	}

	struct LStack * myStack = stack;

	return myStack->m_Size;
}

//判断栈是否为空
int isEmpty_LinkStack(LinkStack stack)
{
	if (stack == NULL)
	{
		return -1;
	}

	struct LStack * myStack = stack;
	if (myStack->m_Size == 0)
	{
		return 1;//栈空 返回1
	}

	return 0;//不为空
}

//销毁栈
void destroy_LinkStack(LinkStack stack)
{
	if (stack == NULL)
	{
		return;
	}

	struct LStack * myStack = stack;

	free(myStack);
	myStack = NULL;
}

//将栈清空
void removeAllNode_LinkStack(LinkStack stack)
{
	if (stack == NULL)
	{
		return;
	}

	struct LStack * myStack = stack;
	if (myStack->m_Size == 0)
	{
		return;
	}

	//断开结点间的链接
	myStack->pHeader.next = NULL;
	myStack->m_Size = 0;
}
