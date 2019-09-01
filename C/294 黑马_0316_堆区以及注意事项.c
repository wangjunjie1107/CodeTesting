#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int * getSpace()
{
	int * p = malloc(sizeof(int)* 5);
	
	//�ѿռ俪��ʧ�� 
	if(p == NULL)
	{
		return NULL;
	}
	
	int i;
	for(i = 0; i < 5; i++)
	{
		p[i] = 100 + i;
	}
	
	return p; 
} 

void test01()
{
	int * p = getSpace();
	
	int i;
	for(i = 0; i < 5; i++)
	{
		printf("%d\n", p[i]);
	}
	
	//�ٴ�ӡһ�� ���� 
	for(i = 0; i < 5; i++)
	{
		printf("%d\n", p[i]);
	}
	
	
	//�ͷŶ�������
	free(p);
	p = NULL; //�� p ָ��գ� ��ֹҰָ�� 
}

//����ע������

void allocateSpace(char * pp) 
{
	char * temp = malloc(100);
	memset(temp, 0, 100); //��ն����ڴ�
	strcpy(temp, "hello world");
	
	pp = temp;
}

void test02()
{
	char * p = NULL;
	allocateSpace(p);
	
	printf("p = %s\n", p);
}

void allocateSpace2(char ** pp)
{
	char * temp = malloc(100);
	memset(temp, 0, 100);
	strcpy(temp, "hello world");
	
	*pp = temp;
}

void test03()
{
	char * p = NULL;
	allocateSpace2(&p);
	
	printf("p2 = %s\n", p);
}


int main()
{
	//test01();
	//test02();
	test03();
	return 0;
 } 
















