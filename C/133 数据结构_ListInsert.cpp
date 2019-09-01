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
//操作结果：在L中第i个位置之前插入新的数据元素e，L长度+1；

Status ListInsert(SqList *L, int i, ElemType e)
{
	int k;
	
	if(L->length == MAXSIZE)  //顺序线性表已经满了
	{
		return ERROR;
	}
	
	if(i < 1 || i > L->length + 1) //当插入位置不在范围内
	{
		return ERROR;
	}
	
	if( i <= L->length ) //若插入数据位置不在表尾
	{
		//将要插入位置后数据元素向后移动一位
		for( k = L->length - 1; k >= i-1; k--) 
		{
			L->data[k+1] = L.data[k]; 
		}
	}
	
	L->data[i-1] = e;  //将新元素插入 
	L->length++;
	
	return OK;
}






 
