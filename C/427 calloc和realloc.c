#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


//calloc
void test01()
{
	//malloc不会做清0的操作
	//int * p = malloc(sizeof(int)* 10);


	//参数1 开辟个数  参数2  每个占多少字节数
	//和malloc相同是在堆区开辟内存空间
	//和malloc不同的是 开辟空间后 置0的操作
	int * p = calloc(10, sizeof(int));
	for (int i = 0;i < 10;i++)
	{
		printf("%d\n", p[i]);
	}

	free(p);
	p = NULL;
}

//realloc
void test02()
{
	int * p = malloc(sizeof(int) * 10);

	for (int i = 0;i < 10; i++)
	{
		p[i] = i + 100;
	}
	printf("p = %d\n", p);


	//参数1  原空间的首地址   参数2  重新分配内存大小

	//如果重新分配的内存较大，则会重新找一块大的内存
	//如果重新分配的内存小，则直接在原地址分配内存

	//如果开辟空间比原来大，后续空间不会清0的
	p = realloc(p, sizeof(int) * 200);

	printf("重新分配内存后：\n");
	for (int i = 0; i < 20; i++)
	{
		printf("%d\n", p[i]);
	}

	printf("重新分配内存后 p = %d\n", p);
}



int main()
{
	test01();
	test02();

	system("pause"); 
	return EXIT_SUCCESS;
}


