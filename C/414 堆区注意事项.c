#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


int * getSpace()
{
	int * p = malloc(sizeof(int) * 5);

	if (p == NULL)
	{
		return NULL;
	}

	for (int i = 0; i < 5; i++)
	{
		p[i] = 100 + i;
	}

	return p;
}

void test01()
{
	int * p = getSpace();

	for (int i = 0;i < 5;i++)
	{
		printf("%d  ", p[i]);
	}
	printf("\n");

	free(p);
	p = NULL;
}


//����ע������
void allocateSpace(char * pp)
{
	char * temp = malloc(100);
	memset(temp, 0, 100);
	strcpy(temp, "wangjunjie");
	pp = temp;  // ֵ�����������ⲿ��˵��û�иı�

	printf("pp = %s\n", pp); 
}

void test02()
{
	char * p = NULL;
	allocateSpace(p); //���ղ��ɹ� ֵ���� 

	printf("p = %s\n", p);
}

void allocateSpace2(char ** pp)
{
	char * temp = malloc(100);
	memset(temp, 0, 100);
	strcpy(temp, "wangjunjie");
	
	//����ָ�� �洢 һ��ָ��
	*pp = temp;  //���ճɹ�
}

void test03()
{
	char * p = NULL;
	allocateSpace2(&p); // ����Ϊһ��ָ��ĵ�ַ���ı���ǵ�ַ

	printf("p2 = %s\n", p);
}


int main()
{
	test01();
	test02();
	test03();

	system("pause"); 

	return EXIT_SUCCESS;
}


