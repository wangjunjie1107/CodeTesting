#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>

int main()
{
	//���������ͱ���ʱ������������Ѿ���������һ��������˵�������ؼ���int����ʡ�ԡ�
	//���磺unsigned short int a;  unsigned short a ;��������������ǵȼ۵ġ�

	unsigned short int a = 10;
	unsigned short b = 20;

	printf("a = %d\n", a);
	printf("b = %d\n", b);

	system("pause");
	return EXIT_SUCCESS;
}
