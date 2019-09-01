#include<math.h>  //数学函数所需的头文件
#include<stdio.h>
#include<stdlib.h>//随机数函数需要的头文件 
#include<time.h>
 
//舍入和下舍入函数，把非整数变成与之相邻的更小或更大的整数值 
void function1()
{
	float a;
	float b;
	
	a = 12.25;
	b = -12.25;
	 
	printf("上舍入和下舍入函数\n");
	a = ceil(a);  //上舍入函数 
	b = floor(b); //下舍入函数 
	printf("%.0f\n%.0f\n\n\n", a, b);
}

//绝对值函数
void function2()
{
	printf("绝对值函数\n");
	int c = -12.3;
	c = fabs(c);
	printf("%d\n\n", c); 
}

//一个数的幂和平方根
void function3() 
{
	printf("一个数的幂 和 其绝对值的平方根\n");
	int d = -4;
	int e,f;
	e = pow(d,3); 
	f = sqrt(fabs(d));
	printf("幂：%d\n平方根： %d\n\n", e, f);
}
 
//三角函数
void function4()
{
	float x = 2;
	float y = x*180/3.141592654;
	int co;
	int si;
	int ta;
	co = cos(x);
	si = sin(x);
	ta = tan(x);
	
	printf("%f\n%f\n%f\n", co, si, ta);	
}

//对数函数 
void function5()
{
	float a = log10(100);
	float b = exp(5);
	float c = log(10);
	printf("long10(100) = %0.2f\nexp(5) = %0.2f\nlog(10) = %0.2f\n", a, b, c);
 } 

//获取随机数
void function6()
{
	int dice;
	int i = 0;
	
	time_t t;
	srand(time(&t));  //用时间作为随机数产生器的种子 
	
	printf("\n\n获取随机数\n");
	while(i < 5)
	{
		dice = (rand() % 25) + 1;
		printf("%d\t", dice);
		i++;
	}
	putchar('\n');
}	
int main()
{
	function1();//舍入和下舍入函数
	function2();//绝对值函数
	function3();// 一个数的幂和平方根
	function4();//三角函数 
	function5();//对数函数 
	function6();//随机数函数 
	return 0;
 } 
