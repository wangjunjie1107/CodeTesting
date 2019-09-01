#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


//calloc
void test01()
{
	//malloc��������0�Ĳ���
	//int * p = malloc(sizeof(int)* 10);


	//����1 ���ٸ���  ����2  ÿ��ռ�����ֽ���
	//��malloc��ͬ���ڶ��������ڴ�ռ�
	//��malloc��ͬ���� ���ٿռ�� ��0�Ĳ���
	int * p = calloc(10, sizeof(int));
	for (int i = 0;i < 10;i++)
	{
		printf("%d\n", p[i]);
	}

	free(p);
	p = NULL;
}

//realloc
void test02()
{
	int * p = malloc(sizeof(int) * 10);

	for (int i = 0;i < 10; i++)
	{
		p[i] = i + 100;
	}
	printf("p = %d\n", p);


	//����1  ԭ�ռ���׵�ַ   ����2  ���·����ڴ��С

	//������·�����ڴ�ϴ����������һ�����ڴ�
	//������·�����ڴ�С����ֱ����ԭ��ַ�����ڴ�

	//������ٿռ��ԭ���󣬺����ռ䲻����0��
	p = realloc(p, sizeof(int) * 200);

	printf("���·����ڴ��\n");
	for (int i = 0; i < 20; i++)
	{
		printf("%d\n", p[i]);
	}

	printf("���·����ڴ�� p = %d\n", p);
}



int main()
{
	test01();
	test02();

	system("pause"); 
	return EXIT_SUCCESS;
}


