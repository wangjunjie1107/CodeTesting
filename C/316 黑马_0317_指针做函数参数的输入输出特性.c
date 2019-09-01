#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//输入特性  主调函数分配内存，被调函数操作内存
void input(char * p)
{
	strcpy(p, "wangjunjie");
}

//输出特性 被调函数分配内存，主调函数使用
void output(char ** q, int * len)
{
	char * a = (char *)malloc(100);
	if(a == NULL)
		return;
		
	strcpy(a, "wangjunjie");
	
	//间接赋值 
	*len = strlen(a);
	*q = a;
}

int main()

{
	char p[64];//栈区分配内存
	input(p);//输入特性  主调函数分配内存，被调函数操作内存
	printf("%s\n", p);

	
	//输出特性
	char *str = NULL;
	int  len = 0;
	
	output(&str, &len);
	
	printf("%s\n", str);
	printf("%d\n", len);
	
	system("pause");
	return EXIT_SUCCESS;
}
