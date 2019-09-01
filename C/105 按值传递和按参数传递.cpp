#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void changeSome(int i, float *newX, int iAry[4]);  //函数原型及其返回类型 

int main()
{
	int i = 10;
	float x = 20.5;
	int iAry[4] = {10, 20, 30, 40};
	
	puts("Here are main()'s variables before the function:");
	printf("i is %d\n", i);
	printf("x is %0.2f\n", x);
	for(int j = 0; j < 4; j++)
	{
		printf("iAry[%d] is %d\n", j, iAry[j]);
	} 
 
	//Without the &, x would pass by value
	changeSome(i, &x, iAry);
	
	puts("\nmain()'s variables after the function:");
	printf("i is %d\n", i);
	printf("x is %0.2f\n", x);
	for(int j = 0; j < 4; j++)
	{
		printf("iAry[%d] is %d\n", j, iAry[j]);
	}
	
	return 0;	
 }
  
void changeSome(int i, float *newX, int iAry[4])
{
 	//Change all paramenters, but only the
 	// last two remain changed once main() returns
 	i = 47;
 	*newX = 97.6;
 	for(int j = 0; j < 4; j++)
	{
		iAry[j] = j + 100;
	}
	
}
 

