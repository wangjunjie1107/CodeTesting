#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<float.h>

struct Person
{
	char name[64];
	int age;
	//int age = 18; //C语言下不可以给结构体赋初值
	//void fun() {}; //  //C语言下结构体中 不可以放函数
};


//第一种定义
typedef struct Person
{
	char name[64];
	int age;
}MyPerson;
void test01()
{
	MyPerson p1 = { "aaa",18 };
}

//第二种定义
struct Person2
{
	char name[64];
	int age;
}MyPerson2 = { "bbb", 65 }; //此处 myPerson2是结构体变量
void  test02()
{
	strcpy(MyPerson2.name, "aaa");
	MyPerson2.age = 18;
}

//第三种定义
struct
{
	char name[64];
	int age;
}MyPerson3 = { "22fwe",22 };// 匿名的 结构体变量
void test03()
{
	strcpy(MyPerson3.name, "adafe");
	MyPerson3.age = 12;
}


//结构体分配内存 堆 栈 
void test04()
{
	//在栈上
	struct Person p1 = { "zhangsan", 22 };

	//在堆区
	struct Person * p2 = malloc(sizeof(struct Person));
	strcpy(p2->name, "wfwa");
	p2->age = 17;

	free(p2);
}

//打印结构体变量数组
void printPerson(struct Person arr[], int len)
{
	for (int i = 0; i < len;i++)
	{
		printf("%s %d\n", arr[i].name, arr[i].age);
	}
}

//结构体变量数组
void test04()
{
	//在栈上分配
	struct Person personArray[] =
	{
		{ "aaa", 10 },
		{ "bbb", 20 },
		{ "ccc", 30 },
		{ "ddd", 40 },
	};
	int len = sizeof(personArray) / sizeof(struct Person);
	printPerson(personArray, len);




	//在堆区分配内存
	struct Person * pArray = malloc(sizeof(struct Person) * 4);
	for (int i = 0; i < 4; i++)
	{ 
		sprintf(pArray[i].name, "name_%d", i + 1);
		pArray[i].age = i + 18;
	}
	//打印结构体变量
	printPerson(pArray, 4);
	if (pArray != NULL)
	{
		free(pArray);
		pArray = NULL;
	}
}


int main()
{
	test04();


	system("pause");
	return EXIT_SUCCESS;
}
