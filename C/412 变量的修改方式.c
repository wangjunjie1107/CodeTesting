#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


//变量修改方式
void test01()
{
	//1、直接修改
	int a = 10;
	a = 20;

	//2、间接修改
	int * p = &a;
	*p = 200;
	printf("a = %d\n", a);
}

//自定义数据类型练习
struct Person
{
	char  a;      // 0-3
	int   b;      // 4-7
	char  c;    // 8-11
	int   d;    // 12-15    共16个字节
};
void test02()
{
	struct Person p1 = { 'a', 10, 'b', 20 };

	//直接修改
	p1.d = 100;

	//间接修改
	char * p = &p1;
	printf("%d\n", *(int *)(p + 12));

	printf("%d\n", *(int *)((int *)p + 3));

}
int main()
{

	test01();
	test02();

	system("pause"); 

	return EXIT_SUCCESS;
}


