#define _CRT_SECURT_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
	void * *calloc( (size_t nmemb, , size_t size );
	���ܣ�
	���ڴ涯̬�洢���з��� nmemb �鳤��Ϊ size �ֽڵ���������calloc �Զ���������ڴ�
	�� 0��
	������
	nmemb�������ڴ浥Ԫ����
	size��ÿ���ڴ浥Ԫ�Ĵ�С����λ���ֽڣ�
	����ֵ��
	�ɹ�������ռ����ʼ��ַ
	ʧ�ܣ�NULL
*/

/*
#include <stdlib.h>
void * *realloc( (void * *ptr, , size_t size );
���ܣ�
���·����� malloc ���� calloc �����ڶ��з����ڴ�ռ�Ĵ�С��
realloc �����Զ��������ӵ��ڴ棬��Ҫ�ֶ��������ָ���ĵ�ַ�����������Ŀռ䣬��
ô�ͻ������е�ַ�����������ڴ棬���ָ���ĵ�ַ����û�пռ䣬��ô realloc ������
�����µ������ڴ棬�Ѿ��ڴ��ֵ���������ڴ棬ͬʱ�ͷž��ڴ档
������
ptr��Ϊ֮ǰ�� malloc ���� calloc ������ڴ��ַ������˲������� NULL����ô�� realloc
�� malloc ����һ��
size��Ϊ���·����ڴ�Ĵ�С, , ��λ���ֽ�
����ֵ��
�ɹ����·���Ķ��ڴ��ַ
ʧ�ܣ�NULL
*/

void test01()
{
	//10��int��С���ڴ棬�ڴ浥Ԫ��������
	int *p1 = calloc(10, sizeof(int));

	//�ڴ����ʧ��
	if (p1 == NULL)
		return;

	//��ֵ����
	for (int i = 0; i < 10; i++)
	{
		p1[i] = i + 1;
	}

	//��ӡ����
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", p1[i]);
	}

	printf("\n");
	free(p1);
}

void test02()
{
	int * p1 = calloc(10, sizeof(int));

	if (p1 == NULL)
	{
		return;
	}

	for (int i = 0; i < 10; i++)
	{
		p1[i] = i + 1;
	}

	int * p2 = realloc(p1, 15 * sizeof(int));
	if (p2 == NULL)
	{
		return;
	}

	printf("%d\n", p1);
	printf("%d\n", p2);

	//��ӡ
	for (int i = 0; i < 15; i++)
	{
		printf("%d", p2[i]);
	}
	printf("\n");

	//���¸�ֵ
	for (int i = 0; i < 15; i++)
	{
		p2[i] = i + 1;
	}
	
	�ٴδ�ӡ
	for (int i = 0; i < 15; i++)
	{
		printf("%s\n", p2[i]);
	}
	printf("\n");

	free(p2);


}
int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;

}
