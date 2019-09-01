#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


void test01()
{
	char * p = NULL;
	//给p指向的内存区域拷贝内容
	//strcpy(p, "wangjunjie"); //err

	char * q = 0x1122;
	//给q指向的内存区域拷贝内容
	//strcpy(q, "wangjunjie");//err
}

int * doWork()
{
	int a = 10;
	int * p = &a;
	return p;
}

//野指针
void test02()
{
	// 1、声明未初始化指针
	//int * p;
	//printf("%d\n", *p);

	// 2、malloc后free的指针
	int * p = malloc(100);
	free(p);
	//*p = 100;//err  操作野指针
	p = NULL;//应该将野指针置空
	
    //空指针是否可以重复释放？
   //空指针可以重复释放 、野指针不可以重复释放
	free(p);

	//3、指针变量超出了作用域
	int *p2 = doWork();
	printf("p2 = %d\n", *p2);
	printf("p2 = %d\n", *p2);
}


int main()
{

	test02();
	system("pause"); 
	return EXIT_SUCCESS;
}


