#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>

//�������������ֵ
void CreateNumber(int *arr)
{
	
	//���������
	srand((int)time(NULL)); 
	
	printf("����ǰ��\n");
	 
	for(int i = 0; i < 20; i++)
	{
		//��ֵ���� 
		arr[i] = rand()%101;  // 1-100
		printf("%d\t", arr[i]); //��ӡ����ǰ������ 
	} 
	printf("\n\n");
} 

//ð������ 
void bubblesort(int * arr)
{
	for(int i = 0; i < 19; i++)
	{
		for(int j = 0; j < 19 - i; j++)
		{
			//��С�������� 
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp; 
			}
		}
	 } 
}


int main()
{
	
	int arr[20];
	
	
	//1 ���������������ֵ 
	CreateNumber(arr); 
	
	//2 ��ð������ 
	bubblesort(arr); 
	
	//3����ӡ�������� 
	printf("�����\n");
	for(int i = 0; i < 20; i++)
	{ 
		printf("%d\t", arr[i]); //��ӡ���������� 
	} 
	
	return 0; 
}
