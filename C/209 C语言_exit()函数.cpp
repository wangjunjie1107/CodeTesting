#include <stdio.h>
#include <stdlib.h>

void fun()
{
	printf("fun\n");
	//return;   在子函数中调用return只是代表子函数终止了 
	exit(0);	//在子函数中调用exit，那么程序终止。 
}

int main()
{
	fun();
	printf("fun\n");

	return 0;//main函数中调用exit和return结果是一样的
}
