#include<stdio.h>


int main()
{
	int a = 10;
	int b = 20;
	int* p = &a;
	int** pp = &p;
	
	*pp = &b; //等价于 p=&b;
	
	**pp = 100; //等价于 a=100; 
	
	// *pp = 100; //err
	
	printf("%d\n", *p) ;
	
	printf("%d\n", **pp);
	
	printf("%d", a);
	
	//三级指针 操作 
	int ***ppp = &pp;
	*ppp==pp=&p;
	**ppp==*pp==p==&a;
	***ppp==**pp==*p==a;
	
	return 0;
 } 
