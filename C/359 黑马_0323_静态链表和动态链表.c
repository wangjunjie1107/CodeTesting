#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct person
{
	int age; //������
	char name[50];

	struct person * next; //ָ����
};

//��̬����
void test01()
{
	//�����㲢��ʼ��
	struct person p1 = { 20,"wangjunjie",NULL };
	struct person p2 = { 21,"wangjunjie",NULL };
	struct person p3 = { 22,"wangjunjie",NULL };
	struct person p4 = { 23,"wangjunjie",NULL };
	struct person p5 = { 24,"wangjunjie",NULL };
	struct person p6 = { 25,"wangjunjie",NULL };

	//������ϵ
	p1.next = &p2;
	p2.next = &p3;
	p3.next = &p4;
	p4.next = &p5;
	p5.next = &p6;
	p6.next = NULL;

	//��������
	struct person * temp = &p1;
	for (int i = 0; i < 6; i++)
	{
		printf("������%s  ���䣺%d\n", temp->name, temp->age);
		temp = temp->next;
	}
}

//��̬����
void test02()
{
	//�������  �����ڴ�
	struct person * p1 = malloc(sizeof(struct person));
	struct person * p2 = malloc(sizeof(struct person));
	struct person * p3 = malloc(sizeof(struct person));
	struct person * p4 = malloc(sizeof(struct person));
	struct person * p5 = malloc(sizeof(struct person));
	struct person * p6 = malloc(sizeof(struct person));
	struct person * p7 = malloc(sizeof(struct person));

	//�ڵ��ʼ��
	p1->age = 18;
	//�ṹ�岻��ֱ�Ӹ��ַ����鸳ֵ����Ϊ������һ�������޸ĵ���ֵ ������
	strcpy(p1->name, "wangjunjie");//�ַ�������
	sprintf(p1->name, "%s", "wangjunjiehahahha"); //��ʽ������
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

	//������̬����
	struct person * temp = p1;
	for (int i = 0; i < 7; i++)
	{
		printf("������%s ���䣺%d\n", temp->name, temp->age);
		temp = temp->next;
	}

	//�ͷŶѿռ�
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
	//test01();//��̬����
	test02();//��̬����
	system("pause");
	return EXIT_SUCCESS;
}
