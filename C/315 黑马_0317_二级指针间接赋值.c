#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//�������ָ�루Ҳ����һ��ָ��ĵ�ַ������ν��ַ�ĵ�ַ������һ��ָ����з����ڴ棬��ֵ����
void AllocateSpace(char ** p)
{
	*p = (char *)malloc(100);
	strcpy(*p, "wangjunjie");
}

void FreeSpace(char ** p)
{
	if (p == NULL)
	{
		return;
	}

	if (*p != NULL)
	{
		free(*p);
		*p = NULL;
	}
}

void test()
{
	char *p = NULL;

	AllocateSpace(&p);//������һ��ָ��ĵ�ַ��Ҳ���Ƕ���ָ�롣

	printf("%s\n", p);
	FreeSpace(&p);

	if (p == NULL)
	{
		printf("p�ڴ��ͷţ�\n");
	}
}
int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
