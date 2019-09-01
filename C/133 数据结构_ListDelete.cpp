#include<stdio.h>
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status

//˳��洢�ṹ��װ
 
#define MAXSIZE 20  //���鳤�� 
typedef int ElemType; 
typedef struct
{
	ElemType data[MAXSIZE];
	
	int length;  //���Ա�ǰ����
	 
}SqList; 

//��ʼ������˳�����Ա�L�Ѵ��ڣ� 1 <= i <= ListLength(L)
//���������ɾ��L�ĵ�i������Ԫ�أ�����e������ֵ�� L�ĳ���-1

Status ListDelete(SqList *L, int i, ElemType *e)
{
	int k;
	
	if( L->length == 0 )  //�����Ƿ��� 
	{
		return ERROR;
	}
	
	if(i < 1 || i > L->length)  //�������λ���Ƿ���ȷ 
	{
		return ERROR;
	}
	
	*e = L->data[i-1];  //����Ҫɾ����Ԫ�� 
	
	if( i < L->length)   // �������Ԫ����ǰ�ƶ�һλ 
	{
		for( k = i; k < L->length; k++)
		{
			L->data[k-1] = L->data[k];
		}
	}
	
	L->length--;  //����һ  
	
	return OK;
}
 
 
