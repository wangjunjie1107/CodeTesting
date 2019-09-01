#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

/*

		静态转换  static_cast
			语法： static_cast<目标数据类型>(原变量/对象)
			对象转换 static_cast 只能用于基类、派生类之间的转换
	
		动态类型转换 dynamic_cast
			不允许向下类型转换  不安全
			但是如果发生多态 转换总是安全的

		const_cast常量转换
			不可以对非指针或非引用进行转换

		重新解释转换 reinterpret_cast
			重新解释转换 可以任意转换  很不安全

*/



//1、静态转换  static_cast
//语法： static_cast<目标数据类型>(原变量/对象)

//内置数据类型
void test01()
{
	char ch = 'a';
	double d = static_cast<double>(ch);
	cout << d << endl;
}

//对象转换 static_cast 只能用于基类、派生类之间的转换
class Base{};
class Son:public Base{};
class Other{};
void test02()
{
	Base * base = NULL;
	//Base * 转为 Son *    父转子  向下类型转换 不安全
	Son * son = static_cast<Son *>(base); //允许


	// Son * 转为 Base *   子转父  向上类型转换  安全
	Son * son2 = NULL;
	Base * base2 = static_cast<Base *>(son2);

	// Base * 转 Other *  失败
	//Other * other = static_cast<Base *>(base2);
}


//2、动态类型转换 dynamic_cast  
//不允许向下类型转换  不安全
//但是如果发生多态 转换总是安全的
void test03()
{
	//不允许内置数据类型转换
	char a = 'a';
	//double d = dynamic_cast<double>(a);//转换失败
}

class Base1{virtual void func1(){} };
class Son1:public Base1{virtual void func1(){} };
class Other1{};
void test04()
{
	//Base1 * base = NULL;
	//Base1 * 转为 Son1 *  父转子 不安全
	//Son1 * son = dynamic_cast<Son1 *>(base);

	Son1 * son1 = NULL;
	//Son1 * 转 Base1 *  子转父 安全
	Base1 * base1 = dynamic_cast<Base1 *>(son1);

	//如果发生多态 转换总是安全的
	Base1 * base2 = new Son1;  //父类指针指向子类对象
	//父类指针 转为 子类指针  允许  安全
	Son1 * son2 = dynamic_cast<Son1 *>(base2);
}

//3、const_cast常量转换
void test05()
{
	//指针
	const int * p = NULL;

	//p 转为 int *
	int * pp = const_cast<int *>(p);
	const int * ppp = const_cast<const int *>(pp);

	//引用
	int num = 10;
	int &numref = num;
	const int & numref2 = const_cast<const int &>(numref);
	int & numref3 = const_cast<int &>(numref2);

	//不可以对非指针或非引用进行转换
	const int a = 10;
	//int aa = const_cast<int>(a);//失败
}

//4、重新解释转换 reinterpret_cast
void test06()
{
	int a = 10;
	int * p = reinterpret_cast<int *>(a);

	//重新解释转换 可以任意转换  很不安全
	Base * base = NULL;
	Other * other = reinterpret_cast<Other*>(base);
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}




