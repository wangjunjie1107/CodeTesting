#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//结构体设计
struct Teacher
{
	char * name;
	char ** student;
};

//内存分配
struct Teacher ** allocateSpace()
{
	struct Teacher ** myTeacher = malloc(sizeof(struct Teacher *) * 3);

	if (myTeacher == NULL)
	{
		printf("分配内存失败！\n");
		return NULL;
	}

	
	for (int i = 0;i < 3;i++)
	{
		//给老师分配内存空间
		myTeacher[i] = malloc(sizeof(struct Teacher));

		//给老师的姓名分配内存并赋值
		myTeacher[i]->name = malloc(sizeof(char) * 64);
		sprintf(myTeacher[i]->name, "wangjunjie_%d", i + 1);

		//给老师带的学生们的姓名分配内存并赋值
		myTeacher[i]->student = malloc(sizeof(char *) * 3);
		for (int j = 0;j < 3;j++)
		{
			myTeacher[i]->student[j] = malloc(sizeof(char) * 64);
			sprintf(myTeacher[i]->student[j], "student_%d", j + 1);
		}
	}

	return myTeacher;
}

//打印结构体
void printTeacher(struct Teacher ** myTeacher)
{
	if (myTeacher == NULL);

	for (int i = 0;i < 3;i++)
	{
		printf("老师：%s ：\n", myTeacher[i]->name);

		for (int j = 0;j < 3;j++)
		{
			printf("                     学生%d：%s\n", j + 1, myTeacher[i]->student[j]);
		}


		printf("-----------------------------------------------\n");
	}
}

//释放堆区空间
void freeSpace(struct Teacher ** myTeacher)
{
	if (myTeacher == NULL)
	{
		return;
	}

	for (int i = 0;i < 3;i++)
	{
		//释放老师的姓名
		if (myTeacher[i]->name != NULL)
		{
			printf("老师 %s 已被释放！\n", myTeacher[i]->name);
			free(myTeacher[i]->name);
			myTeacher[i]->name = NULL;
		}

		//释放老师所带的学生们
		for (int j = 0;j < 3;j++)
		{
			if (myTeacher[i]->student[j] != NULL)
			{
				printf("                 学生 %s 已被释放！\n", myTeacher[i]->student[j]);
				free(myTeacher[i]->student[j]);
				myTeacher[i]->student[j] = NULL;
			}
		}
		//释放结构体数组中的每个老师
		free(myTeacher[i]);
		myTeacher[i] = NULL;
		printf("--------------------------------------------\n");

	}

	//释放结构体数组
	free(myTeacher);
	myTeacher = NULL;
}


void test()
{
	 //分配内存空间
	struct Teacher ** myTeacher = allocateSpace();
	//printf("内存分配成功！\n");


	//赋值打印
	printTeacher(myTeacher);

	//释放堆区空间
	freeSpace(myTeacher);
	myTeacher = NULL;
	printf("堆区空间释放成功！\n");

}
int main()
{

	test();
	system("pause");
	return EXIT_SUCCESS;
}
