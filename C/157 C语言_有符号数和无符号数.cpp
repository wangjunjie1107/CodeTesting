#include<stdio.h>

//有符号数是最高位为符号位，0代表正数，1代表负数。

//无符号数最高位不是符号位，而就是数的一部分，无符号数不可能是负数。


int main()
{
	//定义有符号整型变量a 
	signed int a = -1089474374; 
	printf("%X\n", a);
	//结果为BF0FF0BA
	 
	//定义无符号整型变量b
	unsigned int b = 3236958022; 
	printf("%X\n",b); //结果为 C0F00F46 
	
	
	return 0;
}
