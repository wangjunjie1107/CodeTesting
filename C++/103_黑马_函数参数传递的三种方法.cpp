#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//实现两个数字交换
//1、值传递
void mySwap01(int a , int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	mySwap01(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

//2、地址传递
void mySwap02(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void test02()
{
	int a = 10;
	int b = 20;
	mySwap02(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

//3、引用传递
void mySwap03(int &a ,int &b )
{
	int temp = a;
	a = b;
	b = temp;
}

void test03()
{
	int a = 10;
	int b = 20;
	mySwap03(a, b);
	cout << "a = " << a << endl; // 20 
	cout << "b = " << b << endl; // 10
}


//注意事项2
//1、引用必须引合法内存空间
void test04()
{
	//int &b = 10; //非法操作
}

int& func()
{
	int a = 10;
	return a;
}

//2、不要返回局部变量的引用
void test05()
{
	int &ref = func();
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
}

//3、当函数返回值是引用时候，那么函数的调用可以作为左值存在

int& func2()
{
	static int a = 10;
	return a;
}


void test06()
{
	int &ref = func2();

	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;

	//当函数返回值是引用时候，那么函数的调用可以作为左值存在
	func2() = 1000;
	cout << "------------------" << endl;
	cout << "ref = " << ref << endl;

}


int main(){

	//test01();
	//test02();
	//test03();
	//test05();
	test06();

	system("pause");
	return EXIT_SUCCESS;
}
