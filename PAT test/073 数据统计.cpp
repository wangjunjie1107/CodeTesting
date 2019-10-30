#include<stdio.h>
#define INF 1000000000 
int main()
{
	int x = 0;
	int max = -INF;	
	int min = INF;
	int count = 0;
	
	//判断 x 输入的返回值，为了程序的鲁棒性 
	while(scanf("%d", &x) == 1 && x)
	{
		int sum = 0;
		
		
		for(int i = 0; i < x; ++i)
		{
			int temp = 0;
			scanf("%d", &temp);	
	
			sum += temp;
			if(temp > max) max = temp;
			if(temp < min) min = temp;
		}
		
		if(count) printf("\n");	//每组数据以空行隔开
		 
		printf("Case %d: %d %d %.3f\n", ++count, min, max, (double)sum / x);	
	} 
	
	return 0;
} 
