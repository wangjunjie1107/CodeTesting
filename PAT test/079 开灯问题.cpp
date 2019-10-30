#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int maxn = 1005;
 
int main()
{
	int n;
	int k;
	int first = 1;
	
	int array[maxn] = { 0 };
	
	scanf("%d%d", &n, &k);
	for(int i = 1; i <= k; ++i)
	{
		for(int j = 1; j <= n; ++j)
		{
			//如果是倍数的话，就将值做一个相反输出 
			if(j % i == 0)
			{
				array[j] = !array[j];
			}
		}
	}
	
	for(int i = 1; i <= n; ++i)
	{
		if(array[i])
		{
			//加入标志位，第一个数之前不输入空格，之后都输入
			//最后一个数之后，直接跟换行 
			if(first) 
			{
				first = 0;
			}
			else
			{
				printf(" ");
			}
			
			printf("%d", i);
		}
	}
	printf("\n");
	 
	return 0;
} 
