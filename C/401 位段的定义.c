#include<stdio.h>


struct test01
{
	unsigned int a:1;  //占内存中 的 1 位， 赋值只能赋 0 或者 1 
	unsigned int b:2; // 占内存中 的 2 位， 赋值只能赋 0 - 3 
	unsigned int c:3;
	unsigned int d:4;
	unsigned int e:6;
	unsigned int f:7;
	unsigned int h:9;   // 32位  4个字节 

};

struct test02
{
	unsigned int a:1;  //占内存中 的 1 位， 赋值只能赋 0 或者 1 
	unsigned int b:2; // 占内存中 的 2 位， 赋值只能赋 0 - 3 
	unsigned int c:3;
	unsigned int d:4;
	unsigned int e:6;
	unsigned int f:7;
	unsigned int g:7;
	unsigned int h:9;   // 40位  5个字节   因为内存对齐的原因  所以 多分配了 3 个字节  5 + 3

};

int main()
{	
	printf("%d\n",sizeof(struct test01));  // 4 个字节
	
	
	printf("%d\n",sizeof(struct test02));  // 8 个字节  因为内存对齐的原因  所以 多分配了 3 个字节  5 + 3
	
	return 0;
} 
