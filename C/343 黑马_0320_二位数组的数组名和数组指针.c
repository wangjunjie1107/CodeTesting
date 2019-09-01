#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>

void test01()
{
	//第一种定义方式 可读性强
	int arr[3][3] = 
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 }
	};

	//第二种定义方式
	//int arr2[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	//第三种定义方式
	//int arr3[][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	//数组指针  指向数组名所指向的内存
	int (*p)[3] = arr; //一般情况下，arr指向第一行数组

	//通过p指针 访问 元素 6
	printf("%d\n", *(*(p + 1) + 2));
	printf("%d\n", p[1][2]);
	printf("%d\n", *(*p + 5));

}

//二维数组做函数参数
void printArray(int pArr[3][3], int len1, int len2)   //可读性高
//void printArray(int pArr[][3], int len1, int len2)
//void printArray( int(*pArr)[3] , int len1, int len2 )												  //void printArray(int pArr[][3], int len1, int len2)
{
	for (int i = 0; i < len1; i++)
	{
		for (int j = 0; j < len2; j++)
		{
			printf("%d ", pArr[i][j]); //可读性高 
			//printf("%d ",  *(*(pArr + i) + j ));
		}
		printf("\n");
	}
}

void test02()
{
	int arr[3][3] =
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 }
	};

	printArray(arr, 3, 3);

	//sizeof
	printf("sizeof arr = %d\n", sizeof(arr));

	//取地址
	printf("%d\n", &arr);
	printf("%d\n", &arr + 1);

	//数组指针，指向的是二维数组的地址
	int(*p)[3][3] = &arr; //数组指针，指向的是二维数组的地址，相当于一个三级指针

	printf("%d\n", *(*((*p) + 1) + 2 ));
	printf("%d\n", *(**p + 5));
	printf("%d\n", (*p)[1][2]);
	printf("%d\n", ***p);



}
int main()
{
	//test01();
	test02();
	system("pause");
	return  EXIT_SUCCESS;
}



