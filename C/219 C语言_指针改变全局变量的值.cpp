#include<stdio.h>

int a = 10; //ȫ�ֱ���

int *getA()
{
	return &a;
}

extern int getA(int a);

 
int main()
{
	*(getA()) = 111;  //�ı���ȫ�ֱ�����ֵ 
	
	printf("a = %d\n", a);
	
	getA(a);
	return 0;
}


int getA(int a)
{
	printf("a = %d", a);
	
} 
