#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//��������
//���������������ڴ� ��������ʹ��

void func(char * p)
{
	strcpy(p, "hello world");
}

void test01()
{
	//��ջ�Ϸ����ڴ�
	char buf[1024] = { 0 };
	func(buf);

	printf("%s\n", buf);
}

void printString(char * str)
{
	printf("%s\n", str);
}

void test02()
{
	//�ڶ��������ڴ�
	char *p = malloc(sizeof(char) * 64);
	memset(p, 0, 64);
	strcpy(p, "hello c");

	//�ڱ��������У����hello world
	printString(p);

	free(p);
	p = NULL;
}

//������ԣ��ڱ������������ڴ�
void allocateSpace(char ** p) //����һ������ָ�룬ָ��ָ��ĵ�ַ
{
	char * temp = malloc(sizeof(char) * 64);
	memset(p, 0, 64);
	strcpy(p, "hello C");

	*p = temp;
}

void test03()
{
	char *p = NULL;
	allocateSpace(&p);

	printf("%s\n", p);
	
	free(p);
	p = NULL;
}
int main()
{
	//test01();
	//test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}
