#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h> 

// 1 输入特性：主调函数中分配内存，被调函数中使用内存

void func(char *p)
{
	strcpy(p,"hello world");
} 

void test01()
{
	//分配到栈上
	char buf[1024] = {0};
	func(buf);
	
	printf("%s\n",buf); 
}
void printString(char *str)
{
	printf("%s\n", str);
}
void test02()
{
	//分配到堆区
	char * p = malloc(64);
	
	memset(p,0,64);
	
	strcpy(p,"hello world");
	
	printString(p);
}

//输出特性：被调函数分配内存，主调函数使用内存
void allocateSpace(char **pp)
{
	char * temp = malloc(sizeof(char)*64);
	memset(temp,0,64);
	strcpy(temp,"hello world");
	*pp = temp;
} 

void test03()
{
	char * p = NULL;
	allocateSpace(&p);
	
	printf("%s\n",p);
	
}
int main()
{
	test03();
	return 0;
}















