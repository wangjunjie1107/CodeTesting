#include<stdio.h>

int main()
{
	int x = 0;
	int max = 0;
	int min = 0;
	int sum = 0;
	int n = 0; 
	 
	//当下一个输入为数字的时候，继续循环 
	while(scanf("%d", &x) == 1) 
	{
		//总和 
		sum += x;
		
		if(x > max) max = x;	//最大值 
		
		if(x < min) min = x;	//最小值 
		
		//计数 
		++n;	 
	}
	
	printf("%d %d %.3f\n", min, max, (double)(sum / n));
	
	return EXIT_SUCCESS;
} 
