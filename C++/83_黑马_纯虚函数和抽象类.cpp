#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Base
{

public:

	//纯虚函数
	//语法：virtual 返回值类型 函数名(形参) = 0;
	//纯虚函数 不需要有实现
	//有了纯虚函数的类，也称为抽象类
	//抽象类 无法实例化对象
	//子类必须重写父类纯虚函数，否则子类也是抽象类
	virtual void func() = 0;

};


class Son :public Base
{
public:

	//子类必须重写父类纯虚函数，否则子类也是抽象类 无法实例化对象
	void func()
	{
		cout << "hahaha" << endl;
	};

};

void test01()
{
	//Base base;//抽象类无法实例化对象
	Son s;//子类必须重写父类纯虚函数，否则无法实例化对象
}
int main() 
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

