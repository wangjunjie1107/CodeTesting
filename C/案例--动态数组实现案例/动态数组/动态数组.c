#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "dynamicArray.h"

//���ݽṹ
struct Person
{
	char name[64];
	int age;
};

//�ص����� ��ӡ����
void printPerson(void * data)
{
	struct Person * person = data;
	printf("������%s ���䣺%d\n", person->name, person->age);
}

//�ص����� �Ա�ɾ������
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



//���Զ�̬����
void test01()
{
	//��ʼ����̬����
	struct dynamicArray * arr = init_dynamicArray(5);

	struct Person p1 = { "����", 18 };
	struct Person p2 = { "�ŷ�", 19 };
	struct Person p3 = { "����", 20 };
	struct Person p4 = { "����", 19 };
	struct Person p5 = { "�����", 22 };
	struct Person p6 = { "����", 17 };

	printf("\n------------------------------------------------\n\n");
	printf("��������ǰ--- ����������%d\n", arr->m_Capacity);
	printf("��������ǰ--- �����С��%d\n", arr->m_size);
	

	//��������
	insert_dynamicArray(arr, &p1, 0);
	insert_dynamicArray(arr, &p2, 0);
	insert_dynamicArray(arr, &p3, 0);
	insert_dynamicArray(arr, &p4, 0);
	insert_dynamicArray(arr, &p5, 3);
	insert_dynamicArray(arr, &p6, 4);

	// ���� ���� �ŷ� ����� ���� ����
	printf("\n------------------------------------------------\n\n");
	printf("�������ݣ�\n\n");
	foreach_dynamicArray(arr, printPerson);
	printf("�������ݺ�--- ����������%d\n", arr->m_Capacity);
	printf("�������ݺ�--- �����С��%d\n", arr->m_size);


	//��λ��ɾ������
	printf("\n------------------------------------------------\n\n");
	printf("��λ��ɾ�����ƣ�\n\n");
	removeByPos_dynamicArray(arr, 5);
	foreach_dynamicArray(arr, printPerson);
	printf("��λ��ɾ�����ݺ�--- ����������%d\n", arr->m_Capacity);
	printf("��λ��ɾ�����ݺ�--- �����С��%d\n", arr->m_size);
	

	//��ֵɾ������
	printf("\n------------------------------------------------\n\n");
	printf("��ֵɾ�����ң�\n\n");
	struct Person temp = { "����", 17 };
	removeByValue_dynamicArray(arr, &temp,comparePerson);
	foreach_dynamicArray(arr, printPerson);
	printf("��ֵɾ�����ݺ�--- ����������%d\n", arr->m_Capacity);
	printf("��ֵɾ�����ݺ�--- �����С��%d\n", arr->m_size);

	//��������
	printf("\n------------------------------------------------\n\n");
	printf("��������\n\n");
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