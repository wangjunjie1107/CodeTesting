#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stddef.h> 
#include<stdlib.h>
#include<math.h>
#include<time.h> 

/*

	链表的结点类型实际上是结构体变量，此结构体包含数据域和指针域
		1)数据域用来存储数据；
		2)指针域用来建立与下一个结点的联系，当此节点为尾节点时，指针域的值为NULL。

*/

//静态链表：所有的结点都是在程序中定义的，不是临时开辟的，
//也不能用完后释放

typedef struct student
{
	//数据域
	char name[64];
	int age;

	//指针域  指向下一个同类型元素的首地址
	struct student *next;
}student;


void test()
{
	//初始化三个结构体变量
	student p1 = { "wangjunjie", 22 };
	student p2 = { "wangjunjie", 21 };
	student p3 = { "wangjunjie", 20 };

	student * p = &p1;
	p1.next = &p2;
	p2.next = &p3;
	p3.next = NULL; //尾节点

	while(p != NULL)
	{
		printf("id = %s, age = %d\n", p->name, p->age);

		p = p->next;
	}
}

int main()
{
	test();
	system("pause");
	return  EXIT_SUCCESS;
}


