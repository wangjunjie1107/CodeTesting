#include<stdio.h>

#define PI 3.141592654 
 //编译时替换 习惯上用大写表示符号常量  

int main(void)
{
	float area, circum, radius;  //面积 周长 半径 
	
	printf("What is the radius of your pizza?\n");
	scanf("%f", &radius);
	area = PI * radius * radius;
	circum = 2.0 * PI * radius;
	printf("Your basic pizza parameters are as follows:\n");
	printf("circumference = %1.2f, area = %1.2f\n", circum, area);
	
	
	return 0;
	
}
