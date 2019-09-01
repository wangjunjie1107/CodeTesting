#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "seqStack.h"


//1、扫描字符

int isLeft(char ch)
{
	return ch == '(';
}

int isRight(char ch)
{
	return ch == ')';
}

//打印错误信息
void printError(char * str,char * errorMsg, char * pos)
{
	printf("错误信息：%s\n", errorMsg);
	printf("%s\n", str);

	int num = pos - str;
	for (int i = 0;i < num; i++)
	{
		printf(" ");
	}
	printf("A\n");
}



void test01()
{
	char * str = "5+5*(6)+9/3*1-(1+3(";

	char * p = str;

	//初始化栈
	SeqStack myStack = init_SeqStack();

	while (*p != '\0')
	{
		//2、判断当前字符是否为左括号
		if (isLeft(*p))//左括号 进入if里
		{
			//入栈
			push_SeqStack(myStack, p);
		}

		//3、判断右括号
		if (isRight(*p))//右括号 进入if
		{
			if (size_SeqStack(myStack) > 0)
			{
				//如果栈非空 执行出栈
				pop_SeqStack(myStack);
			}
			else
			{
				//报错 右括号没有匹配到对应的左括号
				printError(str, "右括号没有匹配到对应的左括号", p);
				break;
			}
		}
		p++;
	}

	//都扫描完毕后 判断栈是否为空
	while (size_SeqStack(myStack) > 0)
	{
		printError(str, "左括号没有匹配到对应的右括号",top_SeqStack(myStack));

		//出栈
		pop_SeqStack(myStack);
	}

	//销毁栈
	destroy_SeqStack(myStack);
	myStack = NULL;
}


int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}