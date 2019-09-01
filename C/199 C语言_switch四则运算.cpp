#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//函数声明 
extern float add(float a, float b);
extern float sub(float a, float b);
extern float dive(float a, float b);
extern float mlt(float a, float b);
 
int main()
{
	float a,b;	//计算式 
	char c; 	//符号 
	float value;
	
	printf("请输入计算式：");
	scanf("%f%c%f", &a, &c, &b); 
	
	switch(c) 
	{
		case '+' : 
			value = add(a, b);
			printf("%0.2f + %0.2f = %0.2f", a,b,value);
			break;
			
		case '-' : 
			value = sub(a, b);
			printf("%0.2f - %0.2f = %0.2f", a,b,value);
			break;
			
		case '*': 
			value = mlt(a, b);
			printf("%0.2f * %0.2f = %0.2f", a,b,value);
			break;
			
		case '/' : 
			if(b == 0)
			{	
				printf("0不能作为除数\n");
				break;
			}
			value = dive(a, b);
			printf("%0.2f ÷%0.2f = %0.2f", a,b,value);
			break;
		
		default:printf("输入错误");	
	}
	
	return 0;
	
 } 
 
 
//函数定义
float add(float a, float b)
{
	return a + b;
} 

float sub(float a, float b)
{
	return a - b;
} 
float dive(float a, float b)
{
	return a / b;
} 
float mlt(float a, float b)
{
	return a * b;
}  
