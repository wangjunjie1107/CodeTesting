#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


//��������
//���������������ڴ�  ��������ʹ��

void func(char * p)
{
	strcpy(p, "wangjunjie");
}

void test01()
{
	//��ջ�Ϸ����ڴ�
	char buffer[1024] = { 0 };
	func(buffer);

	printf("buffer = %s\n", buffer);
}


void printString(char * str)
{
	printf("%s\n", str);
}
void test02()
{
	//�ڶ��������ڴ�
	char * str = malloc(sizeof(char) * 100);
	memset(str, 0, 100);
	strcpy(str, "wangjunjie");

	//�ڱ���������ʹ��
	printString(str);

	free(str);
	str = NULL;
}


//������ԣ��ڱ��������з����ڴ� ����������ʹ��
void allocateSpace(char ** p)
{
	char * temp = malloc(sizeof(char) * 1000);
	memset(temp, 0, 1000);
	strcpy(temp, "wangjunjie");

	//��ַ����  �ں�����������Ȼ��Ч
	*p = temp; //tempָ����� �������ڴ�  *pҲ��ָ����Ƕ������ڴ�
	printf("&p = %d\n", p); //�������һ��ָ��ĵ�ַ

}

void test03()
{
	char * p = NULL;
	allocateSpace(&p);

	printf("p = %s\n", p);
	printf("&p = %d\n", &p); //�������һ��ָ��ĵ�ַ Ҳ����p�ĵ�ַ

	free(p);
	p = NULL;
}

int main()
{
	test01();
	test02();
	test03();


	system("pause"); 
	return EXIT_SUCCESS;
}


