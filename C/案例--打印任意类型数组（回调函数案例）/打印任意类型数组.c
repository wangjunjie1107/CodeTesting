#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//最重要的函数
//参数1 传入数组首地址 参数2 数组中每个元素占用内存空间 参数3 数组长度
//void(*myPrint)(void *)  函数指针 指向传入的函数
void printAllArray(void * arr, int eleSize, int len, void(*myPrint)(void *))
{
	char * p = arr;//利用p指针接受数组首地址
	for (int i = 0;i < len;i++)
	{
		//获取每个元素首地址  首地址+每个数据类型的偏移
		char * pAddr = p + eleSize * i;

		//printf("%d\n",*(int)pAddr);
		myPrint(pAddr);
	}
}


//打印int类型的数组
void printInt(void * data)
{
	int * num = data;
	printf("%d\n", *num);
}
void test01()
{
	int arr[] = { 1,2,3,4,5,6 };
	int len = sizeof(arr) / sizeof(int);
	//函数中的参数 printInt  展示了函数可以使用户决定打印那种类型的数组 
	printAllArray(arr, sizeof(int), len, printInt);
}


//打印结构体数组
struct Person
{
	char name[64];
	int age;
};
void printPerson(void * data)
{
	struct Person * person = data;
	printf("姓名:%s  年龄: %d\n", person->name, person->age);
}
void test02()
{
	struct Person personArray[] =
	{
		{ "aaa", 18 },
		{ "bbb", 19 },
		{ "ccc", 20 },
		{ "ddd", 21 },
	};

	int len = sizeof(personArray) / sizeof(struct Person);
	//printPerson 显示了函数指针实现了可以由用户决定打印那种类型的数组
	printAllArray(personArray, sizeof(struct Person), len, printPerson);

}


//查找数组中是否有指定类型的元素，如果有返回1，如果没有返回0
//int(*comparePerson)(void *, void *) 函数指针 返回类型为int
int findArrayEle(void * array, int eleSize, int len, void  * data, int(*comparePerson)(void *, void *))
{
	char * p = array;
	
	for (int i = 0;i < len;i++)
	{
		//获取到每个元素首地址
		char * eleAddr = p + eleSize * i;

		//if(用户传入的数据 == 数组中遍历的元素）
		//if(data == eleAddr) 错误 不可以直接用地址做比较
		if (comparePerson(data, eleAddr))
		{
			return 1;
		}
	}
	return 0;
}
int comparePerson(void * data1, void *data2)
{
	struct Person * p1 = data1;
	struct Person * p2 = data2;

	//如果姓名相等 并且年龄相等 返回真
	if (strcmp(p1->name, p2->name) == 0 && p1->age == p2->age)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void test03()
{
	//查找数组中是否有指定类型的元素，如果有返回1，如果没有返回0
	struct Person personArray[] = 
	{
		{ "aaa", 18 },
		{ "bbb", 19 },
		{ "ccc", 20 },
		{ "ddd", 21 },
	};

	int len = sizeof(personArray) / sizeof(struct Person);

	struct Person source = { "ccc",20 };

	//comparePerson 的函数名 显示了可以由用户决定我去调用那些函数使用，这也是函数指针的方便之处
	int ret = findArrayEle(personArray, sizeof(struct Person), len, &source, comparePerson);
	
	if (ret)
	{
		printf("找到元素\n");
	}
	else
	{
		printf("未找到\n");
	}
}


int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}