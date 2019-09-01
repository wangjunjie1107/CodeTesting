#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//传入二级指针（也就是一级指针的地址，即所谓地址的地址），对一级指针进行分配内存，赋值操作
void AllocateSpace(char ** p)
{
	*p = (char *)malloc(100);
	strcpy(*p, "wangjunjie");
}

void FreeSpace(char ** p)
{
	if (p == NULL)
	{
		return;
	}

	if (*p != NULL)
	{
		free(*p);
		*p = NULL;
	}
}

void test()
{
	char *p = NULL;

	AllocateSpace(&p);//传入了一级指针的地址，也就是二级指针。

	printf("%s\n", p);
	FreeSpace(&p);

	if (p == NULL)
	{
		printf("p内存释放！\n");
	}
}
int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
