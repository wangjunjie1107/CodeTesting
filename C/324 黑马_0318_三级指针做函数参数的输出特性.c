#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//分配内存
void allocate_memory(char ***p, int n)
{
	//二级指针数组，数组里面存的是10个char类型的指针
	//给二级指针分配内存
	char ** temp = (char **)malloc(sizeof(char *) * n);  
	
	if (temp == NULL)
	{
		printf("内存分配失败！\n");
		return;
	}
	
	int i; 
	for (i = 0; i < n; i++)
	{
		temp[i] = (char *)malloc(sizeof(char) * 30); //给一级指针分配内存

		temp[i] = "hello C"; 
	}

	//让 p 指向 temp 所指向的内存
	*p = temp;
}

//打印数组
void print_array(char **p, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%s\n", p[i]);//字符指针打印，只需要解引用到一级指针即可
	}
	printf("_________________________\n"); 
}

//释放内存 
void free_memory(char ***p, int n)
{
	if (p == NULL)
	{
		printf("p为空\n");
		return;
	}
	
	
	char ** temp = *p; //使用二级指针来释放，因为涉及到数组下标 

	//释放内层空间  并将一级指针置为空
	int i;
	for (i = 0; i < n; i++)
	{
		free(temp[i]);
		temp[i] = NULL;
	}

	free(temp); //释放二级指针
	temp = NULL;
}
int main()
{
	int n = 10;
	char ** p = NULL;
	
	//分配内存
	allocate_memory(&p, n);

	//打印内容
	print_array(p, n);

	//释放内存
	free_memory(&p, n);

	system("pause");
	return EXIT_SUCCESS;
}
