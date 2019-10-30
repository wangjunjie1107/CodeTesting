#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 
int main()
{
    //声明变量
    double f;		//华氏温度	
	
    //输入、计算、输出
	scanf("%lf", &f);
    printf("%0.3f\n", 5 * (f - 32) / 9);
   
    //返回
    return 0;
}
