
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void Bubble(int arr[], int len)
{
	for (int i = 0; i < len-1; i++)
	{
		//��һ��������������
		//�ڶ��������������� ��1����Ϊ�Ѿ��ҳ��������
		//ÿ�ζ���һ��ֱ����������� 
		for (int j = 0; j < len - 1 - i; j++)   
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return;
}

int main()
{

	int arr[] = { 3,5,2,7,9,122,1,8,10,4,6 };

	Bubble(arr, 11);


	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}


	system("pause");
	return EXIT_SUCCESS;
}
