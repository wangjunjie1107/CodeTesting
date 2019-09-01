
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//间接赋值的三大条件
//1、两个变量
//2、建立关系
//3、通过*操作内存

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
