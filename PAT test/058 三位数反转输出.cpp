#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
//三位数反转输出 
int main()
{
    //声明变量
    int n;

    //输入输出
    scanf("%d", &n);
    if(n % 10 != 0)
    {
    	printf("%d%d%d", n % 10, n / 10 % 10, n / 100);
	}
	else
	{
		printf("%d%d", n / 10 % 10, n / 100);
	}

   
    //返回
    return 0;
}
