


#include "SeqStack.h"


typedef void * SeqStack;

//��ʼ��ջ
SeqStack init_SeqStack()
{
	struct SStack * myStack = malloc(sizeof(struct SStack));

	if (myStack == NULL)
	{
		return NULL;
	}

	memset(myStack->data, 0, sizeof(void *) * MAX);
	myStack->m_Size = 0;

	return myStack;
}

//��ջ
void push_SeqStack(SeqStack stack, void * data)
{
	//���� ����β��
	if (stack == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}

	struct SStack * myStack = stack;

	//�ж�ջ�Ƿ�����
	if (myStack->m_Size == MAX)
	{
		return;
	}

	//�������β��  ʵ������ָ��֮��ĸ�ֵ  ��ջ�е�ָ��  ָ���û����ݵ� ��ַ
	myStack->data[myStack->m_Size] = data;

	//����ջ��С
	myStack->m_Size++;
}

//��ջ
void pop_SeqStack(SeqStack stack)
{
	//��ջ���� ����βɾ��
	if (stack == NULL)
	{
		return;
	}

	struct SStack * myStack = stack;

	if (myStack->m_Size == 0)
	{
		return;
	}

	//ֱ�ӽ�Ԫ���ÿ�
	myStack->data[myStack->m_Size - 1] = NULL;

	myStack->m_Size--;
}

//����ջ��
void * top_SeqStack(SeqStack stack)
{
	//���� ������������һ��Ԫ��
	if (stack == NULL)
	{
		return NULL;
	}

	struct SStack * myStack = stack;
	if (myStack->m_Size == 0)
	{
		return NULL;
	}

	//ֱ�ӷ���ָ�����һ��Ԫ�ص�ָ��
	return myStack->data[myStack->m_Size - 1];

}

//����ջ�Ĵ�С
int size_SeqStack(SeqStack stack)
{
	if (stack == NULL)
	{
		return -1;
	}

	struct SStack * mystack = stack;
	return mystack->m_Size;
}

//�ж�ջ�Ƿ�Ϊ��
int isEmpty_SeqStack(SeqStack stack)
{
	if (stack == NULL)
	{
		//�����ָ�� ������ ջҲ�ǿ�
		return -1;
	}
	struct SStack * myStack = stack;

	if (myStack->m_Size == 0)
	{
		return 1;//������ ջȷʵΪ��
	}

	return 0;//��Ϊ�� ��
}

//����ջ
void destroy_SeqStack(SeqStack stack)
{
	if (stack == NULL)
	{
		return;
	}

	free(stack);
	stack = NULL;
}
