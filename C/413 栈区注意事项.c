#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 

int * func()
{
	int a = 10;//栈上创建的变量
	return &a;
}

void test01()
{
	int * p = func();

	//结果早已不重要，因为上面的a早已被释放，
	//再去操作这块内存属于非法操作

	printf("%d\n", p);
	printf("%d\n", p);
}


char * getString()
{
	char str[] = "wangjunjie";
	return str;
}

void test02()
{
	char * p = NULL;

	p = getString(); //栈区的字符串早已经释放，结果出错 对指针的非法引用

	printf("p = %s\n", p);
}
int main()
{

	test01();
	test02();

	system("pause"); 

	return EXIT_SUCCESS;
}


