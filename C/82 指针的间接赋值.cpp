#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h> 

//1 一个普通变量和一个指针变量或者一个形参和一个实参 
//2 建立关系
//3 通过 * 进行赋值

void changeValue(int * p) 
{
	*p = 1000;
}

void test01()
{
	int a = 10;
	int * p = NULL;
	p = &a;
	* p = 100;  //修改a的值
	
	int a2 = 10;
	changeValue(&a2);
	printf("%d\n",a2);
	
 } 

int main()
{
	test01();
	
	return 0;
}




























