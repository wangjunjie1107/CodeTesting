#include<stdio.h>

int main()
{
	int arr[] = {1,2,3};
	
	int a = 0;
	int b = sizeof(arr) / sizeof(arr[0]) - 1;
	
	while(b > a)
	{
		int temp = arr[0];
		arr[0] = arr[b];
		arr[b] = temp;
		
		a++;
		b--;
	}
	
	for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\n",arr[i]);
	}
	
	return 0;
 } 
