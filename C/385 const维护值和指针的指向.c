#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void test01()
{
	int a = 555;
	int const * p1;  //�������޸�ָ���ֵ�����޸�ָ���ָ��
	p1 = &a;//�����޸�ָ���ָ��
	*p1 = 100;//�������޸�ָ���ֵ

	int * const p2 = &a; // �������޸�ָ���ָ�����޸�ָ���ֵ
	*p2 = 100;//�����޸�ָ���ֵ
	p2 = NULL;//�������޸�ָ���ָ��

	int arr[] = { 555,555 };
	arr = NULL;//��������ָ�볣�� �������޸�ָ��
	*arr = 100;// �����޸�ֵ
}
int main() 
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
