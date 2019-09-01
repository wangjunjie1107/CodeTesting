#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int g_a = 100;  //全局区的数据 ，在main、func1、func2中都可以使用 
//子函数1 
void func1()
{
	int a = 10; //在main函数中不可以使用，在func1和func2中都可以使用 
	func2();
} 

void func2()
{
	
 } 
 
 int main()
 {
 	int a = 1;//在main和func1、func2中都可以使用 
 }
