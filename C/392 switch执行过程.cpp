#include<stdio.h> 

/*
switch的执行过程：
	
	先求switch后的表达式的值，然后在后面的多个case中查找此值，如果找到相等的，则执行下面的对应语句，直到遇到一个break为止。
	
	如果没有break的话，将会执行到下一个case下的语句。

	如果switch表达式的计算结果与所有case均不相等，则执行default后的语句。
	
	default也可以没有，即都不相等什么也不执行。


*/
int main()
{
	
	int a = 1;
	switch(a == 1)
	{
		case 0:
			printf("Yes\n");
		case 1:
			printf("No\n");
		case 3:
			printf("ohhhhh\n");
	}
	
	return 0;
}
