#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//1、const 修饰的全局变量
//即使语法通过，但是在运行时候受到常量区的保护，运行失败 
const int a = 10; //放在常量区 

void test01()
{
	//a = 100; //直接修改，失败 
//	int * p = &a;
//	*p = 100;
	
//	printf("%d\n",a);
 } 
 
 void test02()
 {
 	const int b = 10;//分配到栈上 
 	//b = 100; //直接修改，失败
	
	//间接修改 成功
	//在C语言下，称为伪常量 
	int * p = &b;
	*p = 100;
	printf("%d\n",b); 
	
	//int a[b]; //伪常量是不可以初始化数组的 
  } 
 
 int main()
 {
 	test02();
 	
 	return 0;
 }
