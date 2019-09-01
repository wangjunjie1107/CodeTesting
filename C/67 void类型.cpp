#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//1、 无类型是不可以创建变量的 
void test01()
{
	// void a = 1; 编译器直接报错 ，因为不知道给a分配多少的内存空间 
} 

//2、可以限定函数的返回值 
test02()
{
	return 10;
 } 

//3、限定函数的参数列表,  说明此函数无参数，若调用的时候有参数，就会报错 
int fun2(void)
{
	return 10;
} 
void test03()
{
	printf("%d\n", fun2());
}

// 4、 void* 万能指针
 void test04()
 {
 	void *p = NULL;
 	int *pint = NULL;
 	char *pchar = NULL;
 	
 	pint = pchar; 				//错误，不同类型的指针
 	pint = (int *)pchar;		//需要类型转换 
	pint = p; 	//正确， p 是万能指针，可以不需要强制转换就可以给等号左边赋值 
  } 
int main()
{
	test03();
	return 0;
}













