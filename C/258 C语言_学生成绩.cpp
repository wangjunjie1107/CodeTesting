#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stu2
{
	//��Ա�б�
	//char name[21];
	char * name;
	float * scores;
};

int main()
{
	struct stu2 *p = (struct stu2 *)malloc(sizeof(struct stu2) * 3);
	for (int i = 0; i < 3; i++)
	{
		p[i].name = (char *)malloc(sizeof(char) * 21);
		p[i].scores = (float *)malloc(sizeof(float) * 3);

		printf("��������ѧ�� ����   �ɼ� ��\n");
		scanf("%s%f%f%f", p[i].name, &p[i].scores[0], &p[i].scores[1], &p[i].scores[2]);

	}

	//ð������, �ɼ��ܺͣ���С���� 
	for (int i = 0; i < 3 - 1; i++)
	{
		for (int j = 0; j < 3 - i - 1; j++)
		{
			float sum1 = p[j].scores[0] + p[j].scores[1] + p[j].scores[2];
			float sum2 = p[j + 1].scores[0] + p[j + 1].scores[1] + p[j + 1].scores[2];
			if (sum1 > sum2)
			{
				struct stu2 temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}


	for (int i = 0; i < 3; i++)
	{

		printf("������%s\n", p[i].name);
		printf("�ɼ�: %.1f   %.1f   %.1f\n", p[i].scores[0], p[i].scores[1], p[i].scores[2]);
	}


	//�ͷ�
	for (int i = 0; i < 3; i++)
	{
		free(p[i].name);
		free(p[i].scores);
	}

	free(p);



	system("pause");
	return EXIT_SUCCESS;
}
