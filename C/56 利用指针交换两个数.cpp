#include<stdio.h>

// ����ָ�뽫��ַ���͸�interchange()������
//ʹ�õ�������ַ�ڵ�ֵʱ��ֱ���ڵ�ַ������
//  ������ͨ�� �������� ֱ�Ӹı��� ������ �е�ʵ�ε�ֵ 

void interchange(int *u, int *v); 

int main()
{
	int x = 5, y = 10;
	printf("����ǰ x = %d, y = %d\n\n", x, y);
	interchange(&x,&y);  //�ѵ�ַ������������
	
	printf("������ x = %d, y = %d", x,y);
	
	return 0; 
	
 } 
 
 void interchange(int *u, int *v)
 {
 	int temp;
 	temp = *u;  //temp ��� u ��ָ��Ķ����ֵ 
 	*u = *v;
 	*v = temp;
 }
