/*

	下面的代码定义了一个全局型的静态变量i 和 一个局部静态变量 j.
	每次调用函数时候，改变变量的值，使其累加。
	
	由于 i 在每次调用函数的时候都赋予了新值，所以每次的值都是1；
	
	因为 j 被定义为局部静态变量，其值在每次函数结束时都被保留，所以结果是上一次值加 1 . 

*/

#include<stdio.h>

static int i;
void func1()
{
	i = 0;
	i++;
	printf("i = %d,",i);
}

void func2()
{
	static int j = 0;
	j++;
	printf(" j = %d \n",j);
 } 
 
 int main()
 {
 	int n ;
 	for(n = 0;n < 10; n++)
 	{
 		func1(); //全局静态变量  i
		func2();//局部静态变量  j 
	}
	
	return 0;
 }
