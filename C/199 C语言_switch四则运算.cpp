#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//�������� 
extern float add(float a, float b);
extern float sub(float a, float b);
extern float dive(float a, float b);
extern float mlt(float a, float b);
 
int main()
{
	float a,b;	//����ʽ 
	char c; 	//���� 
	float value;
	
	printf("���������ʽ��");
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
				printf("0������Ϊ����\n");
				break;
			}
			value = dive(a, b);
			printf("%0.2f ��%0.2f = %0.2f", a,b,value);
			break;
		
		default:printf("�������");	
	}
	
	return 0;
	
 } 
 
 
//��������
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
