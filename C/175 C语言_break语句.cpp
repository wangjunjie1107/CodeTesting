/*
break��䣺
 
 	����������switch���������ʱ����������ֹĳ��case������switch�ṹ��
	����������ѭ������У�������������ǰ��ѭ����䣬ִ�к���Ĵ��롣
	����������Ƕ��ѭ������У������������ѭ����䣬ִ�к���Ĵ��롣

*/ 

#include<stdio.h>

int main()
{
	int i = 0;
	while(1)
	{
		i++;
		printf("i = %d\n",i);
		
		if(i == 10)
		{
			break; //����whileѭ�� 
		}
	}
	
	int flag = 0;
	int m = 0;
	int n = 0;
	
	for(m = 0; m < 10; m++)
	{
		for(n = 0; n < 10; n++)
		{
			if(n == 5)
			{
				flag = 1;
				break; //�����ڲ�ѭ�� 
			}
		}
		
		if(flag == 1)
		{
			break; //����for(m = 0; m < 10; m++)	
		} 
	}
	
	return 0;
 } 
