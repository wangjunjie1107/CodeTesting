#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1、静态转换 static_cast
//语法：static_cast<目标数据类型>(原变量/对象）

//内置数据类型
void test01()
{
	char a = 'a';
	double d = static_cast<double>(a);
	cout << d << endl;
}


//对象转换
class Base{};
class Son:public Base{};
class Other{};
void test02()
{
	Base * base = NULL;
	//base 转为 Son *  父转子  向下类型转换 不安全
	Son * son = static_cast<Son *>(base);

	//son 转为 Base* 子转父 向上类型转换 安全
	Base * base1 = static_cast<Base *>(son);

	//base1 转 Other*  失败
	//Other * other = static_cast<Other *>(base1);
}


//2、动态类型转换
void test03()
{
	//不允许内置类型转换
	char a = 'a';
	
	//double d = dynamic_cast<double>(a);
}

class Base1
{ 
	virtual void func1() 
	{
	
	}; 
};

class Son1 :public Base1
{
	virtual void func1()
	{

	};
};

class Other1{};

void test04()
{
	Base1 * base1 = NULL;
	//base 转为 Son1 * 父转子 不安全
	Son1 * son1 = dynamic_cast<Son1 *>(base1);//失败 不安全  有虚函数的情况下 是安全的的  即发生多态



	Son1 * son2 = NULL;
	//son 转 Base1 *   子转父  安全
	Base1 * base2 = dynamic_cast<Base1 *>(son2);


	//base1 转 Other1 *
	//Other1 * other1 = dynamic_cast<Other1*>(base1);//不可以

	//如果发生多态，转换总是安全的
	Base1 * base3 = new Son1;
	Son1 * son3 = dynamic_cast<Son1*>(base3);
}



int main()
{
	test01();
	

	system("pause");
	return EXIT_SUCCESS;
}
