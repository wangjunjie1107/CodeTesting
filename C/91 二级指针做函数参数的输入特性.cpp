#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//二级指针做函数参数的输入特性
//主调函数分配内存，被调函数使用

void printArray(int ** pArray, int len)
{
	for(int i = 0; i < len; i++)
	{
		printf("%d\n",*pArray[i]);
		
	} 
}

void test()
{
	//在堆区分配内存
	int ** p = malloc(sizeof(int*)*5);
    
    //在栈上创建数据
    int a1 = 10;
    int a2 = 20;
    int a3 = 30;
    int a4 = 40;
    int a5 = 50;
    
    p[0] = &a1;
    p[1] = &a2;
    p[2] = &a3;
    p[3] = &a4;
    p[4] = &a5;
    
    printArray(p,5);
}
void test02()
{
	//在栈上创建
	int * pArray[5];
	
	for(int i = 0; i < 5; i++)
	{
		pArray[i]=malloc(4);
		*(pArray[i]) = 100 + i;
	} 
	
	printArray(pArray,5);
} 

int main()
{
	test01();
	test02();
	
	return 0;
	 
}
