#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//1、栈的生长方向
void test01()
{
	int a = 0;
	int b = 2;
	int c = 3;
	int d = 4;
	
	printf("%d\n",&a);
	printf("%d\n",&b);
	printf("%d\n",&c);
	printf("%d\n",&d);
 } 
 
 //内存的存储方式
 void test02()
 {
 	int a = 0xaabbccdd;
 	
	unsigned char * p = &a;	
	
	printf("%x\n",*p); //低位字节数据 -----低地址
	 
	printf("%x\n",*(p+1)); //如果是CC 高位字节数据 ----高地址	
	
  } 
 int main()
 {
 	test02();
 	return 0;
 }
