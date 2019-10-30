#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 
int main()
{
    //声明变量
    int n;	

    //输入、计算、输出
	scanf("%d", &n);
	if(n == 1)
	{
		printf("1\n");
	}
	else if(n % 2 == 0) 
	{
		printf("%d\n", (1 + n) * (n / 2));	//偶数 
	}
	else
	{
		printf("%d\n", (1 + n) * (n / 2) + (1 + n) / 2 );	//奇数 
	} 
   
    //返回
    return 0;
}
