#include<stdio.h>

//typedef主要用途给类型起别名
// 语法  typedef  原名  别名 
// 1、起别名 
typedef struct person
{
	char name[30];
	int age;
}myperson;

void test01()
{
	struct person p1 = {"zhangsan", 19};
	
	myperson = {"lisi", 20};
}

//2 . 区分数据类型 
void test02()
{
	typedef char * DATA;
	DATA p1,p2;
}

//3、提高代码可移植性
typedef long long myint  //要改变数据类型，只需要替换long long的地方 
void test3()
{
	myint p1;
	myint p2;
 } 

 

int main()
{
	
 } 
