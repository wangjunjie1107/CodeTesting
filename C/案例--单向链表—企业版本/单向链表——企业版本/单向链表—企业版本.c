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

//�ص����� ��ӡ
void printPerson(void * data)
{
	struct Person * person = data;
	printf("������%s ���䣺%d\n", person->name, person->age);
}

//�ص����� �Ƚ�
int compare_Person(void * data1, void * data2)
{
	struct Person * p1 = data1;
	struct Person * p2 = data2;

	return (p1->age == p2->age) && (strcmp(p1->name, p2->name) == 0);

}


void test01()
{
	//��ʼ������
	LinkList mylist = init_LinkList();

	//��������  ջ�Ͽ��ٵ����� ��OS�ͷ�
	struct Person p1 = { NULL,"aaa",11 };
	struct Person p2 = { NULL,"bbb",22 };
	struct Person p3 = { NULL,"ccc",33 };
	struct Person p4 = { NULL,"ddd",44 };
	struct Person p5 = { NULL,"eee",55 };
	struct Person p6 = { NULL,"fff",66 };


	//��������
	insert_LinkList(mylist, 0, &p1);
	insert_LinkList(mylist, 0, &p2);
	insert_LinkList(mylist, 1, &p3);
	insert_LinkList(mylist, -1, &p4);
	insert_LinkList(mylist, 0, &p5);
	insert_LinkList(mylist, 0, &p6);

	//��������
	//fff eee bbb ccc aaa ddd
	foreach_LinkList(mylist, printPerson);
	printf("-------------------------------\n");
	int len1 = length_LinkList(mylist);
	printf("��ǰ������Ϊ��%d\n", len1);
	printf("-------------------------------\n");


	//��ֵɾ��
	struct Person temp = { NULL,"fff",66 };
	removeByValue_LinkList(mylist, &temp, compare_Person);
	printf("��ֵɾ���󣬱������Ϊ��\n");
	foreach_LinkList(mylist, printPerson);
	printf("-------------------------------\n");

	//��������
	int len2 = length_LinkList(mylist);
	printf("��ǰ������Ϊ��%d\n", len2);
	printf("-------------------------------\n");

	//�������
	removeAllNode_LinkList(mylist);
	printf("��ǰ������Ϊ��%d\n", length_LinkList(mylist));
	printf("�������󣬱������Ϊ��\n");
	foreach_LinkList(mylist, printPerson);
	printf("-------------------------------\n");
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}