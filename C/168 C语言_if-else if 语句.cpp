#include<stdio.h>

int main()
{
	unsigned int a;
	scanf("%u", &a);
	
	if(a < 10)
	{
		printf("��λ\n");
	}
	else if(a < 100)
	{
		printf("ʮλ\n");
	}
	else if(a < 1000)
	{
		printf("��λ\n");
	}
	else
	{
		printf("�ܴ�\n");
	}
	
	return 0;
}
