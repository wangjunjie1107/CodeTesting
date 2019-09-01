#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 

//二级指针的输入特性

void printArray(int ** pArray, int len)
{
	int i;
	for (i = 0;i < len;i++)
	{
		printf("第%d个元素的值为：%d\n", i + 1, *pArray[i]);
	}
}

//在堆区开辟内存
void test01()
{
	int **pArray = malloc(sizeof(int *) * 5);

	//在栈上开辟数据
	int a1 = 100;
	int a2 = 100;
	int a3 = 100;
	int a4 = 100;
	int a5 = 100;


	//堆区数组 存储 栈上数据的地址， 建立关系
	pArray[0] = &a1;
	pArray[1] = &a2;
	pArray[2] = &a3;
	pArray[3] = &a4;
	pArray[4] = &a5;

	printArray(pArray, 5);

	//释放堆区空间
	if (pArray != NULL)
	{
		free(pArray);
		pArray = NULL;
	}
}


//在栈上开辟内存
void test02()
{
	int * pArray[5];

	int i;
	for (i = 0;i < 5;i++)
	{
		pArray[i] = malloc(4); //栈上每个数据 维护堆区内存
		*(pArray[i]) = i + 100;
	}

	//获取数组长度
	int len = sizeof(pArray) / sizeof(int *);

	printArray(pArray, len);

	//堆区数据释放
	for (i = 0;i < 5;i++)
	{
		if (pArray[i] != NULL)
		{
			free(pArray[i]);
			pArray[i] = NULL;
		}
	}
}

//二级指针做函数参数的输出特性
void allocateSpace(int ** pp, int size)
{
	int * pArray = malloc(sizeof(int) * size);

	int i;
	for (i = 0;i < size;i++)
	{
		pArray[i] = 100 + i;
	}

	*pp = pArray;
}

void printArray2(int * arr, int len)
{
	int i;
	for (i = 0;i < len;i++)
	{
		printf("%d\n", arr[i]);
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
	int * p = NULL;

	allocateSpace(&p, 100);

	printArray2(p, 100);

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

	test01();
	test02();
	test03();
	system("pause"); 
	return EXIT_SUCCESS;
}


