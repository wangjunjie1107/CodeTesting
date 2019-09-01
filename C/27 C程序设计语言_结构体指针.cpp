#include<stdio.h>

struct point
{
	int a;
	int b;
}point;

int main()
{
	//定义一个结构体，并赋值 
	struct point q = {1, 2};
	
	//定义一个结构体指针 
	struct point *p;
	
	//指针指向结构体
	p = &q; 
	
	//通过指针操作结构体 
	printf("%d,%d\n", (*p).a, (*p).b);
	printf("%d,%d\n", p->a, p->b); //p为指针时可以直接用箭头操作结构体
	 
	//如果传递给函数的结构很大，使用指针方式的效率
	//通常比复制整个结构的效率要高。 
	
	return 0;
 } 
 
 
 
 
 
 
 
 
