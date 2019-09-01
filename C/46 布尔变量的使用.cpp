#include<stdio.h>
#include<math.h>
#include<stdbool.h>

//表示真或假的变量被称为布尔变量，
// _Bool类型的变量只能储存1（真）或0（假）。
	
int main(void)
{
	long num;
	long sum;
	_Bool intput_is_good;
	
	printf("Please input a integer number：");
	intput_is_good = (scanf("%ld", &num) == 1);  
	
	while(intput_is_good)
	{
		sum = sum + num;
		printf("Please enter next integer:");
		intput_is_good = (scanf("%ld", &num) == 1);  
	}
	printf("Those integers sum to %ld.\n", sum);
	
	return 0;
 } 
