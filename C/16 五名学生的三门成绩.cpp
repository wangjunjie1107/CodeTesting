#include<stdio.h>
#include<math.h>

int main()
{
	int arr[5][3];
	int i;
	int j;
	
	printf("��ֱ���������ѧ��������ѧ�Ƴɼ���"); 
	
	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	//�ɼ���ӡ������£�
	printf("�ɼ���ӡ������£�\n"); 
	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	//ÿ��ѧ����ƽ���ɼ�
	
	 for(i=0 ; i<5 ; i++)
	{
		int sum=0;
		for(j=0 ; j<3 ; j++)
		{
			sum+=arr[i][j];
		}
		sum/=3; 
		printf("��%d��ѧ����ƽ���ɼ�Ϊ��%d\n", i+1, sum);
	}
	
	printf("\n");
	//ÿ�ſε��ܳɼ�
	
	 for(i=0 ; i<3 ; i++)
	{
		int sum=0;
		
		for(j=0 ; j<5 ; j++)
		{
			sum+=arr[j][i];
		}
		sum/=5; 
		printf("��%d�ſε�ƽ���ɼ�Ϊ��%d\n", i+1, sum);
	} 
	
	return 0;
 } 
