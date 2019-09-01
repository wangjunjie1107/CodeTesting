#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	unsigned char a = 1;
	unsigned char c = 2;
	unsigned char b = ~a;

	printf("%u\n", b);  //254 非
	printf("%u\n", a & c);   //0  与
	printf("%u\n", a | c);  //3 或
	printf("%u\n", a ^ c); //3  异或


	int i = 10;
	int k = 20;

	//左移一位相当于乘以2
	i = i << 2;

	//右移一位相当于除以2 
	k = k >> 2; 

	
	printf("i = %d\n", i);
	printf("k = %d\n", k);



	system("pause");
	return EXIT_SUCCESS;
}
