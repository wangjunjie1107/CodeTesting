#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>

//结构体嵌套二级指针的练习
//结构体设计
struct Teacher
{
	//老师姓名
	char * name;
	//老师带的学生姓名 数组  二级指针
	char ** student;
};

//分配内存空间
void allocateSpace(struct Teacher ** teacherArray)
{
	if (teacherArray == NULL)
	{
		return;
	}

	//堆区分配内存
	struct Teacher ** temp = malloc(sizeof(struct Teacher *) * 3);

	//数据赋值
	for (int i = 0; i < 3;i++)
	{
		//给老师分配内存
		temp[i] = malloc(sizeof(struct Teacher));

		//给老师的姓名 分配内存
		temp[i]->name = malloc(sizeof(char) * 64);

		//给老师姓名赋值
		sprintf(temp[i]->name, "Teacher_%d", i + 1);

		//给老师带领的学生数组分配内存
		temp[i]->student = malloc(sizeof(char *) * 4);
		//给学生姓名赋值 并分配内存空间
		for (int j = 0; j < 4;j++)
		{
			temp[i]->student[j] = malloc(sizeof(char) * 64);
			sprintf(temp[i]->student[j], "%s_student_%d",temp[i]->name,j + 1);
		}
	}
	//建立关系
	teacherArray = temp;
}

//打印操作
void printfTeacherArray(struct Teacher ** teacherArray)
{

	struct Teacher ** temp = teacherArray;

	for (int i = 0; i < 3;i++)
	{
		printf("老师姓名：%s\n", temp[i]->name);

		for (int j = 0; j < 4; j++)
		{
			printf("    %s\n", temp[i]->student[j]);
		}

		printf("\n");
	}
}

//释放堆区数据
void freeSpace(struct Teacher ** teacherArray)
{
	struct Teacher ** temp = teacherArray;

	if (temp == NULL)
	{
		return;
	}

	for (int i = 0; i < 3; i++)
	{
		//释放老师姓名所在的内存空间
		free(temp[i]->name);
		temp[i]->name = NULL;

		//释放学生姓名空间
		for (int j = 0; j < 4;j++)
		{
			free(temp[i]->student[j]);
			temp[i]->student[j] = NULL;
		}
		//释放学生数组
		free(temp[i]->student);
		temp[i]->student = NULL;

		//释放结构体i
		free(temp[i]);
		temp[i] = NULL;

	}

	//释放老师数组
	free(temp);
	temp = NULL;

	if (teacherArray != NULL)
	{
		printf("形参指针还未释放！\n");
		free(teacherArray);
		teacherArray = NULL;
	}
}

void test()
{
	//老师数组创建
	struct Teacher ** teacherArray = NULL;

	//分配内存
	allocateSpace(teacherArray);

	//打印所有老师和学生信息
	printfTeacherArray(teacherArray);

	//释放堆区数据
	freeSpace(teacherArray);
	teacherArray = NULL;
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}
