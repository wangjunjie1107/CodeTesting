#include<stdio.h>

int main()
{
	int index = 0;
	
	while(index < 100)
	{
			
		index++;
		// 7�ı���  �����д�7 
		if(index % 7 == 0 || index % 10 == 7 || index / 10 == 7)
		{
			printf("���֣� %d\n", index);
		} 
	
	}
	
	return 0;
 } 
