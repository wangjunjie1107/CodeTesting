#include<stdio.h>

int main()
{
	//��ͳ������ֵ
	float a = 3.14f; //�� 3.14F
	double b = 3.14;
	
	printf("a = %0.2f\n", a);
	printf("b = %lf\n", b);
	
	//��ѧ��������ֵ
	a = 3.2e3f; //3.2*1000 = 3200�� eҲ����д��E
	printf("a1 = %f\n", a);
	
	a = 100e-3f; //100*0.001 = 0.1
	printf("a2 = %f\n", a);
	
	a = 3.141592654f;
	printf("a3 = %f\n", a); //���Ϊ3.141593
	
	return 0; 
 } 
