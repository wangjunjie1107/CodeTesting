#define _CRT_SECURE_NO_WARNINGS  //C4996
#include<stdio.h>   //标准输入输出
#include<stdlib.h>  //标准库函数
#include<string.h>  //字符串处理函数

//1 typedef使用 可以简化struct关键字

//struct Person
//{
//	char name[64];
//	int age;
//};
//
//typedef struct Person MyPerson;

typedef struct Person
{
	char name[64];
	int age;
}MyPerson;


void test01()
{
	struct Person p1 = { "zhangsan",18 };

	MyPerson p2 = { "lisi",22 };
}


//2、区分数据类型
void test02()
{
	typedef char* pChar;

	pChar p1, p2; //都是 char * 类型

	char * p1, p2; //只有 p1 是 char * 类型
}

//3、提高移植性
typedef int MY_INT;
void test03()
{
	MY_INT a = 10;

	MY_INT b = 20;
}

//程序入口
int main()
{
	system("pause"); //按任意键继续 阻塞作用

	return EXIT_SUCCESS; //返回正常退出值
}


