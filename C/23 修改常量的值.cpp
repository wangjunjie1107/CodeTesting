#include<stdio.h>  //还有疑问 

int main()
{
	//常量
    const int a=10;
	//a=100; error
	//通过指针间接修改常量的值 
	int* p = &a;
	*p = 2525;
	printf("%d\n", a);
	return 0; 
}


