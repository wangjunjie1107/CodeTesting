#include<stdio.h>
#include<limits.h>  //���б�ʾ���ͣ���int��char���ͣ���С��ֵ 
#include<float.h>  //���б�ʾfloat��double���ʹ�С��ֵ 

int main()
{
	printf("The value of INT_MAX is %i\n", INT_MAX);
	printf("The value of INT_MIN is %i\n", INT_MIN);
	printf("AN int takes %d bytes\n", sizeof(int));
	
	printf("The value of FLT_MAX is %f\n", FLT_MAX);
	printf("The value of FLT_MIN is %f\n", FLT_MIN);
	printf("A float tales %d bytes\n", sizeof(float));
	
	
	return 0;
} 
