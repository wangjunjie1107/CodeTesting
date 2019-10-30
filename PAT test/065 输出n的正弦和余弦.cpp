#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 
int main()
{
    //声明变量
    double n;	
	
    //输入、计算、输出
	scanf("%lf", &n);
    printf("%lf %lf %lf %lf\n", sin(n), cos(n), tan(n), asin(n));
   
    //返回
    return 0;
}
