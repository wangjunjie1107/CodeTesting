#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int test(int value, int n_bits)
{
	int count = 0;//计算值中位数为1的个数
	while (n_bits > 0)
	{
		count += value & 1;
		value >>= 1;
		n_bits -= 1;
	}
	return (count % 2) == 0; //如果计数器的最低位是0，返回true 表示1的位数为偶数个
}
int main() 
{
	int a = test(2, 2);
	printf("%d\n", a);
	system("pause");
	return EXIT_SUCCESS;
}
