#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void func(int a, char b)
{
	printf("%d,  %c\n", a, b);
}

void test01()
{
	//�ȶ�������������ͣ���ͨ�����Ͷ��庯��ָ��
	// �����һ���������ͣ�����ֵ��void���β��б�int��char��;
	typedef void(myFunc)(int, char);
	myFunc * p = func;

	p(10, 'a');
}

void test02()
{
	//�ȶ��������ָ������ͣ���ͨ�����Ͷ��庯��ָ�����
	typedef void(*myFunc)(int, char);
	myFunc p = func;

	p(100, 'b');
}

void test03()
{
	//ֱ�Ӷ��庯��ָ��
	void(*p)(int, char) = func;

	p(2000, 'a');
}
int main()
{
	//test01();
	/*test02();*/
	test03();
	system("pause");
	return EXIT_SUCCESS;
}
