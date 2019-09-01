#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct person
{
	int age; //数据域
	char name[50];

	struct person * next; //指针域
};

//静态链表
void test01()
{
	//定义结点并初始化
	struct person p1 = { 20,"wangjunjie",NULL };
	struct person p2 = { 21,"wangjunjie",NULL };
	struct person p3 = { 22,"wangjunjie",NULL };
	struct person p4 = { 23,"wangjunjie",NULL };
	struct person p5 = { 24,"wangjunjie",NULL };
	struct person p6 = { 25,"wangjunjie",NULL };

	//建立关系
	p1.next = &p2;
	p2.next = &p3;
	p3.next = &p4;
	p4.next = &p5;
	p5.next = &p6;
	p6.next = NULL;

	//遍历链表
	struct person * temp = &p1;
	for (int i = 0; i < 6; i++)
	{
		printf("姓名：%s  年龄：%d\n", temp->name, temp->age);
		temp = temp->next;
	}
}

//动态链表
void test02()
{
	//建立结点  分配内存
	struct person * p1 = malloc(sizeof(struct person));
	struct person * p2 = malloc(sizeof(struct person));
	struct person * p3 = malloc(sizeof(struct person));
	struct person * p4 = malloc(sizeof(struct person));
	struct person * p5 = malloc(sizeof(struct person));
	struct person * p6 = malloc(sizeof(struct person));
	struct person * p7 = malloc(sizeof(struct person));

	//节点初始化
	p1->age = 18;
	//结构体不能直接给字符数组赋值，因为它将是一个不可修改的左值 数组名
	strcpy(p1->name, "wangjunjie");//字符串拷贝
	sprintf(p1->name, "%s", "wangjunjiehahahha"); //格式化输入
	p1->next = p2;

	p2->age = 19;
	strcpy(p2->name, "wangjunjie");
	p2->next = p3;

	p3->age = 20;
	strcpy(p3->name, "wangjunjie");
	p3->next = p4;

	p4->age = 21;
	strcpy(p4->name, "wangjunjie");
	p4->next = p5;

	p5->age = 22;
	strcpy(p5->name, "wangjunjie");
	p5->next = p6;

	p6->age = 23;
	strcpy(p6->name, "wangjunjie");
	p6->next = p7;

	p7->age = 24;
	strcpy(p7->name, "wangjunjie");
	p7->next = NULL;

	//遍历动态链表
	struct person * temp = p1;
	for (int i = 0; i < 7; i++)
	{
		printf("姓名：%s 年龄：%d\n", temp->name, temp->age);
		temp = temp->next;
	}

	//释放堆空间
	free(p1);
	free(p2);
	free(p3);
	free(p4);
	free(p5);
	free(p6);
	free(p7);

}

int main()
{
	//test01();//静态链表
	test02();//动态链表
	system("pause");
	return EXIT_SUCCESS;
}
