#include<stdio.h>

int main()
{
	int a ;
	int b ;
	int c ;
	
	printf("��������������");
	scanf("%d%d%d", &a, &b, &c);
	 
	//������Ŀ������������� 
	int d = a > b ? (a > c ? a : c) : (b > c ? b : c);
	
	printf("�����Ϊ��%d\n", d);
	
	return 0; 
 }  
