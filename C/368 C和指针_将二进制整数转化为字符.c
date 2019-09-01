#include<stdio.h>

//接收一个整型值（无符号），把它转换为字符并打印它，前导零被删除 
void binary_to_ascii(unsigned int value)
{
	unsigned int quotient = 0;
	
	quotient = value / 10;
	printf("%d\n\n",quotient);
	if(quotient != 0)	
		binary_to_ascii(quotient);
	
	putchar(value % 10 + '0'); 
	
	// '0' + 0 = '0'
	// '0' + 1 = '1'
	// '0' + 2 = '2'
} 


int main()
{
	unsigned int value = 522;
	
	binary_to_ascii(value);
	
	return 0;
 } 
