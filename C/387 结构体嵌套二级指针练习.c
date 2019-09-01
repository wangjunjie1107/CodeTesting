#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//�ṹ�����
struct Teacher
{
	char * name;
	char ** student;
};

//�ڴ����
struct Teacher ** allocateSpace()
{
	struct Teacher ** myTeacher = malloc(sizeof(struct Teacher *) * 3);

	if (myTeacher == NULL)
	{
		printf("�����ڴ�ʧ�ܣ�\n");
		return NULL;
	}

	
	for (int i = 0;i < 3;i++)
	{
		//����ʦ�����ڴ�ռ�
		myTeacher[i] = malloc(sizeof(struct Teacher));

		//����ʦ�����������ڴ沢��ֵ
		myTeacher[i]->name = malloc(sizeof(char) * 64);
		sprintf(myTeacher[i]->name, "wangjunjie_%d", i + 1);

		//����ʦ����ѧ���ǵ����������ڴ沢��ֵ
		myTeacher[i]->student = malloc(sizeof(char *) * 3);
		for (int j = 0;j < 3;j++)
		{
			myTeacher[i]->student[j] = malloc(sizeof(char) * 64);
			sprintf(myTeacher[i]->student[j], "student_%d", j + 1);
		}
	}

	return myTeacher;
}

//��ӡ�ṹ��
void printTeacher(struct Teacher ** myTeacher)
{
	if (myTeacher == NULL);

	for (int i = 0;i < 3;i++)
	{
		printf("��ʦ��%s ��\n", myTeacher[i]->name);

		for (int j = 0;j < 3;j++)
		{
			printf("                     ѧ��%d��%s\n", j + 1, myTeacher[i]->student[j]);
		}


		printf("-----------------------------------------------\n");
	}
}

//�ͷŶ����ռ�
void freeSpace(struct Teacher ** myTeacher)
{
	if (myTeacher == NULL)
	{
		return;
	}

	for (int i = 0;i < 3;i++)
	{
		//�ͷ���ʦ������
		if (myTeacher[i]->name != NULL)
		{
			printf("��ʦ %s �ѱ��ͷţ�\n", myTeacher[i]->name);
			free(myTeacher[i]->name);
			myTeacher[i]->name = NULL;
		}

		//�ͷ���ʦ������ѧ����
		for (int j = 0;j < 3;j++)
		{
			if (myTeacher[i]->student[j] != NULL)
			{
				printf("                 ѧ�� %s �ѱ��ͷţ�\n", myTeacher[i]->student[j]);
				free(myTeacher[i]->student[j]);
				myTeacher[i]->student[j] = NULL;
			}
		}
		//�ͷŽṹ�������е�ÿ����ʦ
		free(myTeacher[i]);
		myTeacher[i] = NULL;
		printf("--------------------------------------------\n");

	}

	//�ͷŽṹ������
	free(myTeacher);
	myTeacher = NULL;
}


void test()
{
	 //�����ڴ�ռ�
	struct Teacher ** myTeacher = allocateSpace();
	//printf("�ڴ����ɹ���\n");


	//��ֵ��ӡ
	printTeacher(myTeacher);

	//�ͷŶ����ռ�
	freeSpace(myTeacher);
	myTeacher = NULL;
	printf("�����ռ��ͷųɹ���\n");

}
int main()
{

	test();
	system("pause");
	return EXIT_SUCCESS;
}
