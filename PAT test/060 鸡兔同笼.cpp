#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 

int main()
{
    //声明变量
    int n;		//鸡和兔的总数 
	int m;		//鸡和兔的总腿数 
	 
    //输入、计算、输出
    scanf("%d%d", &n, &m);
    int k =  n - ((m - 2 * n) / 2);
    int r =  (m - 2 * n) / 2;
    if( k < 0 || r < 0  || k % 2 == 1 || r % 2 == 1)	
    {
    	//无效答案：小于0，非整数 
    	printf("No answer\n");
	}
	else
	{
		printf("%d %d\n", n - ((m - 2 * n) / 2) , (m - 2 * n) / 2);
	}

    //返回
    return 0;
}
