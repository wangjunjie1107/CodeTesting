#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//�ַ������Һ���
void searchValue(char ** arr, char value)
{
	//�����Ϸ��Լ��
	while (arr == NULL)
	{
		return;
	}
	while (value == '\0')
	{
		return;
	}

	char * str = NULL;

	while ((str = *arr++) != NULL) //�ַ������ж��Ƿ�ΪNULL
	{
		char * temp = str;//�����ӡ����Ŀ���ַ��� 

		while ((*str != '\0')) //�ַ����ж��Ƿ��˽�β��\0'��
		{
			if ((*str++ == value))
			{
				printf("�ҵ�������ַ�����%s��\n",temp);
				return;
			}
		}
	}

	printf("δ�ҵ��ַ�����\n");
	return;
}
//��һ���ַ����в����ض����ַ���
void test01()
{
	char * arr[] =
	{
		"wangjunjie",
		"wangjunjie123",
		"wangjunjiehahaha099",
		"lisijia999",
	};

	char value = '0';
	searchValue(arr, value);
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
