/*
break语句：
 
 	当它出现在switch条件语句中时，作用是终止某个case并跳出switch结构。
	当它出现在循环语句中，作用是跳出当前内循环语句，执行后面的代码。
	当它出现在嵌套循环语句中，跳出最近的内循环语句，执行后面的代码。

*/ 

#include<stdio.h>

int main()
{
	int i = 0;
	while(1)
	{
		i++;
		printf("i = %d\n",i);
		
		if(i == 10)
		{
			break; //跳处while循环 
		}
	}
	
	int flag = 0;
	int m = 0;
	int n = 0;
	
	for(m = 0; m < 10; m++)
	{
		for(n = 0; n < 10; n++)
		{
			if(n == 5)
			{
				flag = 1;
				break; //跳处内层循环 
			}
		}
		
		if(flag == 1)
		{
			break; //跳出for(m = 0; m < 10; m++)	
		} 
	}
	
	return 0;
 } 
