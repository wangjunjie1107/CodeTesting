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
	
	printf("������Ҫ��׳˵�һ�������� ");
	scanf("%d", &i);
	
	printf("%d�Ľ׳˽��Ϊ�� %d\n", i, fact(i)); 
	getchar();

	return 0;
}
