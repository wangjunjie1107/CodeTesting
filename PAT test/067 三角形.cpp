#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 
//输入三角形3条边的长度（均为正整数），判断其是否能组成直角三角形。 
int main()
{
    //声明变量
    int a;	
	int b;	
	int c;
	
    //输入、计算、输出
	scanf("%d%d%d", &a, &b, &c);
	if(a * a == b * b + c * c || b * b == a * a + c * c || c * c == b * b + a *a)
		printf("yes!"); 
	else
		printf("not a triangle"); 
   
    //返回
    return 0;
}
