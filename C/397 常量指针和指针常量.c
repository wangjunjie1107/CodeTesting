#include<stdio.h>

int main()
{
	int value1 = 10;
	int value2 = 20;
	
	const int * a = &value1; //����ָ�� const����int *,��ָ��ָ���ֵ������ָ��ָ���ֵ�������޸ģ�����ָ��ķ�������޸� 
	
	int * const b = &value2; //ָ�볣��  const����ָ�룬ָ���ָ�򲻿����޸�  
 
 	//����ָ�� 
 	//a = 200; //�������޸�ֵ
 	int value3 = 100;
	a = &value3; //�����޸�ָ���ָ�� 
 	printf("����ָ�룺a = value3 = %d\n",*a);
 	
 	
 	//ָ�볣��
	*b = 200;  //�����޸�ֵ
	printf("ָ�볣����b = %d\n",*b); 
	//b = &value3;// �������޸�ָ��ķ��� 
 	
 	
 	return 0;
 } 
 
