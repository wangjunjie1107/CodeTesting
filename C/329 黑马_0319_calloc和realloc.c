#define _CRT_SRCURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//calloc
void test01()
{
	//malloc不会做清0操作
	//int * p = malloc(sizeof(int) * 10);

	//参数1 开辟个数 参数2 每个块占多少字节数
	//和malloc相同是在堆区开辟内存空间
	//和malloc不同的是 开辟空间后 置0的操作
	int * p = calloc(10, sizeof(int));

	for (int i = 0; i < 10; i++)
		printf("%d\n", p[i]);

	free(p);
	p = NULL;
}

//relloc
void test02()
{
	//功能：重新分配内存 
	int * p = malloc(sizeof(int) * 10);

	for (int i = 0; i < 10; i++)
		p[i] = i + 1;
	
	for (int i = 0; i < 10; i++)
		printf("%d\n", p[i]);

	printf("%d\n", p);
	//参数1 原空间的首地址  参数2 重新分配内存大小
	//如果指定的地址后面有连续的空间，那么就会在已有地址础上增加内存
	//如果指定的地址后面没有空间，那么realloc会重新分配新的连续内存
	//把旧内存的值拷贝到新内存，同时释放旧内存。 
	
	//用p接收realloc的返回值   返回值为旧地址或者是新地址 
	p = realloc(p, sizeof(int) * 20);

	printf("重新分配内存后：\n");
	for (int i = 0; i < 10;i++)
		printf("%d\n", p[i]);

	printf("%d\n", p);

}



int main()
{
	test01();
	//test02();
	system("pause");
	return EXIT_SUCCESS;
}
