#define _CRT_SECURE_NO_WARNINGS  //解决vs不安全版本的警告问题
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 

//sizeof是不是一个函数？？？
//1、本质不是一个函数，是运算符  + - * /
void test01()
{
	int a;//对于统计变量时候，可以不加小括号
	printf("sizeof a = %d\n", sizeof a);

	printf("sizeof int = %d\n", sizeof(int));

}

//2、sizeof 返回值是什么？  unsigned int
//如果一个unsigned int和int去运算，结果会统一转换为 unsigned int
void test02()
{
	unsigned int a = 10;
	if (a - 20 > 0)
	{
		printf("大于0\n");
	}
	else
	{
		printf("小于0");
	}

	if (sizeof(int) - 5 > 0)
	{
		printf("大于0\n");
		printf("%u\n", sizeof(int) - 5);
	}
	else
	{
		printf("小于零\n");
	}
}

//3 sizeof其他用法
// 统计数组占用内存空间大小

//当数组名传入到 函数中 ，数组名被退化为一个指针，
//指针指向的数组中第一个元素的地址
void calculateArray(int arr[])
{
	printf(":::sizeof arr = %d\n", sizeof(arr)); // 4字节
}

void test03()
{
	int arr[] = { 1,2,3,4,56,48,4,46,16,5 };

	printf("sizeof arr = %d\n", sizeof(arr));

	calculateArray(arr);
}


int main()
{
	//test01();
	//test02();
	test03();

	system("pause"); 

	return EXIT_SUCCESS;
}


