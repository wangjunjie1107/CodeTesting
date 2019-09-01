#include<stdio.h>

int main()	
{
	int a1,a2,a3,a4,a5;
	long multi, result;
	
	for(a1 = 1; a1 <= 9; a1++)
	{
		for(a2 = 0; a2 <= 9; a2++)
		{
			for(a3 = 0; a3 <= 9; a3++)
			{
				for(a4 = 0; a4 <= 9; a4++)
				{
					for(a5 = 0; a5 <= 9; a5++)
					{
						multi = a1 * 10000 + a2 * 1000 + a3 * 100 + a4 * 10 + a5;
						result = a5 * 100000 + a5 * 10000 + a5 * 1000 + a5 * 100 + a5 * 10 + a5;				
						
						if(multi * a1 == result)
						{
							printf("\n%5d%2d%2d%2d%2d\n", a1, a2, a3, a4, a5);
							printf("X%12d\n", a1);
							printf("_____________\n");
							printf("%3d%2d%2d%2d%2d%2d\n", a5, a5, a5, a5, a5, a5);
						 } 
					}
					
				}
			}	
		}
	}
	
	return 0;
 } 
