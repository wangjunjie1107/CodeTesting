#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stddef.h> 
#include<stdlib.h>
#include<math.h>
#include<time.h> 

typedef struct Personal
{
	//������
	char name[20];
	int age;

	struct Personal * next;//ָ����
}Personal;

void test()
{
	//��̬�����������
	//���ýṹ������ָ�� ��̬�����ڴ�
	Personal * s1 = (Personal *)malloc(sizeof(Personal));
	s1->age = 22;
	strcpy(s1->name, "wangjunjie");

	Personal * s2 = (Personal *)malloc(sizeof(Personal));
	s2->age = 24;
	strcpy(s2->name, "��˼��");

	Personal * s3 = (Personal *)malloc(sizeof(Personal));
	s3->age = 25;
	strcpy(s3->name, "hahaha");

	//��������ϵ

	s1->next = s2;
	s2->next = s3;
	s3->next = NULL;
	Personal * p = s1;

	//�������
	while (p != NULL)
	{
		printf("id = %s, age = %d\n", p->name, p->age);
		p = p->next;
		//p++; //������Ϊ�ڴ治����������ģ�
			//p++���ƶ���һ���ṹ���λ�ã����ǲ�������һ�����
	}

	//�ͷŽ��ռ�
	p = s1; //�ղű����Ժ� p�Ѿ�ָ�����һ���ڵ��ˣ������ٴ���pָ��s1
	Personal * temp = NULL; //��һ����ʱָ���æ�ͷſռ�

	while (p != NULL)
	{
		temp = p;
		p = p->next;
		
		free(temp);
		temp = NULL;
	}


}
int main()
{
	test();
	system("pause");
	return  EXIT_SUCCESS;
}


