#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//����ָ���������������������� �������������ڴ�
//void test01(int **p, int n)
//{
//	for(int i = 0; i < n;i++) 
//	{
//		printf("%d ", *(p[i]));
//	}
//	printf("\n");
//}

//����ָ��������������������� �������������ڴ�
int ** test02(int **q, int n)
{
	int * temp = (int *)malloc(sizeof(int) * n);
	if (temp == NULL)
	{
		return;
	}

	//��ֵ
	int i = 0; 
	for (i = 0;i < n; i++)
	{
		temp[i] = i + 100;
	}
	

	//ָ���Ӹ�ֵ
	*q = temp;
	return q;
	
}
int main()
{
	//int a = 10;
	//int b = 10;
	//int c = 10;
	//int d = 10;
	//int e = 10;

	//int n = 5;

	//int ** p = (int **)malloc(sizeof(int) * n);
	//p[0] = &a;
	//p[1] = &b;
	//p[2] = &c;
	//p[3] = &d;
	//p[4] = &e;

	//test01(p, n); //����ָ���������������������ԣ��������������ڴ�



	int **q = NULL;
	int m = 5;

	//��qָ���Ӹ�ֵ
	int * temp = * (test02(q,m));//����ָ��������������������ԣ��������������ڴ�

	//��������ʹ���ڴ�

	int i;
	for (i = 0; i < m; i++)
	{
		printf("%d\n", temp[i]);
	}
	printf("\n");
	free(q);
	q = NULL;


	system("pause");
	return EXIT_SUCCESS;
}
