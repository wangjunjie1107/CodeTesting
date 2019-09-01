#include "STD.c"

int * B()
{
	int a = (int)malloc(sizeof(int)); //堆区创建 在主函数和A中都可以使用 
	
	a = 10;
	printf("函数B中a = %d\n", a);
	
	return &a;
}

void A(int *A)
{
	A = 100;
	printf("A = %d\n", A); 
	int b; //在函数A、B中可以使用，在main中使用不了
 
	
	int * p = 	B(); //接收a的地址 
	printf("函数A中 a = %d\n", *p);
} 

int main()
{
	int a; //在main函数和A 、B中都可以使用
	
	A(&a); 
	
	int * p = B(); //接收a的地址 
	printf("主函数中 a = %d\n", *p);
	return 0;
}


