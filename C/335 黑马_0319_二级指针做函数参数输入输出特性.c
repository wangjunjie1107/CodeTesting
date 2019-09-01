#define _CRT_SECURT_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stddef.h> 
#include<stdlib.h>
#include<math.h>
#include<time.h> 

//二级指针的输入特性

//void printfArray(int ** pArray, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("第%d个元素的值为：%d\n", i + 1, *pArray[i]);
//	}
//}

//在堆区开辟内存
//void test01()
//{
//	int **pArray = malloc(sizeof(int*) * 5);
//
//	//在栈上开辟数据
//	int a1 = 100;
//	int a2 = 200;
//	int a3 = 300;
//	int a4 = 400;
//	int a5 = 500;
//
//	//堆区数组维护 栈上数据的地址，建立关系
//	pArray[0] = &a1;
//	pArray[1] = &a2;
//	pArray[2] = &a3;
//	pArray[3] = &a4;
//	pArray[4] = &a5;
//
//	//打印输出
//	//错误的形式 因为对二级指针使用sizeof结果还是4个字节
//	//而不是数组长度
//	//int len = sizeof(pArray) / sizeof(int *);
//	//printArray(pArray, len);
//
//	printArray(pArray, 5);
//
//	//释放堆区空间
//	if (pArray != NULL)
//	{
//		free(pArray);
//		pArray = NULL;
//	}
//}

//在栈上开辟内存
//void test02()
//{
//	int * pArray[5];
//
//	for (int i = 0; i < 5;i++)
//	{
//		pArray[i] = malloc(4); // 栈上每个数据 维护 堆区开辟的内存
//		*(pArray[i]) = i + 100;
//	}
//	//获取数组长度
//	int len = sizeof(pArray) / sizeof(int *);
//	printArray(pArray, len);
//
//	//堆区数据释放
//	for (int i = 0; i < 5; i++)
//	{
//		if (pArray[i] != NULL)
//		{
//			free(pArray[i]);
//			pArray[i] = NULL;
//		}
//	}
//}



//二级指针做函数参数的输出特性
void allocateSpace(int ** pp)
{
	int * pArray = malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; i++)
	{
		pArray[i] = 100 + i;
	}
	*pp = pArray;
}

void printArray2(int **arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", (*arr)[i]);
	}
}

void freeSpace(int ** p)
{
	if (*p != NULL)
	{
		free(*p);
		*p = NULL;
	}
}

void test03()
{
	int *p = NULL;

	//分配内存
	allocateSpace(&p);

	//打印数据
	printArray2(&p, 10);

	//释放堆区数据
	freeSpace(&p);

	if (p != NULL)
	{
		printf("野指针\n");
	}
	else
	{
		printf("空指针\n");
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


