#include<stdio.h>

int main01(void)
{
	int arr[]={1,2,2,5,4,8,6,4,2,8};
	int* p=arr;
	//p是变量   arr是常量
	//p是一个指针 8字节大小
	//arr是一个数组  40字节大小 
	printf("指针类型大小为： %d\n", sizeof(p));//?为什么是8个字节 
	printf("数组大小为： %d\n", sizeof(arr)) ;
    
    p= &arr[3];
	//  指针操作数组时允许下标是负数 
	printf("%d\n", p[-2]); //相当于 *(p-2) 
	
	return 0;
}

int main()
{
	//指针和运算符的操作
	int arr[]={1,1,5,4,8,6,9};
	int *p= arr;
	
	//野指针
	/*  指针相加  相乘   相除  指针乘以整数  出错！  
	p = p+arr;  //err
	p = p*arr;  //err 
	p = p/arr;  //err
	p = p*4;  //err 
    */   
    //但两个指针可以比较大小  判断相等不相等
    //有效指针  减  野指针 可以，但没有意义 
	if(p=arr)
	{
	   printf("真\n"); 
    }
    
    return 0;
 } 
