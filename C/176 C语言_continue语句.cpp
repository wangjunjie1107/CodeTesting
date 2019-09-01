#include<stdio.h>

//   在循环语句中，如果希望立即终止本次循环，
//并执行下一次循环，此时就需要使用continue语句。 
int main()
{
	int sum = 0;
	
	for(int i = 1; i <= 100; i++)
	{
		if(i % 2 == 0) //如果i是一个偶数，执行if语句中的代码
		{
			continue; //结束本次循环 
		}
		sum+=i;  //实现sum和i的累加 
	}
	
	printf("sum = %d\n", sum);
	
	return 0; 
 } 
