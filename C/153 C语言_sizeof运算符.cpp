#include<stdio.h>

/*
*  sizeof不是函数，所以不需要包含任何头文件，它的功能是计算一个数据类型的大小，单位为字节
*  sizeof的返回值为size_t
*  size_t类型在32位操作系统下是unsigned int，是一个无符号的整数
*/
int main()
{
	int a;
	int b = sizeof(a); //sizeof得到指定值占用内存的大小，单位：字节
	printf("%d\n", b);
	
	size_t c = sizeof(a);
	printf("c = %u\n", c); //用无符号数的方式输出C的值
	
	return 0; 
 } 
