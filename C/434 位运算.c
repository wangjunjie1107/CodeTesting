#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


//按位取反
void test01()
{
	int num = 2;
	printf("~num = %d\n", ~num);  // -3 

	// 0 10  ---取反得到 1 01  --- 负数 变为补码 1 11 -- -3 
}


//按位与
void test02()
{
	int num = 124;

	if ((num & 1) == 0)
	{
		printf("偶数\n");
	}
	else
	{
		printf("奇数\n");
	}
}

//按位或
void test03()
{
	int num1 = 5; // 0 101
	int num2 = 3;//  0 011

	// 0 111
	printf("num1 | num2 = %d\n", num1 | num2); // 7
}

//按位异或
void test04()
{
	int num1 = 5; // 0 0101
	int num2 = 9;//  0 1001

	//实现两个数字的交换
/*
	int temp = num1;
	num1 = num2;
	num2 = temp;
 
	num1 = num1 ^ num2; // 1 100
	num2 = num1 ^ num2;//  0 101  == 5
	num1 = num1 ^ num2;//  1 001  == 9
*/
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;


	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
}


// 左移 <<  右移 >>
void test05()
{
	int num = 20;
	printf("num <<= 3 = %d\n", num <<= 3); //20 * 8 = 160
	printf("num >>= 4 = %d\n", num >>= 4); //160 / 16 = 10

}
int main()
{
	test01();
	test02();
	test03();
	test04();
	test05();

	system("pause"); 
	return EXIT_SUCCESS;
}


