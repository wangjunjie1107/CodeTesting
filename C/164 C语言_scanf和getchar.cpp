#include<stdio.h>

int main()
{
	char ch1;
	char ch2;
	char ch3;
	
	int a;
	int b;
	
	printf("������ch1���ַ���");
	ch1 = getchar();
	printf("ch1 = %c\n", ch1);
	
	getchar(); 
	
	printf("������ch2���ַ���");
	ch2= getchar();
	printf("ch2 = %c\n", ch2);
	
	getchar(); 
	
	printf("������ch3���ַ���");
	scanf("%c", &ch3);
	printf("ch3 = %c\n", ch3);
	
	printf("������a��ֵ�� ");
	scanf("%d", &a);
	printf("a = %d\n", a);
	
	printf("������b��ֵ��");
	scanf("%d",&b);
	printf("b = %d\n", b);
	
	
	return 0; 
 } 
