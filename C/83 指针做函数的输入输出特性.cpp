#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h> 

// 1 �������ԣ����������з����ڴ棬����������ʹ���ڴ�

void func(char *p)
{
	strcpy(p,"hello world");
} 

void test01()
{
	//���䵽ջ��
	char buf[1024] = {0};
	func(buf);
	
	printf("%s\n",buf); 
}
void printString(char *str)
{
	printf("%s\n", str);
}
void test02()
{
	//���䵽����
	char * p = malloc(64);
	
	memset(p,0,64);
	
	strcpy(p,"hello world");
	
	printString(p);
}

//������ԣ��������������ڴ棬��������ʹ���ڴ�
void allocateSpace(char **pp)
{
	char * temp = malloc(sizeof(char)*64);
	memset(temp,0,64);
	strcpy(temp,"hello world");
	*pp = temp;
} 

void test03()
{
	char * p = NULL;
	allocateSpace(&p);
	
	printf("%s\n",p);
	
}
int main()
{
	test03();
	return 0;
}















