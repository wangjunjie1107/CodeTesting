#include<stdio.h>

//共用体也叫联合体
/*
	联合体（共用体）
		联合union是一个能在同一个存储空间存储不同类型数据的类型；
		联合体所占的内存长度等于其最长成员的长度，也有叫做共用体；
		同一内存段可以用来存放几种不同类型的成员，但每一瞬时只有一种起作用；
		共用体变量中起作用的成员是最后一次存放的成员，在存入一个新的成员后原有的成员的值会被覆盖；
		共用体变量的地址和它的各成员的地址都是同一地址。

*/ 
union Test
{
	unsigned char a;
	unsigned int b;
	unsigned short c; 
};

int main()
{
	//定义共用体变量
	union Test tmp;
	
	//所有成员首地址都是一样的
	printf("%p,%p,%p\n", &(tmp.a), &(tmp.b), &(tmp.c));
	
	//共用体大小为最大成员类型的大小
	printf("%lu\n", sizeof(union Test));  //4
	
	//一个成员赋值，会影响另外的成员
	
	tmp.b = 2;
	
	printf("%x\n", tmp.a);
	printf("%x\n", tmp.c);
	
	tmp.a = 'x';
	printf("%x\n", tmp.c); 
	printf("%x\n", tmp.b);
	
	return 0;
}
