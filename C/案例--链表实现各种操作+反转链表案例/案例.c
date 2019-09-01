#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#include "linklist.c"
#include "linklist.h"

void test01()
{
	//初始化链表
	struct LinkNode* pHeader = init_LinkList();

	//遍历链表
	printf("\n遍历结果为：");
	foreach_LinkList(pHeader);
	
	
	//插入节点功能 在20之前插入结点1000 
//	insert_LinkList(pHeader, 20, 1000);
//	printf("插入结点后结果为：\n");
//	foreach_LinkList(pHeader);
	
	//删除节点功能
//	delete_LinkList(pHeader, 1000);
//	printf("删除结点后结果为：\n");
//	foreach_LinkList(pHeader);
	
	//清空链表
//	clear_LinkList(pHeader);
//	printf("清空链表后结果为：\n");
//	foreach_LinkList(pHeader);
	
	//销毁链表
//	destroy_LinkList(pHeader);
//	printf("销毁链表后结果为：\n");
//	foreach_LinkList(pHeader);
	
	////按位置删除结点
//	deleteSite_LinkList(pHeader, 4);
//	printf("删除位置4的结点后，结果为：\n");
//	foreach_LinkList(pHeader);
	
	//按位置查找结点  会打印结点的值 
	//researchSite_LinkList(pHeader, 5); 
	
	//获取链表的长度 
	int count = strlen_LinkList(pHeader); 
	printf("\n\n链表现在长度为：%d\n", count);
	
	//反转链表 将结果值反转打印， 并不实际将链表相反链接 
	printf("\n反转打印值的结果为：");
	reverseValue_LinkList(pHeader); 
	
	
	//反转链表  实际将链表相反链接  
	reverseLink_LinkList(pHeader);
	printf("\n\n反转链接后结果为：");
	foreach_LinkList(pHeader);
	printf("\n\n");
}
int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
