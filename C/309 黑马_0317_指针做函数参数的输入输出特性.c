#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//输入特性
//在主调函数分配内存 被调函数使用

void func(char * p)
{
	strcpy(p, "hello world");
}

void test01()
{
	//在栈上分配内存
	char buf[1024] = { 0 };
	func(buf);

	printf("%s\n", buf);
}

void printString(char * str)
{
	printf("%s\n", str);
}

void test02()
{
	//在堆区分配内存
	char *p = malloc(sizeof(char) * 64);
	memset(p, 0, 64);
	strcpy(p, "hello c");

	//在被调函数中，输出hello world
	printString(p);

	free(p);
	p = NULL;
}

//输出特性：在被调函数分配内存
void allocateSpace(char ** p) //定义一个二级指针，指向指针的地址
{
	char * temp = malloc(sizeof(char) * 64);
	memset(p, 0, 64);
	strcpy(p, "hello C");

	*p = temp;
}

void test03()
{
	char *p = NULL;
	allocateSpace(&p);

	printf("%s\n", p);
	
	free(p);
	p = NULL;
}
int main()
{
	//test01();
	//test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}
