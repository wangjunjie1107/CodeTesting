#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//函数重载，C++下允许函数名称相同
//函数重载 满足条件：

//1、在相同作用域下
//2、函数名称相同 
//3、参数的个数不同 或者 类型不同  或者  顺序不同

void func()
{
	cout << "func()调用" << endl;
}

void func(int a)
{
	cout << "func(int a)调用" << endl;
}

void func(int a, int b)
{
	cout << "func(int a, int b)调用" << endl;
}


void func(int a, double b)
{
	cout << "func(int a,double b)调用" << endl;
}

void func(double a, int b)
{
	cout << "func(double a, int b)调用" << endl;

}
int main()
{
	
	func();
	func(1);
	func(1,2);
	func(1,2.1);
	func(2.2,1);



	system("pause");
	return EXIT_SUCCESS;
}

