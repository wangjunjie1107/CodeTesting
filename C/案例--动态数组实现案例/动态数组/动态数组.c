#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "dynamicArray.h"

//数据结构
struct Person
{
	char name[64];
	int age;
};

//回调函数 打印数据
void printPerson(void * data)
{
	struct Person * person = data;
	printf("姓名：%s 年龄：%d\n", person->name, person->age);
}

//回调函数 对比删除数据
int comparePerson(void * data1, void *data2)
{
	struct Person * p1 = data1;
	struct Person * p2 = data2;

	//if (strcmp(p1->name, p2->name) == 0 && p1->age == p2->age)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return 0;
	//}

	return ((strcmp(p1->name, p2->name) == 0) && (p1->age == p2->age));
}



//测试动态数组
void test01()
{
	//初始化动态数组
	struct dynamicArray * arr = init_dynamicArray(5);

	struct Person p1 = { "赵云", 18 };
	struct Person p2 = { "张飞", 19 };
	struct Person p3 = { "关羽", 20 };
	struct Person p4 = { "刘备", 19 };
	struct Person p5 = { "诸葛亮", 22 };
	struct Person p6 = { "黄忠", 17 };

	printf("\n------------------------------------------------\n\n");
	printf("插入数据前--- 数组容量：%d\n", arr->m_Capacity);
	printf("插入数据前--- 数组大小：%d\n", arr->m_size);
	

	//插入数据
	insert_dynamicArray(arr, &p1, 0);
	insert_dynamicArray(arr, &p2, 0);
	insert_dynamicArray(arr, &p3, 0);
	insert_dynamicArray(arr, &p4, 0);
	insert_dynamicArray(arr, &p5, 3);
	insert_dynamicArray(arr, &p6, 4);

	// 刘备 关羽 张飞 诸葛亮 黄忠 赵云
	printf("\n------------------------------------------------\n\n");
	printf("插入数据：\n\n");
	foreach_dynamicArray(arr, printPerson);
	printf("插入数据后--- 数组容量：%d\n", arr->m_Capacity);
	printf("插入数据后--- 数组大小：%d\n", arr->m_size);


	//按位置删除赵云
	printf("\n------------------------------------------------\n\n");
	printf("按位置删除赵云：\n\n");
	removeByPos_dynamicArray(arr, 5);
	foreach_dynamicArray(arr, printPerson);
	printf("按位置删除数据后--- 数组容量：%d\n", arr->m_Capacity);
	printf("按位置删除数据后--- 数组大小：%d\n", arr->m_size);
	

	//按值删除黄忠
	printf("\n------------------------------------------------\n\n");
	printf("按值删除黄忠：\n\n");
	struct Person temp = { "黄忠", 17 };
	removeByValue_dynamicArray(arr, &temp,comparePerson);
	foreach_dynamicArray(arr, printPerson);
	printf("按值删除数据后--- 数组容量：%d\n", arr->m_Capacity);
	printf("按值删除数据后--- 数组大小：%d\n", arr->m_size);

	//销毁数组
	printf("\n------------------------------------------------\n\n");
	printf("销毁数组\n\n");
	destroy_dynamicArray(arr);
	foreach_dynamicArray(arr, printPerson);
	printf("\n------------------------------------------------\n");

}
int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}