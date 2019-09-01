#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//sizeof是不是一个函数？？？
//1、本质不是一个函数，是运算符 + - * /
void test01()
{
	printf("sizeof int = %d\n", sizeof(int));
	
	//对于统计变量的时候，可以不加小括号
	double d = 3.14;
	printf("sizeof d = %d\n", sizeof d); 
}

//2、sizeof 返回值是什么？？ unsigned int 
void test02()
{
	unsigned int a = 10;
	
	//测试
	if(a - 20 > 0)
	{
		//如果一个unsigned int 和int 去运算，结果会统一转换为unsigned int 
		printf("大于0\n"); 
	}
	else
	{
		printf("小于0\n");
	}
	 
	if(sizeof(int) - 5 > 0)
	{
		//如果一个unsigned int 和int 去运算，结果会统一转换为unsigned int 
		printf("大于0\n");
		printf("%u\n",sizeof(int) - 5); 
	}
	else
	{
		printf("小于0\n");
	}
}

//3 sizeof其他用法
// 统计数组占用内存空间大小
void calculateArray(int arr[])  //当数组名传入到函数中，数组名会被退化为指针，指针指向数组中第一个元素的地址 
{
	printf("::::sizeof arr = %d\n", sizeof(arr)); 
}

void test03()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	
	calculateArray(arr);
} 
int main()
{
	//test01();
	//test02();
	test03();
	return 0;
}
