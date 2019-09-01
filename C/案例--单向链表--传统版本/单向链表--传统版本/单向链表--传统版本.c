#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include "LinkList.h"

struct Person
{
	char name[64];
	int age;
};

//回调函数打印
void printPerson(void * data)
{
	struct Person * person = data;
	printf("姓名：%s  年龄：%d\n", person->name, person->age);
}

//回调函数 删除对比
int ComparePerson(void * data1, void * data2)
{
	struct Person * p1 = data1;
	struct Person * p2 = data2;

	return (strcmp(p1->name, p2->name) == 0) && p1->age == p2->age;
}

//测试链表
void test01()
{
	//初始化链表
	LinkList mylist = init_LinkList();

	//mylist->m_size = -1; 用户访问不到真实链表中的属性

	struct Person p1 = { "赵云", 18 };
	struct Person p2 = { "张飞", 19 };
	struct Person p3 = { "关羽", 20 };
	struct Person p4 = { "刘备", 19 };
	struct Person p5 = { "诸葛亮", 22 };
	struct Person p6 = { "黄忠", 17 };

	insert_LinkList(mylist, 0, &p1);
	insert_LinkList(mylist, 0, &p2);
	insert_LinkList(mylist, 1, &p3);
	insert_LinkList(mylist, -1, &p4);
	insert_LinkList(mylist, 1, &p5);
	insert_LinkList(mylist, 100, &p6);

	//遍历链表
	//张飞  诸葛亮 关羽 赵云 刘备 黄忠
	foreach_LinkList(mylist, printPerson);
	printf("链表长度为：%d\n", size_LinkList(mylist));

	printf("-------------------------------\n");
	printf("删除刘备之后遍历结果：\n");
	removeByPos_LinkList(mylist, 4);
	foreach_LinkList(mylist, printPerson);
	printf("链表长度为：%d\n", size_LinkList(mylist));

	struct Person p = { "关羽", 20 };
	printf("-------------------------------\n");
	printf("删除关羽之后遍历结果：\n");
	removeByValue_LinkList(mylist, &p, ComparePerson);
	foreach_LinkList(mylist, printPerson);
	printf("链表长度为：%d\n", size_LinkList(mylist));


	//清空链表
	printf("-------------------------------\n");
	printf("清空链表之后遍历结果：\n");
	clear_LinkList(mylist);
	foreach_LinkList(mylist, printPerson);
	printf("链表长度为：%d\n", size_LinkList(mylist));

	//销毁链表
	destroy_LinkList(mylist);
	mylist = NULL;
	printf("-------------------------------\n");
	printf("链表已经销毁！\n");
	printf("-------------------------------\n");


}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}