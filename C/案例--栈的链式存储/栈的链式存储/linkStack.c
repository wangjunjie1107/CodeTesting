#include "linkStack.h"


//������
typedef void * LinkStack;

//��ʼ��ջ
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

//��ջ
void push_LinkStack(LinkStack stack, void * data)
{
	//���� ͷ�巨
	if (stack == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}

	struct LStack * myStack = stack;

	//ȡ���û�ǰ4���ֽ�
	struct LinkNode * myNode = data;

	//�������֮��Ĺ�ϵ ���½ڵ���뵽ͷ���֮��ͷ���ָ���½ڵ�
	//����
	myNode->next = myStack->pHeader.next;
	myStack->pHeader.next = myNode;

	//����ջ�Ĵ�С
	myStack->m_Size++;
}

//��ջ
void pop_LinkStack(LinkStack stack)
{
	if (stack == NULL)
	{
		return;
	}

	struct LStack * myStack = stack;

	//���� �� ͷɾ
	if (myStack->m_Size == 0)
	{
		return;
	}

	//����ָ���һ�����ָ��
	struct LinkNode * pFirst = myStack->pHeader.next;

	//���½��ָ��  ���� �����һ��ָ��
	myStack->pHeader.next = pFirst->next;

	//����ջ��С
	myStack->m_Size--;
}

//����ջ��
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


//����ջ�Ĵ�С
int size_LinkStack(LinkStack stack)
{
	if (stack == NULL)
	{
		return -1;
	}

	struct LStack * myStack = stack;

	return myStack->m_Size;
}

//�ж�ջ�Ƿ�Ϊ��
int isEmpty_LinkStack(LinkStack stack)
{
	if (stack == NULL)
	{
		return -1;
	}

	struct LStack * myStack = stack;
	if (myStack->m_Size == 0)
	{
		return 1;//ջ�� ����1
	}

	return 0;//��Ϊ��
}

//����ջ
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

//��ջ���
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

	//�Ͽ����������
	myStack->pHeader.next = NULL;
	myStack->m_Size = 0;
}
