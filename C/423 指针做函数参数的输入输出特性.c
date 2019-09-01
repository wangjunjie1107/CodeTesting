#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


//输入特性
//在主调函数分配内存  被调函数使用

void func(char * p)
{
	strcpy(p, "wangjunjie");
}

void test01()
{
	//在栈上分配内存
	char buffer[1024] = { 0 };
	func(buffer);

	printf("buffer = %s\n", buffer);
}


void printString(char * str)
{
	printf("%s\n", str);
}
void test02()
{
	//在堆区开辟内存
	char * str = malloc(sizeof(char) * 100);
	memset(str, 0, 100);
	strcpy(str, "wangjunjie");

	//在被调函数中使用
	printString(str);

	free(str);
	str = NULL;
}


//输出特性：在被调函数中分配内存 主调函数中使用
void allocateSpace(char ** p)
{
	char * temp = malloc(sizeof(char) * 1000);
	memset(temp, 0, 1000);
	strcpy(temp, "wangjunjie");

	//地址传递  在函数结束后仍然有效
	*p = temp; //temp指向的是 堆区的内存  *p也就指向的是堆区的内存
	printf("&p = %d\n", p); //保存的是一级指针的地址

}

void test03()
{
	char * p = NULL;
	allocateSpace(&p);

	printf("p = %s\n", p);
	printf("&p = %d\n", &p); //保存的是一级指针的地址 也就是p的地址

	free(p);
	p = NULL;
}

int main()
{
	test01();
	test02();
	test03();


	system("pause"); 
	return EXIT_SUCCESS;
}


