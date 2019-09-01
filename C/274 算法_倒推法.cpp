#include<stdio.h>
#define FETCH 1000
#define RATE 0.0171

int main()
{
	double a[49];
	int i;
	
	a[48] = (double)FETCH;
	

	for(i = 47; i > 0; i--)
	{
		a[i] = (a[i + 1] + FETCH) / (1 + RATE / 12); 
	}
	
	for(int j = 48; j > 0; j--)
	{
		printf("第%d月末本利合计：%.2f\n", j, a[j]);
	}
	getchar();
	return 0;
 } 	
 
