#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Person
{
public:
	/*
		构造和析构必须要写到 公共权限下

		构造函数写法：
			1 不需要返回值 不用写void 
			2 构造函数名称和类名相同
			3 允许有参数，可以发生函数重载
	*/

	//默认构造
	Person()
	{
		cout << "Person的构造函数调用" << endl;
	}

	//有参构造
	Person(int age)
	{
		this->m_Age = age;
		cout << "Person的有参构造函数调用" << endl;

	}

	/*
		析构函数：
			1 不需要有返回值 不用写void
			2 析构函数名称 与构造函数相同 前面需要加 ~
			3 不允许有参数 不可以发生重载
	*/
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}


	int m_Age;
};


void test()
{
	//构造函数由编译器自动调用一次，无须手动调用
	//如果我们不提供构造函数，编译器也会自动提供构造函数，默认空实现

	//析构函数 也是编译器自动调用一次
	//如果我们不提供析构函数，编译器会提供控实现析构函数
	
	Person p;
	Person p1(5);
	cout << "-------------------------\n";

}
int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
