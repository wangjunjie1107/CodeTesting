#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

struct student
{
	char name[21];
	int age;
	int score;
	char addr[25];
}stu1 = {"����",18,100,"����"}; //�ṹ�帳ֵ����1 

int main(void)
{
	//�ṹ�帳ֵ����2 
	struct student stu2 = {"����",18,100,"����"}; 
	
	//�ṹ�帳ֵ����3
	struct student stu3;
	
	strcpy(stu3.name, "������");
	stu3.age = 19;
	stu3.score = 99;
	strcpy(stu3.addr, "����");   //���ַ������������鸳ֵ 


	//�ṹ�帳ֵ����4
	struct student stu4; 
	
	printf("������ѧ����Ϣ\n"); 
	scanf("%s%d%d%s", stu4.name, &stu4.age, &stu4.score, stu4.addr);
	
	//��ӡ 
	printf("������ %s\n", stu4.name);
	printf("���䣺 %d\n", stu4.age);
	printf("�ɼ��� %d\n", stu4.score);
	printf("��ַ�� %s\n", stu4.addr);
	 
	return 0;
 } 
