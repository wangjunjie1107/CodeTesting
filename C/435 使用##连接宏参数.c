#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

// ����ʹ�� #  �Ѻ������Ϊһ���ַ���
#define STR(s)  #s

// ����ʹ�� ## �����������������һ��
#define CONS(a,b) (int)(a##e##b)

void test01()
{
	printf(STR(hello));
	printf("\n");
	printf("%d\n", CONS(2, 3));  // 2e3 = 2000
}
int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
