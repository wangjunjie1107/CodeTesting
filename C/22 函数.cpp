#include<stdio.h>

// 返回值类型 函数名（参数列表） 
//  {
//   代码体
//     return 0;
//  }


int add(int a, int b) 
{
	int sum= a + b ;
	return sum;
}

int main()
{
   int a=10;
   int b=30;
   int c;
   //函数调用 
   add(a, b);
   c=add(a, b);
   printf("%d\n", c);
   return 0;
} 
