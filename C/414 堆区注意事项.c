#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


int * getSpace()
{
	int * p = malloc(sizeof(int) * 5);

	if (p == NULL)
	{
		return NULL;
	}

	for (int i = 0; i < 5; i++)
	{
		p[i] = 100 + i;
	}

	return p;
}

void test01()
{
	int * p = getSpace();

	for (int i = 0;i < 5;i++)
	{
		printf("%d  ", p[i]);
	}
	printf("\n");

	free(p);
	p = NULL;
}


//堆区注意事项
void allocateSpace(char * pp)
{
	char * temp = malloc(100);
	memset(temp, 0, 100);
	strcpy(temp, "wangjunjie");
	pp = temp;  // 值拷贝，对于外部来说并没有改变

	printf("pp = %s\n", pp); 
}

void test02()
{
	char * p = NULL;
	allocateSpace(p); //接收不成功 值拷贝 

	printf("p = %s\n", p);
}

void allocateSpace2(char ** pp)
{
	char * temp = malloc(100);
	memset(temp, 0, 100);
	strcpy(temp, "wangjunjie");
	
	//二级指针 存储 一级指针
	*pp = temp;  //接收成功
}

void test03()
{
	char * p = NULL;
	allocateSpace2(&p); // 参数为一级指针的地址，改变的是地址

	printf("p2 = %s\n", p);
}


int main()
{
	test01();
	test02();
	test03();

	system("pause"); 

	return EXIT_SUCCESS;
}


