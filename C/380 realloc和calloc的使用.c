#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//calloc
void test01()
{
	//malloc��������0�Ĳ���
	//int * p = malloc(sizeof(int)* 10);

	//����1 ���ٸ���  ����2  ÿ��ռ�����ֽ���
	//��malloc��ͬ���ڶ��������ڴ�ռ�
	//��malloc��ͬ���� ���ٿռ�� ��0�Ĳ���
	int * p = calloc(10, sizeof(int));

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", p[i]);
	}

	free(p);
	p = NULL;

}
//ralloc
void test02()
{
	
	int * p = malloc(sizeof(int) * 10);

	for (int i = 0; i < 10;i++)
	{
		p[i] = i + 1;
	}

	for (int i = 0;i < 10;i++)
	{
		printf("%d\n", p[i]);
	}

	printf("%d\n", p);

	//����1  ԭ�ռ���׵�ַ   ����2  ���·����ڴ��С
	//������·�����ڴ�С��ԭ�����ڴ棬���׵�ַ����
	//������ڣ���������һ���ڴ���з���
	//������ٿռ��ԭ���󣬺����ռ䲻����0��
	p = realloc(p, sizeof(int) * 10);

	printf("���·����ڴ��\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", p[i]);
	}

	printf("%d\n", p);
	free(p);
	p = NULL;

}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
