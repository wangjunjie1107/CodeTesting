#include<stdio.h>

int main()
{
	//���ð�λ���ʵ���������Ľ���
	
	int num1 = 10; 
	int num2 = 30; 
	
	printf("����ǰ��\n");
	printf("%d\n",num1);
	printf("%d\n",num2);
	
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	
	printf("������\n");
	printf("%d\n",num1);
	printf("%d\n",num2);
	 
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	
	printf("�ٴν�����\n");
	printf("%d\n",num1);
	printf("%d\n",num2);
}
