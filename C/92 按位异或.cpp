#include<stdio.h>

int main()
{
	//利用按位异或实现两个数的交换
	
	int num1 = 10; 
	int num2 = 30; 
	
	printf("交换前：\n");
	printf("%d\n",num1);
	printf("%d\n",num2);
	
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	
	printf("交换后：\n");
	printf("%d\n",num1);
	printf("%d\n",num2);
	 
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	
	printf("再次交换：\n");
	printf("%d\n",num1);
	printf("%d\n",num2);
}
