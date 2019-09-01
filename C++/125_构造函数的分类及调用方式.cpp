#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/*

	构造函数的分类：
		分类方式1：参数  无参构造（默认构造）  有参构造
		分类方式2：类型  拷贝构造  普通构造
*/

class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}

	Person(int age)
	{
		cout << "Person的有参构造函数调用" << endl;
	}

	//拷贝构造
	//值传递的本质 就是调用 拷贝构造函数
	Person(const Person & p)
	{	
		this->m_Age = p.m_Age;
		cout << "Person的拷贝函数调用" << endl;	
	}
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}

	int m_Age;

};

//2、构造函数的调用
void test()
{
	//默认构造函数的调用
	Person p1;

	//有参构造函数的调用
	Person p2(10);
	Person p3 = Person(10);//显示法有参拷贝函数调用

	//拷贝构造函数的调用
	Person p4(p3);
	Person p5 = Person(p3);//显示法调用拷贝构造函数


	//注意事项
	//1 ： 不要利用括号法 调用默认构造函数
	//		Person p(); 编译器会将代码看成 函数的声明，不会认为是在创建对象
	//Person p(); //类似于函数声明
	//void func();


	//2、单独写Person(10) 称为匿名对象 
	//  匿名对象 特点：当本行执行完毕，立即释放
	Person(10);
	cout << "---------------------\n";

	//3、不要利用拷贝构造函数  初始化匿名对象
	// 当写成Person(p6);  编译器会认为写了 Person p6  
	//如果已经有p4就是重定义 匿名对象放到右值没问题
	Person(p6);//此语句相当于 Person p6 

	//4、隐式转换法 可读性低
	Person p7 = 10; //编译器将代码转为 Person p7 = Person(10);
	//利用隐式转换法 调用拷贝构造函数
	Person p8 = p7; //隐式转换为 Person p8 =  Person(p7);
}

void func(Person p)
{
	//将类作为函数参数
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
