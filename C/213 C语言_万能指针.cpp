#include<stdio.h>

int main()
{
	//void *ָ�����ָ������������ڴ�ռ䣺 
	void *p = NULL;
	
	int a = 10;
	p = (void *)&a; //ָ�����ʱ�����ת��Ϊvoid
	
	//ʹ��ָ�����ָ����ڴ�ʱ��ת��Ϊint*
	*((int *)p) = 11;  //�ı���a��ֵ 
	
	
	printf("a = %d\n", a);
	
	return 0;
 } 
