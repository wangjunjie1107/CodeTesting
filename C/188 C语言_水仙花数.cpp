#include<stdio.h>

int main()
{
	int index = 100;
	
	while(index <1000)
	{
		int a = index / 100;   //百位 
		int b = index / 10 - a * 10;  //十位  b = index / 10 % 10
		int c = index / 1 - a * 100 -b * 10;  //个位   c = index % 10 
		
		if(a*a*a + b*b*b + c*c*c == index)
		{
			printf("数字%d是水仙花数。\n", index);
		} 
		
		index++;
	}
	
	return 0;
 } 
