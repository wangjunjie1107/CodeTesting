#include<stdio.h>

/*

		自动转换(隐式转换)：遵循一定的规则,由编译系统自动完成。

		强制类型转换：把表达式的运算结果强制转换成所需的数据类型。

		类型转换的原则：占用内存字节数少(值域小)的类型，向占用内存字节数多(值域大)的类型转换，以保证精度不降低。
*/ 

//隐式转换 
int SecretTransport()
{
	int num = 5;
	printf("s1 = %d\n", num/2);
	printf("s2 = %lf\n", num/2.0);
	
	return 0;
}

//显式转换 
int  OutsideTransport()
{
	float x = 0;
	int i = 0;
	
	x = 3.6f;
	
	i = x; //x 为实型， i为整型，直接赋值会有警告
	i = (int)x; //使用强制类型转换
	
	printf("x = %f, i = %d\n", x, i);
	
	return 0; 
 } 
 
 int main()
 {
 	SecretTransport();
 	OutsideTransport();
 	return 0;
 }
