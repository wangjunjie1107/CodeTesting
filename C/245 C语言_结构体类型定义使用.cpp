#include<stdio.h>
#include<string.h>

//结构体类型定义
struct stu
{
	char name[50];
	int age;
};

//先定义类型，再定义变量（常用）

struct stu s1 = {"wang", 18};

//定义类型同时定义变量, 两种方式，一种有结构体类型名，一种无 
struct stu2
{
	char name[50];
	int age;
}s2 = {"li", 22};

struct
{
	char name[50];
	int age;
}s3 = {"zhao", 25};

int main()
{
	struct stu s3;
	
	//如果是普通变量，通过点运算符操作结构体成员
	strcpy(s3.name, "wang");
	s3.age = 18;
	
	printf("%s\n", s3.name);
	printf("%d\n", s3.age);
	
	//如果是指针变量，通过->操作结构体成员
	strcpy((&s3)->name, "test");
	(&s3)->age = 22;
	printf("%s\n", (&s3)->name);
	printf("%d\n", (&s3)->age);
	
	
	return 0; 
 } 















