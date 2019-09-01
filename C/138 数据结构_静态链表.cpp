#include<stdio.h>

#define MAXSIZE 1000

typedef struct
{
	ElemType data;  //����
	int cur;       //�α�  Cursor
	 
}Component, StaticLinkList[MAXSIZE];


//�Ծ�̬�����ʼ���൱�ڳ�ʼ������
Status InitList(StaticLinkList space)
{
	int i;
	
	for(i = 0; i < MAXSIZE - 1; i++)
	{
		space[i].cur = i + 1;
	}
	
	space[MAXSIZE - 1].cur = 0;
	
	return OK;
 } 
 
/*
	  ���Ƕ�����ĵ�һ�������һ��Ԫ�������⴦�����ǵ�data
	������ݡ�
	
	  ͨ����δʹ�õ�����Ԫ�س�Ϊ��������
	  
	  ����ĵ�һ��Ԫ�أ����±�Ϊ0���Ǹ�Ԫ�ص�cur�ʹ�ű�������
	�ĵ�һ�������±ꡣ 
	 
	  ��������һ��Ԫ�أ����±�ΪMAXSIZE-1��cur���ŵ�һ����
	��ֵ��Ԫ�ص��±꣬�൱�ڵ������е�ͷ�������á�
	
	  �ھ�̬�����У������������飬��������̬����Ľ�������
	�ͷŵ����⣬����������Ҫ�Լ�ʵ���������������ſ�����������
	��ɾ��������
	
	  Ϊ�˱�����������Щ����δ��ʹ�ã�����İ취�ǽ�����δ��ʹ�ù���
	���ѱ�ɾ�������α�����һ���������� 
*/ 
 

//��̬����Ĳ������

//�����ǻ�ÿ��з������±�
int Malloc_SLL(StaticLinkList space)
{
	int i = space[0].cur;
	
	if( space[0].cur )
		space[0].cur = space[i].cur;
		//��������һ������������Ϊ���á�
	
	return i;	 //���ؿ��з������±ꡣ 
}

//�ھ�̬����L�е�i��Ԫ��֮ǰ�����µ�����Ԫ��e

Status ListInsert( StaticLinkList L, int i, ElemType e )
{
	int j, k, l;
	
	k = MAX_SIZE - 1; //��������һ��Ԫ��
	if( i < 1 || i > ListLength(L)+1 )
	{
		return ERROR;
	}
	
	j = Malloc_SLL(L);
	if(j)
	{
		L[j].data = e;
		for( l = 1; l <= i - 1; l++)
		{
			k = L[k].cur; 
		}
		L[j].cur = L[k].cur;
		L[k].cur = j;
		
		return OK;
	}
	
	return ERROR; 
 } 
 
//ɾ����L�еĵ�i������Ԫ��
Status ListDelete( StaticLinkList L, int i)
{
	int j, k;
	
	if( i < 1 || i > ListLength(L) )
	{
		return ERROR;
	}
	
	k = MAX_SIZE - 1;
	
	for( j = 1; j <= i - 1; j++)
	{
		k = L[k].cur;
	}
	
	j = L[k].cur;
	L[k].cur = L[j].cur;
	
	Free_SLL(L, j);
	
	return OK;
}

//���±�ΪK�Ŀ��нڵ���յ���������
void Free_SLL(StaticLinkList space, int k)
{
	space[k].cur = space[0].cur;
	space[0].cur = k;
} 
 
 
//����L������Ԫ�ظ���
int ListLength(StaticLinkList L) 
{
	int j = 0;
	int i = L[MAXSIZE - 1].cur;
	
	while(i)
	{
		i = L[i].cur;
		j++;
	}
	
	return j;
}
 
 
 
 
 
 
 
 
 
 
 
