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
	int val_a = 100; //在函数A，B中可以使用，在main中使用不了
	B(val_a);
}




int main()
{
	int val_m = 200; //在main函数和A、B中都可以使用

	A();   // 100

	B(val_m); // 200


	system("pause"); 
	return EXIT_SUCCESS;
}


