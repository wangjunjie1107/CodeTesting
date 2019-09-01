#include<stdio.h>

#define STACK_INIT_SIZE 100 //栈存储空间的初始分配
#define STACKINCREMENT 10 //栈存储空间的分配增量

Tyepdef struct{
		
		SElemType *base; //存储空间基址 
		SElemType *top;  //当前长度
		int stacksize;  //当前分配的存储容量(元素数)
		
	
}SqStack;

// 栈空的条件：top = base
// 栈满的条件：top - base >= stacksize

//初始化一个栈--创建栈

Status InitStack(SqStack &S)
{
	//构造一个空栈
	S.base = (SElemType *)malloc(STACK_INIT_SIZE * sizeof(SElemType));
	
	if(!S.base)
		exit(OVERFLOW);
		
	S.top = S.base; //栈顶指针 = 栈底指针
	 
	S.stacksize = STACK_INIT_SIZE; 
	
	return OK; 
 } //InitStack
 
 
//进栈（插入新元素）
Status Push(SqStack &S, SElemType e)
{
	//元素e插入到栈中，成为新的栈顶
	
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
 
 
//出栈（删除栈顶元素）
Status Pop(SqStack &S, SElemType &e)
{
	//从栈顶读取数据放入e内， 栈中下一元素所在位置成为新的栈顶
	if(S.top == S.base)
		return ERROR;//栈空
		
	e = *--S.top;//栈顶指针下 
	
	return OK; 
}//Pop 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
