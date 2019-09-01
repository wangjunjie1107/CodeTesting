#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 

//����ָ�����������

void printArray(int ** pArray, int len)
{
	int i;
	for (i = 0;i < len;i++)
	{
		printf("��%d��Ԫ�ص�ֵΪ��%d\n", i + 1, *pArray[i]);
	}
}

//�ڶ��������ڴ�
void test01()
{
	int **pArray = malloc(sizeof(int *) * 5);

	//��ջ�Ͽ�������
	int a1 = 100;
	int a2 = 100;
	int a3 = 100;
	int a4 = 100;
	int a5 = 100;


	//�������� �洢 ջ�����ݵĵ�ַ�� ������ϵ
	pArray[0] = &a1;
	pArray[1] = &a2;
	pArray[2] = &a3;
	pArray[3] = &a4;
	pArray[4] = &a5;

	printArray(pArray, 5);

	//�ͷŶ����ռ�
	if (pArray != NULL)
	{
		free(pArray);
		pArray = NULL;
	}
}


//��ջ�Ͽ����ڴ�
void test02()
{
	int * pArray[5];

	int i;
	for (i = 0;i < 5;i++)
	{
		pArray[i] = malloc(4); //ջ��ÿ������ ά�������ڴ�
		*(pArray[i]) = i + 100;
	}

	//��ȡ���鳤��
	int len = sizeof(pArray) / sizeof(int *);

	printArray(pArray, len);

	//���������ͷ�
	for (i = 0;i < 5;i++)
	{
		if (pArray[i] != NULL)
		{
			free(pArray[i]);
			pArray[i] = NULL;
		}
	}
}

//����ָ���������������������
void allocateSpace(int ** pp, int size)
{
	int * pArray = malloc(sizeof(int) * size);

	int i;
	for (i = 0;i < size;i++)
	{
		pArray[i] = 100 + i;
	}

	*pp = pArray;
}

void printArray2(int * arr, int len)
{
	int i;
	for (i = 0;i < len;i++)
	{
		printf("%d\n", arr[i]);
	}
}

void freeSpace(int ** p)
{
	if (*p != NULL)
	{
		free(*p);
		*p = NULL;
	}
}

void test03()
{
	int * p = NULL;

	allocateSpace(&p, 100);

	printArray2(p, 100);

	freeSpace(&p);


	if (p != NULL)
	{
		printf("Ұָ��\n");
	}
	else
	{
		printf("��ָ��\n");
	}
}
int main()
{

	test01();
	test02();
	test03();
	system("pause"); 
	return EXIT_SUCCESS;
}


