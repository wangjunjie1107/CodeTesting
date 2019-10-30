#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 
//一件衣服95元，若消费满300元，可打8.5折。输入购买衣服的数量，求支付金额。保留两位小数 
int main()
{
    //声明变量
    double n;		
	
    //输入、计算、输出
	scanf("%lf", &n);
	if(n >= 4)
	{
		//打折 
  		printf("%0.2f\n", (int)n * 95.0 * 8.5);		
	}
	else if(n >= 0 && n < 4) 
	{
		//不打折 
		printf("%0.2f\n", (int)n * 95.0);
	}
	else
	{
		printf("-1\n");
	}
   
    //返回
    return 0;
}
