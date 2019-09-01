#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Base
{
public:

	static void func()
	{
		cout << "Base下的func调用" << endl;
	}
	static void func(int a)
	{
		cout << "Base下的func(int a)调用" << endl;
	}

	//共享同一个数据
	//编译阶段分配内存
	//类内声明，类外初始化
	static int m_A;
};
int Base::m_A = 10;

class Son :public Base
{
public:
	static void func()
	{
		cout << "Son下的func调用" << endl;
	}

	static int m_A;
};
int Son::m_A = 20;


//静态同名成员变量
void test01()
{
	//1 通过对象访问
	Son s;
	cout << "Son  m_A = " << s.m_A << endl;
	cout << "Base m_A = " << s.Base::m_A << endl;

	//2 通过类名访问
	cout << "Son  m_A = " << Son::m_A << endl;
	cout << "Base m_A = " << Son::Base::m_A << endl;
}


//静态同名成员函数
void test02()
{
	//1 通过对象访问
	Son s;
	s.func(); //当子类重定义父类的同名func后，如果想调用父类的func，需要加作用域
	s.Base::func();
	s.Base::func(10);

	//2 通过类名
	Son::func();
	Son::Base::func(); //第一个双冒号 代表 通过类名方式访问  第二个双冒号代表 父类作用域
	Son::Base::func(10);
}

int main(){

	//test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}
