#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define MAX 3

int main()
{
	//��������� 
	srand((unsigned int)time(NULL));
	
	//���ٶѿռ� 
	int *p = (int *)malloc(sizeof(int) * MAX);
	
	
	//��ֵ ��ӡ����ǰ������
	printf("��ӡ����ǰ�����飺\n");
	for(int i = 0; i < MAX; i++)
	{
		p[i] = rand()%99;
		printf("%d\n", p[i]); 
	}
	
	//ð������
	for(int i = 0; i < MAX - 1; i++)
	{
		for(int j = 0;  j < MAX - i - 1; j++)
		{
			//��С�������� 
			if(*(p + j) > *(p + j + 1))
			{ 
				int  temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp; 
			} 
		}
	} 
	
	//��ӡ����������
	printf("�����\n"); 
	for(int k = 0; k < MAX; k++)
	{
		printf("%d\n", *(p + k));
	}
	
	
	free(p);  //ʹ������ͷŶѿռ� 
	
	return 0;
}
