#include<stdio.h>


//ʹ��ѭ��Ƕ�״�ӡ�������


int main()
{

	int i, j, a[11][11];
	
	for(i = 1; i < 11; i++)
	{
		a[i][i] = 1;   //�Խ���Ԫ��ȫΪ1	 
		a[i][1] = 1;  //ÿ�е�һ��Ԫ��ȫΪ1 
	}	
	
	
	//forѭ���ӵ����е��ڶ���
	for(i = 3; i < 11; i++)
		for(j = 2; j <= i - 1; j++)
			a[i][j] = a[i-1][j-1] + a[i-1][j];   //��i�е�j�е��ڵ�i-1�е�j-1�е�ֵ���ϵ�i-1�е�j�е�ֵ
			
			
	for(i = 1; i < 11; i++)
	{
		for(j = 1; j <= i; j++)
			printf("%4d",a[i][j]);
		
		printf("\n");
	}
	
	
	return 0;
} 
