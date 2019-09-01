#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

struct student
{
	char name[21];
	int age;
	int score;
	char addr[25];
}stu1 = {"李四",18,100,"西安"}; //结构体赋值方法1 

int main(void)
{
	//结构体赋值方法2 
	struct student stu2 = {"张三",18,100,"西安"}; 
	
	//结构体赋值方法3
	struct student stu3;
	
	strcpy(stu3.name, "王麻子");
	stu3.age = 19;
	stu3.score = 99;
	strcpy(stu3.addr, "西安");   //用字符串拷贝给数组赋值 


	//结构体赋值方法4
	struct student stu4; 
	
	printf("请输入学生信息\n"); 
	scanf("%s%d%d%s", stu4.name, &stu4.age, &stu4.score, stu4.addr);
	
	//打印 
	printf("姓名： %s\n", stu4.name);
	printf("年龄： %d\n", stu4.age);
	printf("成绩： %d\n", stu4.score);
	printf("地址： %s\n", stu4.addr);
	 
	return 0;
 } 
