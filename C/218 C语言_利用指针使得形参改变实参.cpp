#include<stdio.h>

void swap(int * p, int * q);
 
int main()
{
	int a = 10;
	int b = 20;
	
	int *p = &a;
	int *q = &b;
	
	swap(p,q); //将a和b的地址传递给函数
	
	printf("a = %d\nb = %d\n", a , b);//形参改变实参 
	return 0; 
}

void swap(int *p, int *q)
{
	//值交换 
	int temp = *p;
	*p = *q;
	*q = temp;
	
	//因为传递的是地址，所以形参可以改变实参 
 } 
