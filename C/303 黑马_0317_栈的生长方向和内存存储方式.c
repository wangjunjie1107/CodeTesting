#include "STD.c"

//栈的生长方向  向下生长 
void test01()
{
	int a = 10;  //最先入栈  位于栈底  高地址 
	int b = 10;
	int c = 10;
	int d = 10;	//最后入栈   位于栈顶  低地址
	
	printf("%d\n", &a); 
	printf("%d\n", &b); 
	printf("%d\n", &c); 
	printf("%d\n", &d); 
} 

//内存存储方式  小端对齐
void test02()
{
	//在内存中如何存储 a  
	int a = 0x11223344; //十六进制
	char *p = &a; //因为是char类型的指针，所以一次只打印一个字节的内存的值
	
	printf("%x\n", *p); //44 ----低位字节----低地址
	
	printf("%x\n", *(p + 1)); // 33 ----高位字节 ---高地址 
	
	printf("%x\n", *(p + 2));
	
	printf("%x\n", *(p + 3));
} 


int main()
{
	//test01();
	test02();	
	return 0;
 } 
