#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 10  //֮�����Ҫ�ı������С��ֱ��������ı� 


int main()
{
	int index,score[SIZE];
	int sum = 0;
	float average;
	
	//�������֣����������֤�Ƿ�������ȷ 
	printf("Please enter %d golf scores:\n", SIZE);
	for(index=0; index<SIZE; index++)
	{
		scanf("%d", &score[index]);
	}
	printf("The scores read in are as follows:\n"); 
	for(index=0; index<SIZE; index++)
	{
		printf("%5d", score[index]); //�������ֵ�ٴ�ӡһ�� 
	}
	printf("\n"); 
	//��� ��ƽ��ֵ
	for(index=0; index<SIZE; index++)
	{
		sum+=score[index]; 
	}
	average = (float) sum / SIZE;
	printf("Sum of scores = %d, average = %.2f\n", sum,average);
	
	
	return 0;
	 
	
}
