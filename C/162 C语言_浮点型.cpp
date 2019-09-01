#include<stdio.h>

int main()
{
	//传统方法赋值
	float a = 3.14f; //或 3.14F
	double b = 3.14;
	
	printf("a = %0.2f\n", a);
	printf("b = %lf\n", b);
	
	//科学计数法赋值
	a = 3.2e3f; //3.2*1000 = 3200， e也可以写成E
	printf("a1 = %f\n", a);
	
	a = 100e-3f; //100*0.001 = 0.1
	printf("a2 = %f\n", a);
	
	a = 3.141592654f;
	printf("a3 = %f\n", a); //结果为3.141593
	
	return 0; 
 } 
