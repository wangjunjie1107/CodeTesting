#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//ʵ���������ֽ����ļ��ַ���
void test01()
{
	int num1 = 100;
	int num2 = 200;
	printf("����ǰ��num1 = %d, num2 = %d\n\n", num1, num2);


	//����1
	int temp = num1;
	num1 = num2;
	num2 = temp;
	printf("����1 ������num1 = %d, num2 = %d\n\n", num1, num2);

	//����2
	num1 = 100;
	num2 = 200;
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	printf("����2 ������num1 = %d, num2 = %d\n\n", num1, num2);

	//����3
	num1 = 100;
	num2 = 200;
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("����3 ������num1 = %d, num2 = %d\n\n", num1, num2);


}
int main() 
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
