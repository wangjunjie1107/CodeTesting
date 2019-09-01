#include<stdio.h>

int main()
{
	int index = 0;
	
	while(index < 100)
	{
			
		index++;
		// 7的倍数  数字中带7 
		if(index % 7 == 0 || index % 10 == 7 || index / 10 == 7)
		{
			printf("数字： %d\n", index);
		} 
	
	}
	
	return 0;
 } 
