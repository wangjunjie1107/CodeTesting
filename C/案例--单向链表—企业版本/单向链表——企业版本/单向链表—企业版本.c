#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include "LinkList.h"

typedef void * LinkList;

struct Person
{
	int *a;
	char name[64];
	int age;
};

//回调函数 打印
void printPerson(void * data)
{
	struct Person * person = data;
	printf("姓名：%s 年龄：%d\n", person->name, person->age);
}

//回调函数 比较
int compare_Person(void * data1, void * data2)
{
	struct Person * p1 = data1;
	struct Person * p2 = data2;

	return (p1->age == p2->age) && (strcmp(p1->name, p2->name) == 0);

}


void test01()
{
	//初始化链表
	LinkList mylist = init_LinkList();

	//创建数据  栈上开辟的数据 由OS释放
	struct Person p1 = { NULL,"aaa",11 };
	struct Person p2 = { NULL,"bbb",22 };
	struct Person p3 = { NULL,"ccc",33 };
	struct Person p4 = { NULL,"ddd",44 };
	struct Person p5 = { NULL,"eee",55 };
	struct Person p6 = { NULL,"fff",66 };


	//插入数据
	insert_LinkList(mylist, 0, &p1);
	insert_LinkList(mylist, 0, &p2);
	insert_LinkList(mylist, 1, &p3);
	insert_LinkList(mylist, -1, &p4);
	insert_LinkList(mylist, 0, &p5);
	insert_LinkList(mylist, 0, &p6);

	//遍历链表
	//fff eee bbb ccc aaa ddd
	foreach_LinkList(mylist, printPerson);
	printf("-------------------------------\n");
	int len1 = length_LinkList(mylist);
	printf("当前链表长度为：%d\n", len1);
	printf("-------------------------------\n");


	//按值删除
	struct Person temp = { NULL,"fff",66 };
	removeByValue_LinkList(mylist, &temp, compare_Person);
	printf("按值删除后，遍历结果为：\n");
	foreach_LinkList(mylist, printPerson);
	printf("-------------------------------\n");

	//求链表长度
	int len2 = length_LinkList(mylist);
	printf("当前链表长度为：%d\n", len2);
	printf("-------------------------------\n");

	//清空链表
	removeAllNode_LinkList(mylist);
	printf("当前链表长度为：%d\n", length_LinkList(mylist));
	printf("清空链表后，遍历结果为：\n");
	foreach_LinkList(mylist, printPerson);
	printf("-------------------------------\n");
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}