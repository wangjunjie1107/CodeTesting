#include<stdlib.h>
#include<stdio.h>
#include<time.h>


int main()
{

	srand((int)time(NULL)); //设置随机数种子 
	
	int c = rand();//得到随机数种子 
	
	printf("%d", c);
	
	return 0;
 } 
