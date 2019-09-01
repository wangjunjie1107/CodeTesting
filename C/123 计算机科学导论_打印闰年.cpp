#include<stdio.h>

int main()
{
	int i = 1900; //年数 
	int j, k, p;  //余数 
	
	while(i < 2001)
	{
		//判断年数是否能被整除 
		j = i % 4;
		k = i % 100;
		p = i % 400;
	
		if(j == 0 && k != 0)  //能被4整除但不能被100整除
			printf("   %d\n", i);
		else if(k == 0 && p == 0) //能被100整除且能被400整除
			printf("   %d\n", i);
			
		i++;
	}
	
	return 0;
	 
 } 
