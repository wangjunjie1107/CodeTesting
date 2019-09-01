#include<stdio.h>

//顺序存储结构封装
 
#define MAXSIZE 20  //数组长度 
typedef int ElemType; 
typedef struct
{
	ElemType data[MAXSIZE];
	
	int length;  //线性表当前长度
	 
}SqList; 


//GetElem 函数 
 
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status

//Status 是函数的类型，其值是函数结果状态代码，如OK等
//初始条件：顺序线性表L已存在，1 <= i <= ListLength(l)
//操作结果：用 e 返回 L 中第 i个数据元素的值 
Status GetElem(SqList L, int i, Elemtype *e)
{
	if(L.length == 0 || i < 1 || i > L.length)
	{
		return ERROR;
	}
	
	*e = L.data[i-1];
	
	return OK;
}
