#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 

/*
	大端模式（Big_endian）的含义就是字数据的高字节存储在低地址中，
	而字数据的低字节则存放在高地址中。


	小端模式（Little_endian）的含义就是字数据的高字节存储在高地址中，
	而字数据的低字节则存放在低地址中。

*/ 
//栈的生长方向
void test01()
{
	int a = 10; // 栈底 -- 高地址
	int b = 20;
	int c = 30;
	int d = 40; // 栈顶 -- 低地址

	printf("&a = %d\n", &a);
	printf("&b = %d\n", &b);
	printf("&c = %d\n", &c);
	printf("&d = %d\n", &d);
}

//内存存储方式
void test02()
{
	int a = 0x11223344;

	char * p = &a;

	printf("%x\n", *p);		     // 44 --- 低位字节 --- 存放在低地址    地址：p    小端模式
	printf("%x\n", *(p + 1));   //  33 --- 高位字节 -- 存放在高地址     地址：p+1  小端模式
	printf("%x\n", *(p + 2));  //   22
	printf("%x\n", *(p + 3)); //    11	

}



int main()
{

	test01();
	test02();

	system("pause"); 
	return EXIT_SUCCESS;
}


