#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int * getSpace()
{
	int * p = malloc(sizeof(int)* 5);
	
	//堆空间开辟失败 
	if(p == NULL)
	{
		return NULL;
	}
	
	int i;
	for(i = 0; i < 5; i++)
	{
		p[i] = 100 + i;
	}
	
	return p; 
} 

void test01()
{
	int * p = getSpace();
	
	int i;
	for(i = 0; i < 5; i++)
	{
		printf("%d\n", p[i]);
	}
	
	//再打印一遍 测试 
	for(i = 0; i < 5; i++)
	{
		printf("%d\n", p[i]);
	}
	
	
	//释放堆区数据
	free(p);
	p = NULL; //让 p 指向空， 防止野指针 
}

//堆区注意事项

void allocateSpace(char * pp) 
{
	char * temp = malloc(100);
	memset(temp, 0, 100); //清空堆区内存
	strcpy(temp, "hello world");
	
	pp = temp;
}

void test02()
{
	char * p = NULL;
	allocateSpace(p);
	
	printf("p = %s\n", p);
}

void allocateSpace2(char ** pp)
{
	char * temp = malloc(100);
	memset(temp, 0, 100);
	strcpy(temp, "hello world");
	
	*pp = temp;
}

void test03()
{
	char * p = NULL;
	allocateSpace2(&p);
	
	printf("p2 = %s\n", p);
}


int main()
{
	//test01();
	//test02();
	test03();
	return 0;
 } 
















