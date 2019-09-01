#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//�����ڴ�
void allocate_memory(char ***p, int n)
{
	//����ָ�����飬������������10��char���͵�ָ��
	//������ָ������ڴ�
	char ** temp = (char **)malloc(sizeof(char *) * n);  
	
	if (temp == NULL)
	{
		printf("�ڴ����ʧ�ܣ�\n");
		return;
	}
	
	int i; 
	for (i = 0; i < n; i++)
	{
		temp[i] = (char *)malloc(sizeof(char) * 30); //��һ��ָ������ڴ�

		temp[i] = "hello C"; 
	}

	//�� p ָ�� temp ��ָ����ڴ�
	*p = temp;
}

//��ӡ����
void print_array(char **p, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%s\n", p[i]);//�ַ�ָ���ӡ��ֻ��Ҫ�����õ�һ��ָ�뼴��
	}
	printf("_________________________\n"); 
}

//�ͷ��ڴ� 
void free_memory(char ***p, int n)
{
	if (p == NULL)
	{
		printf("pΪ��\n");
		return;
	}
	
	
	char ** temp = *p; //ʹ�ö���ָ�����ͷţ���Ϊ�漰�������±� 

	//�ͷ��ڲ�ռ�  ����һ��ָ����Ϊ��
	int i;
	for (i = 0; i < n; i++)
	{
		free(temp[i]);
		temp[i] = NULL;
	}

	free(temp); //�ͷŶ���ָ��
	temp = NULL;
}
int main()
{
	int n = 10;
	char ** p = NULL;
	
	//�����ڴ�
	allocate_memory(&p, n);

	//��ӡ����
	print_array(p, n);

	//�ͷ��ڴ�
	free_memory(&p, n);

	system("pause");
	return EXIT_SUCCESS;
}
