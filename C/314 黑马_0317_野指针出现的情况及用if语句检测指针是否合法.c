#define _CRT_SECURT_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char * test()
{
	char * p = 'c';

	return p;
}
int main()
{
	//1、未初始化导致野指针
	char *p; 
	
	//2、释放内存后要使指针指向NULL，避免野指针
	char * p1 = malloc(4);
	free(p1);
	p1 = NULL; //释放内存后要使指针指向NULL，避免野指针

	//测试指针是否合法
	if (!p1)
	{
		printf("p1是合法的\n");
	}
	else
		printf("p1不是合法的，没有置空！\n");


	//3、不要返回指向栈内的指针或引用，因为栈的内存在函数结束时会被释放。
	char * p2 = test();
	if (!p2)
	{
		printf("p2是合法的\n");
	}
	else
		printf("p2不是合法的，因为栈的内存在被调函数结束时已经被释放！\n");
	system("pause");
	return EXIT_SUCCESS; //在stdlib.h中定义

}
