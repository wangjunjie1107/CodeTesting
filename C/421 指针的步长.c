#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 

#include<stddef.h> // offsetof头文件  指针偏移量

//指针的步长
//1、指针变量 +1 后跳跃的字节数

void test01()
{
	char * p = NULL;

	printf("%d\n", p);
	printf("%d\n", p + 1);

	double * p2 = NULL;
	printf("%d\n", p2);
	printf("%d\n", p2 + 1);

}

//2、在解引用的时候，取出的字节数
void test02()
{
	char buf[1024] = { 0 };
	int a = 1000;
	memcpy(buf + 10, &a, sizeof(int));

	char * p = buf;

	printf("%d\n", *(int *)(p + 10));

}


//指针步长练习
struct Person
{
	char a; //0 ~ 3
	int b;  //4 ~ 7
	char buf[64]; // 8 ~ 71
	int d; // 72 ~ 75
};


void test03()
{
	struct Person p = { 'a', 10, "wangjunjie", 10000 };

	//p中的d属性的偏移量是多少？
	printf("d的偏移量为：%d\n", offsetof(struct Person, d));
	printf("d的值为：%d\n", *(int *)((char *)&p + offsetof(struct Person, d)));

}

int main()
{
	test01();
	test02();
	test03();
	system("pause"); 
	return EXIT_SUCCESS;
}


