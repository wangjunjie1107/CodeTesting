#include<stdio.h>
#include<stdlib.h>  //定义了c、c++中的五种变量类型，一些宏和通用函数工具。 
#include<math.h>
int main()
{
	int i;
	int a;
	int b;
	int c;
	i=100;
	do{
		a=i%10;		//取个位数
		b=i/10%10;  //取十位数
		c=i/100;	//取百位数 
		
	    if(i==pow(a,3)+pow(b,3)+pow(b,3))  //注意赋值号==与等于号=的区别！！ 
	    {
	    	printf("%d\n",i);
		}
		i++; 
	}while(i<999);
	
	return 0;
}
