#include<stdio.h>

int main()
{
	int a = 123; //十进制方式赋值
	int b = 0753; //八进制方式赋值  以数字0开头 
	int c = 0xABC; //十六进制方式赋值  数字0 ＋ 字符x
	
	//如果在printf中输出一个十进制数，那么用%d,
	//八进制数 %o 字母o 不是数字零
	//十六进制数 %x 
	
	printf("十进制：%d\n", a);
	printf("八进制：%o\n", b); //%o 为字母，不是数字零 
	printf("十六进制：%x\n", c);
	 
	return 0; 
	
 } 
