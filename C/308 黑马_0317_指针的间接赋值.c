
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//��Ӹ�ֵ����������
//1����������
//2��������ϵ
//3��ͨ��*�����ڴ�

void test01()
{
	int a = 10;
	int *p = &a;
	*p = 1000;
}

void changeValue(int *p)
{
	*p = 1000;
}

void test02()
{
	int a = 10;
	changValue(&a);
	printf("%d\n", a);
	printf("%d\n", &a);
}

int main()
{
	test02();

	system("pause");
	return 0;
}
