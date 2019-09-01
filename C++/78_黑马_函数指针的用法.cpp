#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

int test(int a,int b)
{
	return a + b;
}
int main() 
{
	//声明一个函数指针
	int (*pf)(int, int);

	//赋值
	pf = test;

	//函数指针在C++中有两种使用方式
	cout << pf(3, 4) << endl;//认为函数指针pf和函数名相同，所以和函数名用法一样
	cout << (*pf)(3, 4) << endl;//认为pf是函数指针，*pf就是函数，所以使用（*pf）表示
/*
	为什么pf和（*pf)等价呢？
	（1）一种学派认为，由于pf是指针，而*pf是函数，因此应将（*pf)()用作函数调用。
	（2）另一种学派认为，由于函数名是指向该函数的指针，指向函数的指针的行为应与函数名相似，因此应将pf()用作函数调用使用。
	（3）C++ 进行了折衷--这两种方式都是正确的。
	（4）容忍逻辑上无法自圆其说的观点正是人类思维活动的特点。
	
*/
	system("pause");
	return EXIT_SUCCESS;
}


