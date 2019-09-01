#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>

//1、先定义出数组的类型，再通过类型定义出数组指针
void test01()
{
	int arr[5] = { 1,2,3,4,5 };

	//定义数组的类型
	typedef int(ARRAY_TYPE)[5]; //ARRAY_TYPE是一个 有5个int元素的数组的 类型 
	
	//定义数组指针
	ARRAY_TYPE * arrP = &arr; //指向数组arr的指针arrP，每次加1跳一个数组元素的大小
	// *arrP ==== arr

	for (int i = 0; i < 5;i++)
	{
		printf("%d\n", (*arrP)[i]);
	}

}

//2、先定义数组指针的类型，通过类型创建数组指针变量
void test02()
{
	int arr[5] = { 1,2,3,4,5 };

	typedef int(* ARRAY_TYPE)[5]; //定义数组指针的类型

	ARRAY_TYPE arrP = &arr;

	for (int i = 0; i < 5;i++)
	{
		printf("%d\n", (*arrP)[i]);
	}
}

//3、直接定义数组指针变量  指向数组的指针 一次跳跃一个元素值  传入数组名的地址  &arr 
void test03()
{
	int arr[5] = { 1, 2, 3, 4, 5 };

	// 语法： 数组元素类型 （* 数组指针变量名称）[元素个数]
	int(*p)[5] = &arr;

	// *p == arr
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", (*p)[i]);
	}
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return  EXIT_SUCCESS;
}



