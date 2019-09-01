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
	int score[3];  //3门课的成绩 
	char addr[25];
}; 
int main()
{
	//定义结构体数组 
	struct student stu[3] =
	{
		{"zhangsan",21, 99,99,99, "xian"},
		{"lisi",21, 100,100,100, "xian"},
		{"wangmazi",21, 98,89,79, "xian"}
	};
	
	//打印结构体数组 
	for(int i=0; i<3; i++)
	{
		printf("姓名： %s\n", stu[i].name);
		printf("年龄： %d\n", stu[i].age);
		printf("成绩1： %d\n", stu[i].score[0]);
		printf("成绩2： %d\n", stu[i].score[1]);
		printf("成绩3： %d\n", stu[i].score[2]);
		printf("地址： %s\n", stu[i].addr);
		printf("\n");
	}
	

	 
	return 0;
 } 
