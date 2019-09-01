#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>

//�ṹ��Ƕ�׶���ָ�����ϰ
//�ṹ�����
struct Teacher
{
	//��ʦ����
	char * name;
	//��ʦ����ѧ������ ����  ����ָ��
	char ** student;
};

//�����ڴ�ռ�
void allocateSpace(struct Teacher ** teacherArray)
{
	if (teacherArray == NULL)
	{
		return;
	}

	//���������ڴ�
	struct Teacher ** temp = malloc(sizeof(struct Teacher *) * 3);

	//���ݸ�ֵ
	for (int i = 0; i < 3;i++)
	{
		//����ʦ�����ڴ�
		temp[i] = malloc(sizeof(struct Teacher));

		//����ʦ������ �����ڴ�
		temp[i]->name = malloc(sizeof(char) * 64);

		//����ʦ������ֵ
		sprintf(temp[i]->name, "Teacher_%d", i + 1);

		//����ʦ�����ѧ����������ڴ�
		temp[i]->student = malloc(sizeof(char *) * 4);
		//��ѧ��������ֵ �������ڴ�ռ�
		for (int j = 0; j < 4;j++)
		{
			temp[i]->student[j] = malloc(sizeof(char) * 64);
			sprintf(temp[i]->student[j], "%s_student_%d",temp[i]->name,j + 1);
		}
	}
	//������ϵ
	teacherArray = temp;
}

//��ӡ����
void printfTeacherArray(struct Teacher ** teacherArray)
{

	struct Teacher ** temp = teacherArray;

	for (int i = 0; i < 3;i++)
	{
		printf("��ʦ������%s\n", temp[i]->name);

		for (int j = 0; j < 4; j++)
		{
			printf("    %s\n", temp[i]->student[j]);
		}

		printf("\n");
	}
}

//�ͷŶ�������
void freeSpace(struct Teacher ** teacherArray)
{
	struct Teacher ** temp = teacherArray;

	if (temp == NULL)
	{
		return;
	}

	for (int i = 0; i < 3; i++)
	{
		//�ͷ���ʦ�������ڵ��ڴ�ռ�
		free(temp[i]->name);
		temp[i]->name = NULL;

		//�ͷ�ѧ�������ռ�
		for (int j = 0; j < 4;j++)
		{
			free(temp[i]->student[j]);
			temp[i]->student[j] = NULL;
		}
		//�ͷ�ѧ������
		free(temp[i]->student);
		temp[i]->student = NULL;

		//�ͷŽṹ��i
		free(temp[i]);
		temp[i] = NULL;

	}

	//�ͷ���ʦ����
	free(temp);
	temp = NULL;

	if (teacherArray != NULL)
	{
		printf("�β�ָ�뻹δ�ͷţ�\n");
		free(teacherArray);
		teacherArray = NULL;
	}
}

void test()
{
	//��ʦ���鴴��
	struct Teacher ** teacherArray = NULL;

	//�����ڴ�
	allocateSpace(teacherArray);

	//��ӡ������ʦ��ѧ����Ϣ
	printfTeacherArray(teacherArray);

	//�ͷŶ�������
	freeSpace(teacherArray);
	teacherArray = NULL;
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}
