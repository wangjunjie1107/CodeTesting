#include<stdio.h>

//打印华氏温度与摄氏温度的对照表 
int main()
{
	float fahr;//华氏温度
	float Celsius;//摄氏温度
	
	int lower = 0; //温度上限 
	int upper = 100;  //温度下限 
	int step = 5;  //步长 
	
	Celsius = lower;
	printf("摄氏温度\t");
	printf("华氏温度\n");
	
	while(Celsius <= upper)
	{
		//%6.2f 按照浮点数打印，至少6个字符宽，小数点后有两位小数
		//%c 表示字符
		//%% 表示百分号本身 
		printf("  %3.1f\t\t%6.1f\n", Celsius, Celsius * 9.0 / 5.0 + 32);
		Celsius += step;
	} 
	
	return 0;
 } 

