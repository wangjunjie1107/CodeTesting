#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//calloc
void test01()
{
	//malloc不会做清0的操作
	//int * p = malloc(sizeof(int)* 10);

	//参数1 开辟个数  参数2  每个占多少字节数
	//和malloc相同是在堆区开辟内存空间
	//和malloc不同的是 开辟空间后 置0的操作
	int * p = calloc(10, sizeof(int));

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", p[i]);
	}

	free(p);
	p = NULL;

}
//ralloc
void test02()
{
	
	int * p = malloc(sizeof(int) * 10);

	for (int i = 0; i < 10;i++)
	{
		p[i] = i + 1;
	}

	for (int i = 0;i < 10;i++)
	{
		printf("%d\n", p[i]);
	}

	printf("%d\n", p);

	//参数1  原空间的首地址   参数2  重新分配内存大小
	//如果重新分配的内存小于原来的内存，则首地址不变
	//如果大于，则重新找一块内存进行分配
	//如果开辟空间比原来大，后续空间不会清0的
	p = realloc(p, sizeof(int) * 10);

	printf("重新分配内存后：\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", p[i]);
	}

	printf("%d\n", p);
	free(p);
	p = NULL;

}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
