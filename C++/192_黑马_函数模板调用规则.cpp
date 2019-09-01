#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//普通函数和函数模板区别以及调用规则

//1、区别
template<class T>
T myPlus (T a, T b)
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
	int a = 10;
	int b = 20;
	char c = 'c';

	//普通函数
	myPlus2(a, c); //普通函数自动将 char 类型 转换为 int 类型


	//函数模板

	//myPlus(a, c);//函数模板用自动类型推导的时候，不会发生隐式类型转换
	myPlus<int>(a, c);//需要用显示指定类型，才可以发生类型转换
}

//2、调用规则


//函数模板通过具体类型产生不同的函数
//通过函数模板产生的函数  称为 模板函数


//普通函数
void myPrint(int a, int b)
{
	cout << "普通函数myPrint  int类型 调用" << endl;
}

//函数模板
template<class T>
void myPrint(T a, T b)
{
	cout << "函数模板myPrint调用" << endl;
}

//函数模板可以重载
template<class T>
void myPrint(T a, T b, T c)
{
	cout << "函数模板myPrint(a,b,c)调用" << endl;
}

void test02()
{
	//1、如果普通函数和函数模板都可以匹配，优先使用普通函数
	int a = 10;
	int b = 20;
	myPrint(a, b);  //优先使用普通函数

	//2、 如果想强制使用函数模板，则需要加 空模板参数列表
	myPrint<>(a, b);

	//3、函数模板可以发生函数重载
	myPrint(a, b, 200);

	//4、如果函数模板可以产生更好的匹配，那么优先使用函数模板
	char c1 = 'a';
	char c2 = 'a';
	myPrint(c1, c2);
}
int main()
{

	test01();
	test02();


	system("pause");
	return EXIT_SUCCESS;
}
