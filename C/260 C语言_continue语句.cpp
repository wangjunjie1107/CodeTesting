#include<stdio.h>

int main()
{
	
	int j;
	
	for(int i = 0; i < 1; i++)
	{
		j = 0;
		
		if(j == 0)
		{
			continue;
			
		}
		
		j++;//continue 立即执行下一次循环
			//不会使得j++执行 
	}
	
	printf("%d\n", j);
	
	return 0;
 } 
