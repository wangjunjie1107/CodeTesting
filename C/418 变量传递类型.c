#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


void B(int val_b)
{
	printf("val_b = %d\n", val_b);
}

void A()
{
	int val_a = 100; //�ں���A��B�п���ʹ�ã���main��ʹ�ò���
	B(val_a);
}




int main()
{
	int val_m = 200; //��main������A��B�ж�����ʹ��

	A();   // 100

	B(val_m); // 200


	system("pause"); 
	return EXIT_SUCCESS;
}


