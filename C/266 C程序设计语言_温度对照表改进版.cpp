#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
//double 双精度浮点型

//在允许使用某种类型变量值的任何场合，
//都可以使用该类型的更复杂的表达式。
float  temperature()
{
	printf("华氏温度\t摄氏温度\n");
	for(float farh = UPPER; farh >= LOWER; farh -= STEP)
		printf("  %3.0f\t\t%6.1f\n", farh, (5.0 / 9.0) * (farh - 32));
	
} 
int  main()
{
	temperature();
	return 0;
 } 
 
