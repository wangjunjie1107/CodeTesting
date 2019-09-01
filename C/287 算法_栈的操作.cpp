#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 50

typedef struct
{
	char name[15];
	int age;
}DATA;

#include "287 算法_栈的操作.h"

int main()
{
	SeqStack *stack;
	DATA data, data1;
	
	//初始化栈 
	stack = SeqStackInit();	
	
	printf("入栈操作：\n");
	printf("输入姓名 年龄进入入栈操作：");
	scanf("%s%d", data.name, &data.age);
	
	//入栈 
	SeqStackPush(stack, data);
	
	printf("输入姓名 年龄再进入入栈操作：");
	scanf("%s%d", data.name, &data.age);
	SeqStackPush(stack, data);
	
	printf("\n出栈操作：\n按任意键进行出栈操作：");
	getchar();
	
	//出栈 
	data1 = SeqStackPop(stack);
	printf("出栈的数据是（%s%d)\n",data1.name, data1.age);
	printf("再按任意键进行出栈操作：");
	getchar();
	
	data1 = SeqStackPop(stack);
	printf("出栈的数据是（%s%d)\n",data1.name, data1.age);
	SeqStackFree(stack); //释放栈所占用的空间 
	getchar();
	
	return 0; 
} 
 
 
 
 
 
 
 
 
 
 
 
 
