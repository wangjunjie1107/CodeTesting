#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//const 修饰的常量
//全局const常量， 放在常量区中，受到常量区的保护 
const int a = 10;
 
void test01()
{
	//直接修改失败
	//a = 100;
	
	//间接修改 也失败 
	int * p = &a;
	*p = 100;
	
	printf("%d\n", a); 
}

//局部const修饰常量
void test02()
{
	const int b = 10; //数据存放在栈区，伪常量
	//直接修改失败
	//b = 100; 
	int *p = &b;
	*p = 100;
	printf("%d\n", b); //间接修改成功 
	
	//int arr[b]; //伪常量 不可以初始化数组 
} 

//字符串常量是可以共享的
void test03()
{
	char *p1 = "AAA";
	char *p2 = "AAA";
	char *p3 = "AAA";
	
	//打印地址 
	printf("%d\n", p1); 
	printf("%d\n", p2); 
	printf("%d\n", p3); 
	printf("%d\n", &"AAA"); 
} 

//字符串常量是否能够修改？  
void test04()
{
	char * p1 = "AAA";
	
	p1[0] = "B";
	
	printf("%s\n", p1); //修改失败 
 } 
int main()
{
	//test01();
	//test02();
	//test03();
	test04();
	return 0;
 } 
