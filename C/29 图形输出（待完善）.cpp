#include<stdio.h>  //�޷�˳����� 

int main()
{
	int i;
	int k;
	int j;
	char c;
	
	scanf("%d", &i);
	scanf("%c", &c);

	for(k=1; k<=i; k++)   //��ӡ��һ�� 
	{
		printf("%c", c);
	}
	
	printf("\n");
	
	for(k=2; k<i; k++)  //��ӡ��2--��i-1���� 
	{
		for(j=1; j<=i; j=j*2)
		{
			printf("%c", c);
		}
		printf("\n");
	}
	
	for(k=1; k<=i; k++)   //��ӡ���һ�� 
	{
		printf("%c", c);
	}
	
	return 0; 
}
