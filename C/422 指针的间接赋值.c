#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 

//间接赋值的三大条件
//1 、两个变量   （普通变量、指针变量   或者  实参 + 形参）
//2 、建立关系
//3 、 通过*操作内存


void test01()
{
	int a = 10;
	int * p = NULL;

	p = &a;
	*p = 10000;

	printf("a = %d\n", a);
}

void changeValue(int * p)
{
	*p = 1000;
}

void test02()
{
	int a = 10;
	int * p = &a;

	changeValue(p); //将a的地址传入

	printf("a = %d\n", a);
	printf("&a = %d\n", &a);
	printf("p = %d\n", p);

}

int main()
{
	test01();
	test02();

	system("pause"); 
	return EXIT_SUCCESS;
}


