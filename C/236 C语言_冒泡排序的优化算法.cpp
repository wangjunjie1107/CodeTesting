#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void bubble(int *arr, int len)
{
	int flag = 1;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				flag = 0;
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		if (flag)   
			return;
		flag = 1;
	}
}
int main()
{
	int arr[] = { 5,3,1 };
	bubble(arr,3);

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr[i]);
	}
	//system("pause");
	return EXIT_SUCCESS;
}
