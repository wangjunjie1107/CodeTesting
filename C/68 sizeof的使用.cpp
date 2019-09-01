#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
void test(int arr[]);  //函数的声明 

//1、sizeof本质，是不是一个函数？
//             答：不是一个函数，只是一个操作符。
 
void test01()
{
	//对于数据类型，sizeof必须用（）去使用，比如 sizeof（int)
	//对于变量，可以不加。 比如： int a; sizeof a; 
	double 	d;
	sizeof d;
 } 
 
//2、sizeof的返回值类型是 unsigned int 无符号类型
//当 unsigned int 和 int 类型数据做运算，编译器会将数据类型都转换为 unsigned int 
void test02()
{
	if(sizeof(int) - 5 > 0)
	{
		printf("dayu0\n%u", sizeof(int) - 5);
	}
	else
	{
		printf("xiaoyu0");
	}
 } 
 
 // sizeof可以统计数组长度
 //当数组名作为函数参数的时候，会退化为指针，指向数组中的第一个元素

 void test03()
{
 	int arr[]={1,2,3,4,5,6};
 	
 	test(arr);
 	
}

void test(int arr[])
{
 	printf("%d\n", sizeof(arr));
} 
  
 int main()
 {
 	test03();
 	return 0;
 }










