#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


//const ���εĳ���
const int a = 10;
//ȫ��const���� ���ڳ�����  �ܵ��������ı���

//�޸�ȫ��const����
void test01()
{
	//a = 100;      //ֱ���޸�ʧ��

	//int *p = &a; 	//����޸�  ʧ��
	//p = 100;

	//printf("%d\n",a);
}

//�ֲ�const���γ���  α���� ���Լ���޸�
void test02()
{
	const int b = 10;//���ݴ����ջ����α����

	//b = 100; //ֱ���޸�ʧ��

	int * p = &b;  //����޸ĳɹ�
	*p = 2000;
	printf("b = %d\n", b);

	//int arr[b]; //α���� �����Գ�ʼ������
}


//�ַ����������Թ����
void test03()
{
	char * p1 = "wangjunjie";
	char * p2 = "wangjunjie";
	char * p3 = "wangjunjie";

	// ͬһ���ַ������� ��� ��һ����ַ��
	printf("%d\n", p1);
	printf("%d\n", p2);
	printf("%d\n", p3);
	printf("%d\n", &"wangjunjie");
}


//�ַ��������Ƿ��ܹ��޸ģ� �������޸�
void test04()
{
	char * p1 = "wangjunjie";

	p1[0] = 'W';  // �����������޸�

	printf("%s\n", p1);
}


int main()
{
	//test01();
	//test02();
	//test03();
	test04();

	system("pause"); 
	return EXIT_SUCCESS;
}


