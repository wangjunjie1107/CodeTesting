#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//普通函数和函数模板区别以及调用规则

//1、区别
template<class T>
T myPlus(T a, T b)
{
	return a + b;
}

int myPlus2(int a, int b)
{
	return a + b;
}

void test01()
{
	//1、普通函数可以发生隐式类型转换
	int a = 1;
	int b = 2;
	char c = 'c';
	cout << myPlus(a, b) << endl;
	cout << myPlus2(a, b) << endl;
	//myPlus(a, c);//函数模板 用自动类型推导的时候，不会发生隐式类型转换
	cout << myPlus2(a, c) << endl;
}


//2、调用原则
void myPrint(int a, int b)
{
	cout << "普通函数调用" << endl;
}

//函数模板通过具体类型产生不同的函数
//通过函数模板 产生的函数 称为 模板函数

template<class T>
void myPrint(T a, T b)
{
	cout << "函数模板myPrint调用" << endl;
}

template<class T>
void myPrint(T a, T b, T c)
{
	cout << "函数模板myPrint(a,b,c)调用" << endl;
}


void test02()
{
	//1、如果普通函数和函数模板都可以匹配，优先使用普通函数
	myPrint(1 ,2);

	//2、如果想强制调用函数模板，需要加 空模板参数列表
	myPrint<>(1, 2);

	//3、函数模板也可以发生函数重载
	myPrint(1, 2, 3);

	//4、如果函数模板可以产生更好的匹配，那么优先使用函数模板
	char c1 = 'c';
	char c2 = 'd';
	myPrint(c1, c2);

}



int main() {


	test02();

	system("pause");
	return EXIT_SUCCESS;
}
