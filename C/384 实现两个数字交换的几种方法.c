#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//实现两个数字交换的几种方法
void test01()
{
	int num1 = 100;
	int num2 = 200;
	printf("交换前：num1 = %d, num2 = %d\n\n", num1, num2);


	//方法1
	int temp = num1;
	num1 = num2;
	num2 = temp;
	printf("方法1 交换后：num1 = %d, num2 = %d\n\n", num1, num2);

	//方法2
	num1 = 100;
	num2 = 200;
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	printf("方法2 交换后：num1 = %d, num2 = %d\n\n", num1, num2);

	//方法3
	num1 = 100;
	num2 = 200;
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("方法3 交换后：num1 = %d, num2 = %d\n\n", num1, num2);


}
int main() 
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
