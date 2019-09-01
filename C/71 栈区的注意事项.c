#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//栈 注意事项 ，不要返回局部变量的地址 
int * func()
{
	int a = 10;
	return &a;
 } 
 
 void test01()
 {
 	int * p = func();
 	
 	//结果已经不重要了，因为a的内存已经被释放了，我们没有权限去操作这块内存
	printf("a = %d\n", *P);
	printf("a = %d\n", *P);
 }
 
 
int main()
{
	test01();
	return 0;
}

