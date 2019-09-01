#include<stdio.h>
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status

//顺序存储结构封装
 
#define MAXSIZE 20  //数组长度 
typedef int ElemType; 
typedef struct
{
	ElemType data[MAXSIZE];
	
	int length;  //线性表当前长度
	 
}SqList; 

//初始条件：顺序线性表L已存在， 1 <= i <= ListLength(L)
//操作结果：删除L的第i个数据元素，并用e返回其值， L的长度-1

Status ListDelete(SqList *L, int i, ElemType *e)
{
	int k;
	
	if( L->length == 0 )  //检验是否表空 
	{
		return ERROR;
	}
	
	if(i < 1 || i > L->length)  //检验插入位置是否正确 
	{
		return ERROR;
	}
	
	*e = L->data[i-1];  //返回要删除的元素 
	
	if( i < L->length)   // 将后面的元素向前移动一位 
	{
		for( k = i; k < L->length; k++)
		{
			L->data[k-1] = L->data[k];
		}
	}
	
	L->length--;  //表长减一  
	
	return OK;
}
 
 
