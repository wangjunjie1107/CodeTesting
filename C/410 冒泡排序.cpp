#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct student
{
	char name[64];
	int	score;
};
void test01()
{
	struct student arr[100];
	int n;
	printf("Ҫ��������˵ĳɼ�?\n");
	scanf("%d", &n);
	
	printf("���������������ͳɼ�,�м��ÿո������\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%s %d", &(arr[i].name),&(arr[i].score));
	}
	
	printf("ð������ǰ��\n");
	for (int i = 0; i < n; i++)
	{
		printf("������%10s�� �ɼ���%10d  \n", arr[i].name, arr[i].score);
	}
	printf("\n");

	//ð������  ���շ�����С��������
	struct student temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			//���ǰ��������ں����������������
			if (arr[i].score > arr[j].score)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf("ð�������\n");
	for (int i = 0; i < n; i++)
	{
		printf("������%10s�� �ɼ���%10d  \n", arr[i].name, arr[i].score);
	}
}


int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
