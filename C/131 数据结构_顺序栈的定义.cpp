#include<stdio.h>

#define STACK_INIT_SIZE 100 //ջ�洢�ռ�ĳ�ʼ����
#define STACKINCREMENT 10 //ջ�洢�ռ�ķ�������

Tyepdef struct{
		
		SElemType *base; //�洢�ռ��ַ 
		SElemType *top;  //��ǰ����
		int stacksize;  //��ǰ����Ĵ洢����(Ԫ����)
		
	
}SqStack;

// ջ�յ�������top = base
// ջ����������top - base >= stacksize

//��ʼ��һ��ջ--����ջ

Status InitStack(SqStack &S)
{
	//����һ����ջ
	S.base = (SElemType *)malloc(STACK_INIT_SIZE * sizeof(SElemType));
	
	if(!S.base)
		exit(OVERFLOW);
		
	S.top = S.base; //ջ��ָ�� = ջ��ָ��
	 
	S.stacksize = STACK_INIT_SIZE; 
	
	return OK; 
 } //InitStack
 
 
//��ջ��������Ԫ�أ�
Status Push(SqStack &S, SElemType e)
{
	//Ԫ��e���뵽ջ�У���Ϊ�µ�ջ��
	
	if(S.top - S.base >= S.stacksize)
		{
			newbase = (SElemType *)realloc(S.base,(S.stacksize + STACKINCREMENT) * sizeof(SElemType));
			
		 
			if(!newbase)
				exit(OVERFLOW);
			else
				S.base = newbase;
			S.top = S.base + S.stacksize;
			S.stacksize += STACKINCREMENT;
		}
	*S.top++=e;
	
	return OK;	
 }//Push
 
 
//��ջ��ɾ��ջ��Ԫ�أ�
Status Pop(SqStack &S, SElemType &e)
{
	//��ջ����ȡ���ݷ���e�ڣ� ջ����һԪ������λ�ó�Ϊ�µ�ջ��
	if(S.top == S.base)
		return ERROR;//ջ��
		
	e = *--S.top;//ջ��ָ���� 
	
	return OK; 
}//Pop 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
