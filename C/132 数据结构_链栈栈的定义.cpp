#include<stdio.h>

//����ջ�Ľṹ
Typedef struct stack_node
{
	Elemtype data;
	struct stack_node *next;
	
}LinkStack; 


//��ջ�Ĳ�����ջ
Status PUSH(LinkStack *top, Elemtype x)
{
	LinkStack * p;
	p = malloc(sizeof(LinkStack));//��̬���� 
	
	p->data = x;	  //����Ԫ�� 
	top->next = top; //����ָ�� 
	top = p;
}

 
