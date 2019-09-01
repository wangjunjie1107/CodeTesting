#include "STD.c"

#include<stddef.h> //offsetof的头文件

//指针的步长
//1、指针变量 +1 后跳跃的字节数

void test01()
{
	char *p = NULL;
	
	printf("%d\n", p);
	printf("%d\n", p + 1);//跳4个字节 
	
	double * p2 = NULL;
	
	printf("%d\n", p2);
	printf("%d\n", p2 + 1);	 //跳8个字节 
} 


//2、在解引用的时候，取出的字节数
//char 指针 取一个字节
//int 指针 取四个字节...
void test02()
{
	char buf[1024] = { 0 };
	int a = 1000;
	memcpy(buf + 2, &a, sizeof(int));
	
	char *p = buf;
	
	printf("%d\n", *(int *)(p + 2));
} 

//指针步长练习
typedef struct Person
{
	char a;
	int b;
	char c;
	int d;
	char e[50];
	int f;
};

void test03()
{
	struct Person p = {'a', 20, 'b', 1, "asd", 1314};
	
	//p中的f属性的偏移量是多少？
	printf("p中的f的属性的偏移量为：%d\n", offsetof(struct Person, f));
	
	printf("f的值为：%d\n", *(int *)((char *)&p + offsetof(struct Person, f)));
} 

int main()
{
	//test02();
	test03();
	return 0;
}


