#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main()
{

	int arr[][3] =
	{
		{1,2,3},
		{ 4,5,6},
		{ 7,8,9 },
	};

	for (int i = 0;i < 3;i++)
	{
		//���������±�[]��ϣ���������ñ�־���
		printf("%d\n", *(arr)[i]);//��ά������ �� 1���ƶ��Ĳ���Ϊ һ��һά����
	}

	int(*p)[3] = arr;//ָ�������ָ�� p = arr
	
	printf("p = %d\n", p);
	printf("arr = %d\n", arr);

	printf("%d\n", **(p + 1));//ÿ��p��1�ƶ�һ��һά����ľ���
	printf("%d\n", *(*p+1));//	��p������һ�κ󣬾ͱ����ָ��һά�����ָ�룬һ�μ�1���ƶ�һ��int�ľ���



	system("pause");
	return EXIT_SUCCESS;
}