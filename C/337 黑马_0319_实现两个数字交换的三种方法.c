#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stddef.h> 
#include<stdlib.h>
#include<math.h>
#include<time.h> 

//��λ���  ʵ���������ֽ��������ַ���
void test04()
{
	int num1 = 5;
	int num2 = 9;

	//ʵ���������ֽ���
	//int temp = num1;
	//num1 = num2;
	//num2 = temp;

	//num1 = num1 ^ num2;
	//num2 = num1 ^ num2;
	//num1 = num1 ^ num2;

	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
}

int main()
{
	test04();
	system("pause");
	return  EXIT_SUCCESS;
}


