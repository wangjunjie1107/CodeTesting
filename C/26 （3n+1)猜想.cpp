#include<stdio.h>

int main01()  //��д�� 
{
	int i;
	int step=0;
	 
	printf("������һ��1000����������");
	scanf("%d", &i);
	
	while(i>1000)
	{
		printf("����������������롣"); 
		break;
	}
	  	 
	while(i!=1 && i<1000)
	{
		if(i%2==0)
		{
			i/=2;
			
		}
		else if(i%2==1)
		{
			i=(3*i+1)/2;
		}
		step++;
	}
	printf("���������1��Ҫ %d ����\n", step); 
	return 0;
}
	

int main()  //�鱾�� 
{
	int i,step=0;
	scanf("%d", &i);
	while(i!=1)
	{
		if(i%2==0) i/=2;
		else i=(3*i+1)/2;
		step++;
	}
	printf("%d\n", step);
	return 0;
}

