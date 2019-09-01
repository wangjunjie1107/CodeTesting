#include<stdio.h>

/*


枚举：将变量的值一一列举出来，变量的值只限于列举出来的值的范围内。
	在枚举值表中应列出所有可用值，也称为枚举元素。
	枚举值是常量，不能在程序中用赋值语句再对它赋值。
	枚举元素本身由系统定义了一个表示序号的数值从0开始顺序定义为0，1，2 … 
	
*/
enum weekday
{
	sun = 2, mon, tue, wed, thu, fri, sat
};

enum abool
{
	flase
}; 

int main()
{
	enum weekday a, b, c;
	
	a = sun;
	b = mon;
	c = tue;
	
	printf("%d, %d, %d\n", a, b, c);
	
	enum abool flag;
	flag = flase;
	
	if(flag == 0)
	{
		printf("falg为假\n");
	} 
	
	return 0;
}
