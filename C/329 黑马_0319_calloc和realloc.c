#define _CRT_SRCURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//calloc
void test01()
{
	//malloc��������0����
	//int * p = malloc(sizeof(int) * 10);

	//����1 ���ٸ��� ����2 ÿ����ռ�����ֽ���
	//��malloc��ͬ���ڶ��������ڴ�ռ�
	//��malloc��ͬ���� ���ٿռ�� ��0�Ĳ���
	int * p = calloc(10, sizeof(int));

	for (int i = 0; i < 10; i++)
		printf("%d\n", p[i]);

	free(p);
	p = NULL;
}

//relloc
void test02()
{
	//���ܣ����·����ڴ� 
	int * p = malloc(sizeof(int) * 10);

	for (int i = 0; i < 10; i++)
		p[i] = i + 1;
	
	for (int i = 0; i < 10; i++)
		printf("%d\n", p[i]);

	printf("%d\n", p);
	//����1 ԭ�ռ���׵�ַ  ����2 ���·����ڴ��С
	//���ָ���ĵ�ַ�����������Ŀռ䣬��ô�ͻ������е�ַ���������ڴ�
	//���ָ���ĵ�ַ����û�пռ䣬��ôrealloc�����·����µ������ڴ�
	//�Ѿ��ڴ��ֵ���������ڴ棬ͬʱ�ͷž��ڴ档 
	
	//��p����realloc�ķ���ֵ   ����ֵΪ�ɵ�ַ�������µ�ַ 
	p = realloc(p, sizeof(int) * 20);

	printf("���·����ڴ��\n");
	for (int i = 0; i < 10;i++)
		printf("%d\n", p[i]);

	printf("%d\n", p);

}



int main()
{
	test01();
	//test02();
	system("pause");
	return EXIT_SUCCESS;
}
