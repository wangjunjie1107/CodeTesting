#include<stdio.h>

int main()
{
	int a = 123;		//十进制 
	int b = 0567;		//八进制 
	int c = 0xabc;  	// 十六进制 
	
	printf("a = %d\n", a);
	
	printf("8进制：b = %o\n", b);
	printf("10进制：b = %d\n", b);
	 
	printf("16进制：c = %x\n", c); 
	printf("16进制：c = %X\n", c); //字母 x 大写，则以大写字母输出十六进制数 
	printf("10进制：c = %d\n", c); 
	
	//定义无符号int 变量，以16进制方式赋值 
	unsigned int d = 0xffffffff;
	
	printf("有符号十进制方式打印：d = %d\n", d);
	printf("无符号十进制方式打印：d = %u\n", d);
	
	return 0; 
	
} 
