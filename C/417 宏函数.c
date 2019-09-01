#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


//宏函数注意：保证运算的完整性
//宏函数使用场景：将频繁短小的函数 ，封装为宏函数
//优点：以空间换时间

#define MYADD(x,y) ((x) + (y))

int myAdd(int x, int y)
{
	return x + y;
}


void test01()
{
	int a = 10;
	int b = 10;

	printf("a + b = %d\n", MYADD(a, b) * 20); // 400 宏函数要保证运算完整性
	printf("a + b = %d\n", myAdd(a,b)); //20

}
int main()
{
	test01();

	system("pause"); 
	return EXIT_SUCCESS;
}


