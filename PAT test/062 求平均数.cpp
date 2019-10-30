#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 
int main()
{
    //声明变量
    int a;	
	int b;	
	int c;
    //输入、计算、输出
	scanf("%d%d%d", &a, &b, &c);
    printf("%0.3f\n", (a + b + c) / 3.0);
   
    //返回
    return 0;
}
