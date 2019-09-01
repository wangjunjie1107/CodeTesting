#define _CRT_SECURE_NO_WARNINGS //C4996
#include<stdio.h> //标准输入输出
#include<string.h> //字符串处理函数
#include<stdlib.h>//标准库函数

//1 typedef的使用 可以简化struct关键字

/*
struct Person
{
	//姓名
	char name[64];
	//年龄
	int age;
};

typedef  struct Person MyPerson;
*/

typedef struct Person
{
	//姓名
	char name[64];
	//年龄
	int age;
}MyPerson;

void test01()
{
	struct Person p1 = { "wang", 18 };

	MyPerson p2 = { "li", 22 };
}

// 2、区分数据类型
void test02()
{
	//char *p1, p2; //一个char * , 一个char类型 

	typedef char *  PCHAR;

	PCHAR p1, p2;

	//char * p1, *p2;
}

//3 提高移植性
typedef int MY_INT; 
void test03()
{
	MY_INT a = 10;

	MY_INT b = 20;
}

//程序入口
int main()
{
	test01();
	test02();
	test03();
	
	system("pause"); //按任意键继续 阻塞

	return EXIT_SUCCESS; //返回正常退出值
}
