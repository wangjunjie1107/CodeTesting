#include<stdio.h>

#define PI 3.141592654 
 //����ʱ�滻 ϰ�����ô�д��ʾ���ų���  

int main(void)
{
	float area, circum, radius;  //��� �ܳ� �뾶 
	
	printf("What is the radius of your pizza?\n");
	scanf("%f", &radius);
	area = PI * radius * radius;
	circum = 2.0 * PI * radius;
	printf("Your basic pizza parameters are as follows:\n");
	printf("circumference = %1.2f, area = %1.2f\n", circum, area);
	
	
	return 0;
	
}
