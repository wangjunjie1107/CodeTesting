#define _CRT_SECURE_NO_WARNINGS  //���vs����ȫ�汾�ľ�������
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 

//sizeof�ǲ���һ������������
//1�����ʲ���һ���������������  + - * /
void test01()
{
	int a;//����ͳ�Ʊ���ʱ�򣬿��Բ���С����
	printf("sizeof a = %d\n", sizeof a);

	printf("sizeof int = %d\n", sizeof(int));

}

//2��sizeof ����ֵ��ʲô��  unsigned int
//���һ��unsigned int��intȥ���㣬�����ͳһת��Ϊ unsigned int
void test02()
{
	unsigned int a = 10;
	if (a - 20 > 0)
	{
		printf("����0\n");
	}
	else
	{
		printf("С��0");
	}

	if (sizeof(int) - 5 > 0)
	{
		printf("����0\n");
		printf("%u\n", sizeof(int) - 5);
	}
	else
	{
		printf("С����\n");
	}
}

//3 sizeof�����÷�
// ͳ������ռ���ڴ�ռ��С

//�����������뵽 ������ �����������˻�Ϊһ��ָ�룬
//ָ��ָ��������е�һ��Ԫ�صĵ�ַ
void calculateArray(int arr[])
{
	printf(":::sizeof arr = %d\n", sizeof(arr)); // 4�ֽ�
}

void test03()
{
	int arr[] = { 1,2,3,4,56,48,4,46,16,5 };

	printf("sizeof arr = %d\n", sizeof(arr));

	calculateArray(arr);
}


int main()
{
	//test01();
	//test02();
	test03();

	system("pause"); 

	return EXIT_SUCCESS;
}


