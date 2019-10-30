#include<stdio.h>
#include<stdlib.h>

//计算圆柱体的表面积

int main()
{
    //声明变量
    double r;
    double h;

    //输入输出
    scanf("%lf%lf",&r,&h);
    printf("%lf\n", 2 * 3.141592654 * r * h + 3.141592654 * r * r * 2);
   
    //返回
    return 0;
}