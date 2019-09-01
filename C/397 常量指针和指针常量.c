#include<stdio.h>

int main()
{
	int value1 = 10;
	int value2 = 20;
	
	const int * a = &value1; //常量指针 const修饰int *,是指针指向的值，所以指针指向的值不可以修改，但是指针的方向可以修改 
	
	int * const b = &value2; //指针常量  const修饰指针，指针的指向不可以修改  
 
 	//常量指针 
 	//a = 200; //不可以修改值
 	int value3 = 100;
	a = &value3; //可以修改指针的指向 
 	printf("常量指针：a = value3 = %d\n",*a);
 	
 	
 	//指针常量
	*b = 200;  //可以修改值
	printf("指针常量：b = %d\n",*b); 
	//b = &value3;// 不可以修改指针的方向 
 	
 	
 	return 0;
 } 
 
