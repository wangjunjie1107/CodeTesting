#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
 
int main()
{
	int a[11] = {84, 119, -2, 12, 34, -7, 39, 81, 668, 502, 170};
	
	//需要进行 n - 1 趟排序 
	for(int i = 1; i < 11 - 1; ++i)
	{
		//每趟排序需要比较 11 - i 次 
		for(int j = 0; j < 11 - i; ++j)
		{
			if(a[j] > a[j + 1])
			{
				//交换 
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp; 
			}
		}
	} 
	
	for(int i = 0; i < 11; ++i)
	{
		if(i != 0)
		{	
			//除了输出的第一位，其他数之后跟一个空格，最后一个数除外 
			printf(" ");
		} 
		printf("%d", a[i]);
	} 
	printf("\n");	//最后一个数之后，直接换行
	
	 
	return 0;
} 
