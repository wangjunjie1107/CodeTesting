#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


//const 修饰的常量
const int a = 10;
//全局const常量 放在常量区  受到常量区的保护

//修改全局const常量
void test01()
{
	//a = 100;      //直接修改失败

	//int *p = &a; 	//间接修改  失败
	//p = 100;

	//printf("%d\n",a);
}

//局部const修饰常量  伪常量 可以间接修改
void test02()
{
	const int b = 10;//数据存放在栈区，伪常量

	//b = 100; //直接修改失败

	int * p = &b;  //间接修改成功
	*p = 2000;
	printf("b = %d\n", b);

	//int arr[b]; //伪常量 不可以初始化数组
}


//字符串常量可以共享的
void test03()
{
	char * p1 = "wangjunjie";
	char * p2 = "wangjunjie";
	char * p3 = "wangjunjie";

	// 同一个字符串常量 存放 在一个地址内
	printf("%d\n", p1);
	printf("%d\n", p2);
	printf("%d\n", p3);
	printf("%d\n", &"wangjunjie");
}


//字符串常量是否能够修改？ 不可以修改
void test04()
{
	char * p1 = "wangjunjie";

	p1[0] = 'W';  // 常量不可以修改

	printf("%s\n", p1);
}


int main()
{
	//test01();
	//test02();
	//test03();
	test04();

	system("pause"); 
	return EXIT_SUCCESS;
}


