#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int a;
	int b;
	int c;
	int count = 1;
	
	scanf("%d%d%d", &a, &b, &c); 
	while(!(a == 0 && b == 0 && c == 0))
	{
		
		double res = (double)a / b;
		
		//精确的位数大于6位 
		if(c >= 6)
		{
			printf("Case %d: %f", count, res);
			for(int i = c - 6; i > 0; --i)
			{
				printf("0");
			}
			printf("\n");
		}
		
		//精确的位数小于6位
		if(c == 5) printf("Case %d: %.5f\n", count, res); 
		if(c == 4) printf("Case %d: %.4f\n", count, res); 
		if(c == 3) printf("Case %d: %.3f\n", count, res); 
		if(c == 2) printf("Case %d: %.2f\n", count, res); 
		if(c == 1) printf("Case %d: %.1f\n", count, res); 

		
		++count; 
		scanf("%d%d%d", &a, &b, &c);
	}
	
	return 0;
} 
