#include<stdio.h>
#include<stdlib.h>


//1 声明   声明函数的格式 
extern int add01(int a, int b);

int main()
{
	//3 调用   执行函数   需要完成某些功能
	int a = add01(10, 20);
	printf("%d\n",a);
	
	system("pause");
	return 0;
} 

//2 定义 函数的定义就是对函数功能的实现
int add01(int a, int b)
{
	return a + b;
} 
