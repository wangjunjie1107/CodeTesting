#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int test(int value, int n_bits)
{
	int count = 0;//����ֵ��λ��Ϊ1�ĸ���
	while (n_bits > 0)
	{
		count += value & 1;
		value >>= 1;
		n_bits -= 1;
	}
	return (count % 2) == 0; //��������������λ��0������true ��ʾ1��λ��Ϊż����
}
int main() 
{
	int a = test(2, 2);
	printf("%d\n", a);
	system("pause");
	return EXIT_SUCCESS;
}
