#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


/*

	纯虚函数
	
	语法 virtual 返回值类型 函数名（形参） = 0;
	
	纯虚函数  不需要有实现
	
	有了纯虚函数的类，也称为抽象类
	
	抽象类 无法实例化对象
	
	子类必须重写父类纯虚函数，否则子类也是抽象类

*/


//抽象类
class Base
{
public:
	virtual void func() = 0;
	int m_A = 10;
};

//子类重写父类纯虚函数  
class Son :public Base
{
public:
	virtual void func() {};
};

void test01()
{
	// Base base; //抽象类无法实例化对象

	Son s; //子类必须重写父类纯虚函数，否则无法实例化对象
	
	s.m_A; //子类访问父类成员 继承

}



int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
