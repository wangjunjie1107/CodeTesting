#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int fun(int a, int b)
{
	printf("%d\n", a + b);
	return a + b;
}
int main()
{
	//int(*pf)(int, int) = &fun;//��������ʹ��ʱ�����ɱ���������ת��Ϊ����ָ��,
								//���Կ���ʡ��&����
								//&������ֻ����ʽ��˵���˱���������ʽִ�е�����

	int(*pf)(int, int) = fun;//��������ʹ��ʱ�����ɱ���������ת��Ϊ����ָ��

	int sum = pf(20, 30);

	printf("%d\n", sum);
	system("pause");
	return EXIT_SUCCESS;
}
