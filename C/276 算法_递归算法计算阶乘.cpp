#include<stdio.h>

int fact(int i)
{
	if(i <= 1)
		return 1;
	else
		return i * fact(i - 1);
} 


int main()
{
	int i;
	
	printf("请输入要求阶乘的一个整数： ");
	scanf("%d", &i);
	
	printf("%d的阶乘结果为： %d\n", i, fact(i)); 
	getchar();

	return 0;
}
