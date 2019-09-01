#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//�ṹ��ʵ��
struct person
{
	//������
	int age;
	char *name;

	//ָ����
	struct person * nodeNext;
};

//��̬����
void test01()
{
	//������ ���Ҹ�ֵ
	struct person p1 = { 21, "wangjunjie1",NULL };
	struct person p2 = { 22, "wangjunjie2",NULL };
	struct person p3 = { 23, "wangjunjie3",NULL };
	struct person p4 = { 24, "wangjunjie4",NULL };

	//������ϵ
	p1.nodeNext = &p2;
	p2.nodeNext = &p3;
	p3.nodeNext = &p4;
	

	//��������
	struct person * temp = &p1;
	while (temp != NULL)
	{
		printf("������%s, ���䣺%d\n", temp->name, temp->age);
		temp = temp->nodeNext;
	}
}

//��̬����
void test02()
{
	//������� ����ռ�
	struct person * p1 = malloc(sizeof(struct person));
	struct person * p2 = malloc(sizeof(struct person));
	struct person * p3 = malloc(sizeof(struct person));
	struct person * p4 = malloc(sizeof(struct person));

	p1->name = malloc(sizeof(char) * 64);
	p2->name = malloc(sizeof(char) * 64);
	p3->name = malloc(sizeof(char) * 64);
	p4->name = malloc(sizeof(char) * 64);

	//��㸳ֵ ������ϵ
	p1->age = 22;
	strcpy(p1->name, "wangjunjie22");
	p1->nodeNext = p2;

	p2->age = 23;
	strcpy(p2->name, "wangjunjie23");
	p2->nodeNext = p3;

	p3->age = 24;
	strcpy(p3->name, "wangjunjie24");
	p3->nodeNext = p4;

	p4->age = 25;
	strcpy(p4->name, "wangjunjie25");
	p4->nodeNext = NULL;

	//��������
	struct person * temp = p1;
	while (temp != NULL)
	{
		printf("������%s, ���䣺%d\n", temp->name, temp->age);
		temp = temp->nodeNext;
	}

	//�ͷŶѿռ�
	free(p1->name);
	free(p2->name);
	free(p3->name);
	free(p4->name);
	p1->name = NULL;
	p2->name = NULL;
	p3->name = NULL;
	p4->name = NULL;
	free(p1);
	free(p2);
	free(p3);
	free(p4);
	p1 = NULL;
	p2 = NULL;
	p3 = NULL;
	p4 = NULL;
}
int main()
{
	//test01(); //��̬����
	test02();//��̬����
	system("pause");
	return EXIT_SUCCESS;
}
