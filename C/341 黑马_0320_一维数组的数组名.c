#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>


void test01()
{
	//һά������� �ǲ���ָ���һ��Ԫ�ص�ָ�룿

	int arr[5] = { 1,2,3,4,5 };
	printf("sizeof arr = %d\n", sizeof(arr));

	//�������� ȡ��ַ
	printf("%d\n", &arr);
	printf("%d\n", (&arr)+ 1);

	//��һ�� ���������� sizeof
	//�ڶ��� ��������ȡ��ַ ���� �������鳤��
	//����������������⣬һά������ ָ�������һ��Ԫ�ص�ָ��
	int * p = arr;

	//������ ָ�볣�� int * const p;
	//arr = NULL; //ָ���ָ���ǲ������޸ĵ�
	arr[0] = 100;//ָ��ָ����ڴ�ռ�����޸�

	//������ʵ�ʱ�� �±����Ϊ������ ����
	p = p + 3;

	printf("%d\n", p[-2]); // ���˿� 
	printf("%d\n", *(p - 2)); //��������

}

//int arr[] �ȼ���  int * arr
//����д������Ļ� �ɶ��ԱȽϺ�
void printArray(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);//���˿�
		printf("%d\n", *(arr + i)); //��������

	}
}

void test02()
{
	int arr[5] = { 1, 2, 3, 4, 5 };

	int len = sizeof(arr) / sizeof(int);
	printArray(arr, len);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return  EXIT_SUCCESS;
}



