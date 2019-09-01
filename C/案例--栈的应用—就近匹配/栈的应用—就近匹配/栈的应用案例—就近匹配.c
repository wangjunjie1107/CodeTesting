#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "seqStack.h"


//1��ɨ���ַ�

int isLeft(char ch)
{
	return ch == '(';
}

int isRight(char ch)
{
	return ch == ')';
}

//��ӡ������Ϣ
void printError(char * str,char * errorMsg, char * pos)
{
	printf("������Ϣ��%s\n", errorMsg);
	printf("%s\n", str);

	int num = pos - str;
	for (int i = 0;i < num; i++)
	{
		printf(" ");
	}
	printf("A\n");
}



void test01()
{
	char * str = "5+5*(6)+9/3*1-(1+3(";

	char * p = str;

	//��ʼ��ջ
	SeqStack myStack = init_SeqStack();

	while (*p != '\0')
	{
		//2���жϵ�ǰ�ַ��Ƿ�Ϊ������
		if (isLeft(*p))//������ ����if��
		{
			//��ջ
			push_SeqStack(myStack, p);
		}

		//3���ж�������
		if (isRight(*p))//������ ����if
		{
			if (size_SeqStack(myStack) > 0)
			{
				//���ջ�ǿ� ִ�г�ջ
				pop_SeqStack(myStack);
			}
			else
			{
				//���� ������û��ƥ�䵽��Ӧ��������
				printError(str, "������û��ƥ�䵽��Ӧ��������", p);
				break;
			}
		}
		p++;
	}

	//��ɨ����Ϻ� �ж�ջ�Ƿ�Ϊ��
	while (size_SeqStack(myStack) > 0)
	{
		printError(str, "������û��ƥ�䵽��Ӧ��������",top_SeqStack(myStack));

		//��ջ
		pop_SeqStack(myStack);
	}

	//����ջ
	destroy_SeqStack(myStack);
	myStack = NULL;
}


int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}