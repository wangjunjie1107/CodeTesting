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
	int score[3];  //3�ſεĳɼ� 
	char addr[25];
}; 
int main()
{
	//����ṹ������ 
	struct student stu[3] =
	{
		{"zhangsan",21, 99,99,99, "xian"},
		{"lisi",21, 100,100,100, "xian"},
		{"wangmazi",21, 98,89,79, "xian"}
	};
	
	//��ӡ�ṹ������ 
	for(int i=0; i<3; i++)
	{
		printf("������ %s\n", stu[i].name);
		printf("���䣺 %d\n", stu[i].age);
		printf("�ɼ�1�� %d\n", stu[i].score[0]);
		printf("�ɼ�2�� %d\n", stu[i].score[1]);
		printf("�ɼ�3�� %d\n", stu[i].score[2]);
		printf("��ַ�� %s\n", stu[i].addr);
		printf("\n");
	}
	

	 
	return 0;
 } 
