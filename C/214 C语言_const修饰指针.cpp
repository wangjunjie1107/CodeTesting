#include<stdio.h>

int main()
{
	int a = 100;
	int b = 200;
	
	const int *p1; //指针指向的内存区域不能修改，指针的指向可以变
	int const *p2; //同上
	 
	p1 = &a;  	//让p1指向a的内存区域，此时a的值不可改变 
	//*p1 = 1000; //error
	p1 = &b; //但是可以改变p1的指向
	
	int * const p3 = &b;//指针指向的内存区域可以修改，但是指针的指向一旦确定，不能修改
	
	*p3 =  3000; //可以修改p3指向的内存区域的值
	//p3 = &a; //error 不能修改p3的指向 
	
	const int * const p4 = &b; //既不能修改指向，也不能修改内存地址的值 
	return 0; 
	
	
 } 
