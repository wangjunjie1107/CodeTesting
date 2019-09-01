#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stddef.h> 
#include<stdlib.h>
#include<math.h>
#include<time.h> 

//按位异或  实现两个数字交换的三种方法
void test04()
{
	int num1 = 5;
	int num2 = 9;

	//实现两个数字交换
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


