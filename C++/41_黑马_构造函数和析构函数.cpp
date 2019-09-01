#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

/*

	构造函数主要作用在于创建对象时为对象的成员属性赋值，
	

	析构函数主要用于对象销毁前系统自动调用，执行一些清理工作。


*/
class Person
{
public: //构造和析构必须要写到 公共权限下

	//构造函数写法
	// 1 不需要返回值 不用写void
	// 2 构造函数名称 与 类名 相同的 
	// 3 允许有参数，可以发生函数重载
	Person()
	{
		cout << "Person的构造函数调用" << endl;
	}


	//析构函数
	// 1 不需要返回值  不用写void 
	// 2 析构函数名称 与构造函数 相同  前面需要加  ~
	// 3 不允许有参数  不可以发生重载
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
};

void test01()
{
	// 构造函数由编译器自动调用一次，无须手动调用
	// 如果我们不提供构造函数，编译器也会自动提供构造函数,默认空实现

	// 析构函数 也是编译器自动调用一次
	// 如果我们不提供析构函数，编译器会提供空实现析构函数
	// 析构函数 在对象被销毁前 自动调用

	Person p1;
}
int main() 
{
	test01();

	//Person p1; //如果在main函数里调用，
				//因为mian函数未到结尾，所以析构函数不出现
				// 析构函数 在对象被销毁前 自动调用
	
	system("pause");
	return EXIT_SUCCESS;
}
