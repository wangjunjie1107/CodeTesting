#include<stdio.h>
#include<time.h>  
#include<stdlib.h>
//   �����������Ҫ��ͷ�ļ�  time.h  stdlib.h 
//   ������������
//   ��ȡ����� 
//��������   system("cls") 
int main() 
{
	srand((unsigned int )time(NULL));//ÿ�λ�ȡ�����������һ��
	int num;
	int value=rand() % 100;
	for(;;)
	{
		printf("���������֣�"); 
		scanf("%d",num);
		if(value>num)
		{
		  printf("���������̫���ˣ�\n");
	    }
		else if(value<num)
		{
			printf("���������̫С�ˣ�\n"); 
		} 
		else
		{
			printf("���¶��ˣ�\n");
			break;
		}
	} 
	return 0;	
} 
