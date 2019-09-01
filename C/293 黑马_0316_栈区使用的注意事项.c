#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int * func()
{
	int a = 10; //栈上创建的变量
	return &a; 
}

void test01()
{
	int *p = func();
	
	//结果早已不重要，因为上面的a早已被释放
	//再去操作这块内存属于非法操作 
	printf("%d\n", p);
	printf("%d\n", p);
} 

char * getString()
{
	char str[] = "hello world";
	return str;
}

void test02()
{
	char * p = NULL;
	//栈上的字符串在函数结束时已经被释放，所以不能再打印出原本的内容 
	p = getString();
	
	printf("p = %s\n", p); 
}

int main()
{
	//test01();
	//test02();
	return 0;
} 
 
 
 
 
 
 
 
 
 
 
