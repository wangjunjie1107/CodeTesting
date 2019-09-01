#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//模板可以将类型参数化
//函数模板实现通用交换

//T属于通用的数据类型，
//告诉编译器下面出现这个T类型，不要报错
template<class T>
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

//注意事项 模板必须要推导出T的类型才可以使用，否则不可以单独使用

void test01()
{
	//1、自动类型推导
	int a = 10;
	int b = 30;
	mySwap(a, b);
	char c = 'c';
	
	//必须推导出一致的T类型，才可以使用模板
	//mySwap(a, c); 

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	//2、显示指定类型
	double d1 = 2.2;
	double d2 = 4.4;
	mySwap<double>(d1, d2);

	cout << "d1 = " << d1 << endl;
	cout << "d2 = " << d2 << endl;
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
