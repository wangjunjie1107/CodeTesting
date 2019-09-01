#include<stdio.h>

int main()
{
	int a = 12;
	int b = 20;
	
	float c;
	float d;
	
	d = a / b; //未强制转换 
	c = (float)a / (float)b;  //强制类型转化
	
	printf("未强制转换： %f\n",d);
	printf("强制转换： %f\n", c);
	
	
	return 0; 
 } 
