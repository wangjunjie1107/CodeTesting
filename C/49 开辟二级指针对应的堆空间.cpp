#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	//int arr[5][3];
	//���ٶ���ָ���Ӧ�Ķѿռ� 
	int** p = (int**)malloc(sizeof(int*)*5);
	
	for(int i = 0; i<5; i++)
	{
		//����һ��ָ���Ӧ�Ķѿռ�  
		p[i] = (int*)malloc(sizeof(int)*3);	
	}
	
	for(int i = 0; i<5; i++)    //��ֵ 
	{
		for(int j = 0; j<3; j++)
		{
			scanf("%d", &p[i][j]);
		}
	}
	
	for(int i = 0; i<5; i++)     //ȡֵ 
	{
		for(int j = 0; j<3; j++)
		{
			printf("	%d", p[i][j]);
		}
		printf("\n");
	 } 
	 
	 //�ͷ�
	 for(int i = 0; i<5; i++)
	 {
	 	free(p[i]);   //�ͷ��ڲ�ռ� 
	 }
	 free(p);  //�ͷ����ռ� 
	 
	 return 0; 
 } 
