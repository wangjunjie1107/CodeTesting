#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
	//�������������
	srand((unsigned int)time(NULL));
	int num = rand()%1000+1; // ������� 1-1000 ֮�� 
	
	int value;
	
	printf("������һ�����֣�"); 
	while(1)
	{
		scanf("%d",&value);
		
		if(value < 0|| value > 1000)
		{
			printf("�������\n");
		}
		
		else if(value > num)
			printf("���������̫����\n");
			
		else if (value < num)
			printf("���������̫С��\n");
			
		else
		{
			printf("��ϲ�����н���~\n");
			break;
		}
		
		printf("��������룺"); 
	 } 
	 
	 return 0;
}
