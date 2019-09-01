#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MYADD(x,y) (x)+(y)
//宏函数  要保证运算的完整性才可以
//宏函数 在一定程度上  会比普通的函数效率高 
//普通函数会有入栈和出栈时间上的开销
//我们通常将一些比较频繁、短小的函数封装为宏函数 
//宏函数 优点：以空间 换 时间 
int myAdd(int x, int y)
{
	return x + y;
}
 
void test01()
{
	int a = 10;
	int b = 12;
	int ret = MYADD(a,b);
	
	printf("%d\n", ret);
} 
 
 
int main()
{
 	test01();
 	
 	return 0;
}













