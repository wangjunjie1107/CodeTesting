#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Person
{
public:

	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}

	Person(int a)
	{
		cout << "Person的有参构造函数调用" << endl;
		m_Age = a;
	}

	//拷贝构造  //值传递的本质 就是调用 拷贝构造函数
	Person(const Person &p)
	{
		cout << "Person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}

	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}

	int m_Age;
};

//2、构造函数的调用
void test01()
{
	//默认构造函数的调用方式
	Person p1;  //默认构造函数调用
}

void test02()
{
	//1、括号法  调用有参构造函数 和 拷贝构造函数
	//Person p1(19);//有参构造函数调用
	//cout << "p1的年龄为： " << p1.m_Age << endl;


	//p1.m_Age = 18;
	//Person p2(p1);//利用括号法 调用拷贝构造函数
	////拷贝构造函数会把值传入到构造函数中
	//cout << "p2的年龄为： " << p2.m_Age << endl;


	////注意事项1：不要利用括号法 调用默认构造函数 Person p();
	////原因将代码看成 函数的声明，不会认为是在创建对象
	////Person p();
	////void func();

	////2、显示法
	//Person p3 = Person(10); //有参构造调用
	////显示法 调用拷贝构造函数
	//Person p4 = Person(p3);


	//单独写 Person(10); 称为 匿名对象 
	//特点：当本行执行完毕，立即释放
	/*Person(10);
	cout << "aaaaaaaaa" << endl;*/

	//注意事项2 ： 不要利用拷贝构造函数 初始化匿名对象
	Person(p4);  
	// 当写成Person(p4);  编译器会认为写了 Person p4   就成为了默认构造函数调用
	//如果已经有p4就是重定义 匿名对象放到右值没问题

	//3 隐式转换法 可读性低
	//编译器隐式将代码转为 Person p5 = Person(10); 
	//Person p5 = 10;
	//利用隐式转换法  调用拷贝构造函数
	//Person p6 = p5; // 隐式转为 Person p6 = Person(p5);
}

int main() 
{
	//test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}
