#include<stdio.h>

int main()
{
	int a[5][3];
	
	//¼��ɼ� 
	for(int i = 0; i < 5; i++)
	{
		printf("����¼���%d��ѧ���ĳɼ�\n", i+1);
		for(int j = 0; j < 3; j++)
		{
			switch(j)
			{
				case 0: printf("���������ĳɼ�: \n");
						scanf("%d", &a[i][j]);
						break;
				case 1: printf("��������ѧ�ɼ�: \n");
						scanf("%d", &a[i][j]);
						break;
				case 2: printf("������Ӣ��ɼ�: \n");
						scanf("%d", &a[i][j]);
						break;
			}
		}
	}
	
	//ƽ���ɼ� 
	
	for(int i = 0; i < 5; i++)
	{
		int stusum = 0;
		
		for(int j = 0; j < 3; j++)
		{
			stusum += a[i][j];
		}
		
		printf("��%d��ѧ����ƽ���ɼ�Ϊ%d\n", i+1, stusum/3);
	}
	
	//ѧ��ƽ���ɼ�
	int sum1 = 0, sum2 = 0, sum3 = 0;

	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			switch(j)
			{
				case 0:sum1 += a[i][j];break;
				
				case 1:sum2 += a[i][j];break;
				
				case 2:sum3 += a[i][j];break;
			}	
		}
	}
	
	printf("����ƽ���ɼ�Ϊ��%d\n",sum1); 
	printf("��ѧƽ���ɼ�Ϊ��%d\n",sum2); 
	printf("Ӣ��ƽ���ɼ�Ϊ��%d\n",sum3); 
	
	
	return 0;
 } 
