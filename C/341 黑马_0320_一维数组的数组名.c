#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>


void test01()
{
	//一维数组的名 是不是指向第一个元素的指针？

	int arr[5] = { 1,2,3,4,5 };
	printf("sizeof arr = %d\n", sizeof(arr));

	//对数组名 取地址
	printf("%d\n", &arr);
	printf("%d\n", (&arr)+ 1);

	//第一种 对数组名称 sizeof
	//第二种 对数组名取地址 步长 整个数组长度
	//除了这两种情况以外，一维数组名 指向数组第一个元素的指针
	int * p = arr;

	//数组名 指针常量 int * const p;
	//arr = NULL; //指针的指向是不可以修改的
	arr[0] = 100;//指针指向的内存空间可以修改

	//数组访问的时候 下标可以为负数？ 可以
	p = p + 3;

	printf("%d\n", p[-2]); // 给人看 
	printf("%d\n", *(p - 2)); //给机器看

}

//int arr[] 等价于  int * arr
//参数写成数组的话 可读性比较好
void printArray(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);//给人看
		printf("%d\n", *(arr + i)); //给机器看

	}
}

void test02()
{
	int arr[5] = { 1, 2, 3, 4, 5 };

	int len = sizeof(arr) / sizeof(int);
	printArray(arr, len);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return  EXIT_SUCCESS;
}



