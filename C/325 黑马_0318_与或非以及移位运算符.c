#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	unsigned char a = 1;
	unsigned char c = 2;
	unsigned char b = ~a;

	printf("%u\n", b);  //254 ��
	printf("%u\n", a & c);   //0  ��
	printf("%u\n", a | c);  //3 ��
	printf("%u\n", a ^ c); //3  ���


	int i = 10;
	int k = 20;

	//����һλ�൱�ڳ���2
	i = i << 2;

	//����һλ�൱�ڳ���2 
	k = k >> 2; 

	
	printf("i = %d\n", i);
	printf("k = %d\n", k);



	system("pause");
	return EXIT_SUCCESS;
}
