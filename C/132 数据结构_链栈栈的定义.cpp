#include<stdio.h>

//定义栈的结构
Typedef struct stack_node
{
	Elemtype data;
	struct stack_node *next;
	
}LinkStack; 


//链栈的操作入栈
Status PUSH(LinkStack *top, Elemtype x)
{
	LinkStack * p;
	p = malloc(sizeof(LinkStack));//动态分配 
	
	p->data = x;	  //存入元素 
	top->next = top; //连接指针 
	top = p;
}

 
