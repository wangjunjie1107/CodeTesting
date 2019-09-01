#include<stdio.h>

//#define 指令可以把符号名（或称为符号常量）定义为一个特定的字符串
 
#define LOWER 0  	//lower limit of  table 
#define UPPER 300	//upper limit
#define STEP  20	//step size
 
//当fahr=0,20,40,...,300时，分别打印华氏温度与摄氏温度对照表

main()
{
/*
	float fahr, celsius;     
	float lower, upper, step;
	
	
	lower = 0;   //温度下限 
	upper = 300;//温度上限 
	step = 20;  //步长 
	
	fahr = lower;

	while(fahr <= upper)
	{
		//正确的缩进以及保留适当空格的程序设计风格对程序的易读性非常重要 
		celsius = 5 * (fahr - 32) / 9; 
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
*/	

//或者使用以下程序，只需要定义一个变量 
 
	for(int fahr = UPPER; fahr >=  LOWER; fahr-=STEP)
	{
		printf("%3d %6.1f\n", fahr, 5.0/9.0 * (fahr - 32));
	}
	
	return 0;
 } 
