#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>

void test01()
{
	//��һ�ֶ��巽ʽ �ɶ���ǿ
	int arr[3][3] = 
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 }
	};

	//�ڶ��ֶ��巽ʽ
	//int arr2[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	//�����ֶ��巽ʽ
	//int arr3[][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	//����ָ��  ָ����������ָ����ڴ�
	int (*p)[3] = arr; //һ������£�arrָ���һ������

	//ͨ��pָ�� ���� Ԫ�� 6
	printf("%d\n", *(*(p + 1) + 2));
	printf("%d\n", p[1][2]);
	printf("%d\n", *(*p + 5));

}

//��ά��������������
void printArray(int pArr[3][3], int len1, int len2)   //�ɶ��Ը�
//void printArray(int pArr[][3], int len1, int len2)
//void printArray( int(*pArr)[3] , int len1, int len2 )												  //void printArray(int pArr[][3], int len1, int len2)
{
	for (int i = 0; i < len1; i++)
	{
		for (int j = 0; j < len2; j++)
		{
			printf("%d ", pArr[i][j]); //�ɶ��Ը� 
			//printf("%d ",  *(*(pArr + i) + j ));
		}
		printf("\n");
	}
}

void test02()
{
	int arr[3][3] =
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 }
	};

	printArray(arr, 3, 3);

	//sizeof
	printf("sizeof arr = %d\n", sizeof(arr));

	//ȡ��ַ
	printf("%d\n", &arr);
	printf("%d\n", &arr + 1);

	//����ָ�룬ָ����Ƕ�ά����ĵ�ַ
	int(*p)[3][3] = &arr; //����ָ�룬ָ����Ƕ�ά����ĵ�ַ���൱��һ������ָ��

	printf("%d\n", *(*((*p) + 1) + 2 ));
	printf("%d\n", *(**p + 5));
	printf("%d\n", (*p)[1][2]);
	printf("%d\n", ***p);



}
int main()
{
	//test01();
	test02();
	system("pause");
	return  EXIT_SUCCESS;
}



