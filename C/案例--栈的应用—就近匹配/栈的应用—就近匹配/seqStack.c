#include "seqStack.h"

struct SStack
{
	//ջ������
	void * data[MAX];

	//ջ��С
	int m_Size;
};


//��ʼ��ջ
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

	struct SStack * mystack = stack;

	//�ж�ջ�Ƿ���
	if (mystack->m_Size == MAX)
	{
		return;
	}
	//�������β��
	mystack->data[mystack->m_Size] = data;
	//����ջ��С
	mystack->m_Size++;

}

//��ջ
void pop_SeqStack(SeqStack stack)
{
	//��ջ����  ����βɾ��

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

//����ջ��
void * top_SeqStack(SeqStack stack)
{
	//���� ������������һ��Ԫ��

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

//����ջ��С
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
		return -1; //�����ָ�� ������ ջҲ�ǿ�
	}
	struct SStack * mystack = stack;

	if (mystack->m_Size == 0)
	{
		return 1; //1������ ջȷʵΪ��
	}

	return 0; //��Ϊ�� ��

}

//����
void destroy_SeqStack(SeqStack stack)
{
	if (stack == NULL)
	{
		return;
	}
	free(stack);
	stack = NULL;
}

