#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


//静态变量
//程序运行前分配内存
//生命周期在程序运行结束 死亡
//默认属于内部链接属性，在当前文件中使用
static int a = 10; //全局作用域


//全局变量  默认外部链接属性  前面默认加了extern关键字
int val = 12000;


void test01()
{
	static int b = 20; //局部作用域
}

//全局变量
// 默认在c语言下  全局变量前加了关键字 extern
// 属于外部链接属性
extern int b = 10;



int main()
{
	//g_a默认内部链接属性，在文件外g_a是访问不到的
	//g_a = 1000;


	// 告诉编译器 其他文件中有一个g_b ，
	//链接时候在其他文件中寻找
	extern int g_b; 
	printf("g_b = %d\n", g_b);


	system("pause"); 
	return EXIT_SUCCESS;
}







