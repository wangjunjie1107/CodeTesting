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

//�ص�������ӡ
void printPerson(void * data)
{
	struct Person * person = data;
	printf("������%s  ���䣺%d\n", person->name, person->age);
}

//�ص����� ɾ���Ա�
int ComparePerson(void * data1, void * data2)
{
	struct Person * p1 = data1;
	struct Person * p2 = data2;

	return (strcmp(p1->name, p2->name) == 0) && p1->age == p2->age;
}

//��������
void test01()
{
	//��ʼ������
	LinkList mylist = init_LinkList();

	//mylist->m_size = -1; �û����ʲ�����ʵ�����е�����

	struct Person p1 = { "����", 18 };
	struct Person p2 = { "�ŷ�", 19 };
	struct Person p3 = { "����", 20 };
	struct Person p4 = { "����", 19 };
	struct Person p5 = { "�����", 22 };
	struct Person p6 = { "����", 17 };

	insert_LinkList(mylist, 0, &p1);
	insert_LinkList(mylist, 0, &p2);
	insert_LinkList(mylist, 1, &p3);
	insert_LinkList(mylist, -1, &p4);
	insert_LinkList(mylist, 1, &p5);
	insert_LinkList(mylist, 100, &p6);

	//��������
	//�ŷ�  ����� ���� ���� ���� ����
	foreach_LinkList(mylist, printPerson);
	printf("������Ϊ��%d\n", size_LinkList(mylist));

	printf("-------------------------------\n");
	printf("ɾ������֮����������\n");
	removeByPos_LinkList(mylist, 4);
	foreach_LinkList(mylist, printPerson);
	printf("������Ϊ��%d\n", size_LinkList(mylist));

	struct Person p = { "����", 20 };
	printf("-------------------------------\n");
	printf("ɾ������֮����������\n");
	removeByValue_LinkList(mylist, &p, ComparePerson);
	foreach_LinkList(mylist, printPerson);
	printf("������Ϊ��%d\n", size_LinkList(mylist));


	//�������
	printf("-------------------------------\n");
	printf("�������֮����������\n");
	clear_LinkList(mylist);
	foreach_LinkList(mylist, printPerson);
	printf("������Ϊ��%d\n", size_LinkList(mylist));

	//��������
	destroy_LinkList(mylist);
	mylist = NULL;
	printf("-------------------------------\n");
	printf("�����Ѿ����٣�\n");
	printf("-------------------------------\n");


}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}