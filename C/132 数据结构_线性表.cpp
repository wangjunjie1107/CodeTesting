#include<stdio.h>

//顺序存储结构封装
 
#define MAXSIZE 20  //数组长度 
typedef int ElemType; 
typedef struct
{
	ElemType data[MAXSIZE];
	
	int length;  //线性表当前长度
	 
}SqList; 



