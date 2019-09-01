#define _CRT_SECURT_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
	void * *calloc( (size_t nmemb, , size_t size );
	功能：
	在内存动态存储区中分配 nmemb 块长度为 size 字节的连续区域。calloc 自动将分配的内存
	置 0。
	参数：
	nmemb：所需内存单元数量
	size：每个内存单元的大小（单位：字节）
	返回值：
	成功：分配空间的起始地址
	失败：NULL
*/

/*
#include <stdlib.h>
void * *realloc( (void * *ptr, , size_t size );
功能：
重新分配用 malloc 或者 calloc 函数在堆中分配内存空间的大小。
realloc 不会自动清理增加的内存，需要手动清理，如果指定的地址后面有连续的空间，那
么就会在已有地址基础上增加内存，如果指定的地址后面没有空间，那么 realloc 会重新
分配新的连续内存，把旧内存的值拷贝到新内存，同时释放旧内存。
参数：
ptr：为之前用 malloc 或者 calloc 分配的内存地址，如果此参数等于 NULL，那么和 realloc
与 malloc 功能一致
size：为重新分配内存的大小, , 单位：字节
返回值：
成功：新分配的堆内存地址
失败：NULL
*/

void test01()
{
	//10个int大小的内存，内存单元是连续的
	int *p1 = calloc(10, sizeof(int));

	//内存分配失败
	if (p1 == NULL)
		return;

	//赋值操作
	for (int i = 0; i < 10; i++)
	{
		p1[i] = i + 1;
	}

	//打印操作
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", p1[i]);
	}

	printf("\n");
	free(p1);
}

void test02()
{
	int * p1 = calloc(10, sizeof(int));

	if (p1 == NULL)
	{
		return;
	}

	for (int i = 0; i < 10; i++)
	{
		p1[i] = i + 1;
	}

	int * p2 = realloc(p1, 15 * sizeof(int));
	if (p2 == NULL)
	{
		return;
	}

	printf("%d\n", p1);
	printf("%d\n", p2);

	//打印
	for (int i = 0; i < 15; i++)
	{
		printf("%d", p2[i]);
	}
	printf("\n");

	//重新赋值
	for (int i = 0; i < 15; i++)
	{
		p2[i] = i + 1;
	}
	
	再次打印
	for (int i = 0; i < 15; i++)
	{
		printf("%s\n", p2[i]);
	}
	printf("\n");

	free(p2);


}
int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;

}
