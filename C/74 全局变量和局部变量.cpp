#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//静态变量
//特点：只初始化一次，在编译阶段就分配内存，属于内部链接属性，只能在当前文件中使用。
 
static int a = 10;

void test01()
{
	//局部静态变量，作用域只能在当前test01中 
	static int b = 20;
	//a和b的生命周期是一样的 
}

//2 全局变量
//在C语言中，全局变量前都隐藏加了关键字
//extern  属于外部链接属性 
extern int g_a = 100;

void test02()
{
	//告诉编译器 g_b是外部链接属性变量
	//下面在使用这个变量时候不要报错 
	extern int g_b = 100;
	
	printf("g_b = %d\n", g_b); 
 } 
 
 
