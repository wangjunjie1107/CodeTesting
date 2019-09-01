#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stddef.h> 
#include<stdlib.h>
#include<math.h>
#include<time.h> 

typedef struct Personal
{
	//数据域
	char name[20];
	int age;

	struct Personal * next;//指针域
}Personal;

void test()
{
	//动态分配三个结点
	//利用结构体类型指针 动态分配内存
	Personal * s1 = (Personal *)malloc(sizeof(Personal));
	s1->age = 22;
	strcpy(s1->name, "wangjunjie");

	Personal * s2 = (Personal *)malloc(sizeof(Personal));
	s2->age = 24;
	strcpy(s2->name, "李思佳");

	Personal * s3 = (Personal *)malloc(sizeof(Personal));
	s3->age = 25;
	strcpy(s3->name, "hahaha");

	//建立结点关系

	s1->next = s2;
	s2->next = s3;
	s3->next = NULL;
	Personal * p = s1;

	//遍历结点
	while (p != NULL)
	{
		printf("id = %s, age = %d\n", p->name, p->age);
		p = p->next;
		//p++; //错误，因为内存不是连续分配的，
			//p++是移动了一个结构体的位置，但是并不是下一个结点
	}

	//释放结点空间
	p = s1; //刚才遍历以后 p已经指向最后一个节点了，所以再次让p指向s1
	Personal * temp = NULL; //找一个临时指针帮忙释放空间

	while (p != NULL)
	{
		temp = p;
		p = p->next;
		
		free(temp);
		temp = NULL;
	}


}
int main()
{
	test();
	system("pause");
	return  EXIT_SUCCESS;
}


