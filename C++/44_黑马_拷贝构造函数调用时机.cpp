#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
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

//1、用已经创建好的对象 初始化新的对象
void test01()
{
	Person p1;
	p1.m_Age = 10;

	Person p2(p1);//拷贝构造函数调用
	cout << "p2的年龄为： " << p2.m_Age << endl;
}

//2、值传递的方式 给函数参数传值
void doWork( Person p)
{

}

void test02()
{
	Person p;
	doWork(p);
}

//3、以值的方式返回局部对象
Person doWork2()
{
	Person p;
	return p;//调用拷贝构造函数，返回p的拷贝
}

int func()
{
	int a = 10;
	return a;
}

void test03()
{
	Person p = doWork2();
}

/*
 release版本优化的代码

 Person p;

 void doWork2(Person & p)
 {
 
 }
*/



int main(){
	//test01();
	//test02();
	//test03();

	int a = func();
	cout << "a  = " << a << endl;
	cout << "a  = " << a << endl;
	cout << "a  = " << a << endl;
	cout << "a  = " << a << endl;

	system("pause");
	return EXIT_SUCCESS;
}
