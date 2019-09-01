#include<stdio.h>

int main()
{
	int arr[] = {22,11,20,18,2};
	
	int size = sizeof(arr) / sizeof(int);
	
	int i,j;
	int temp;
	for(i = 0; i < size; i++)
	{
		for(j = i + 1; j < size; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		printf("arr[%d] = %d\n", i + 1, arr[i]); 
	}
	
	
	return 0; 
 } 
