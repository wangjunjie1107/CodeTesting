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
	Person(int age)
	{
		this->m_Age = age;
		cout << "Person的有参构造函数调用" << endl;
	}


	//拷贝构造  //值传递的本质 就是调用 拷贝构造函数
	Person(const Person & p)
	{
		this->m_Age = p.m_Age;
		cout << "Person的拷贝构造函数调用" << endl;
	}


	//析构函数
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}

	int m_Age;
};

//拷贝构造函数的调用实际

//1、用已经创建好的对象 初始化新的对象
void test01()
{
	Person p1(10);

	Person p2(p1);//拷贝构造函数调用
	cout << "p2的年龄为： " << p2.m_Age << endl;
}
//2、值传递的方式 给函数参数传值
void doWork(Person p)
{

}

void test02()
{
	Person p3;
	doWork(p3);//值传递的方式 给函数参数传值 调用拷贝构造函数
}

//3、以值的方式返回局部对象
Person doWork2()
{
	Person p4(20);
	cout << "p4的年龄：" << p4.m_Age << endl;
	cout << "-----------------\n";
	return p4;
}

void test03()
{
	Person p5(10);
	cout << "p5的年龄：" << p5.m_Age << endl;

	p5 = doWork2();//函数返回值为Person类型  
				
		//一共有三次析构
		//第一次 p4的析构
		//第二次 有参构造的p5的析构 因为要复制 原来的p5已经没有用了 
		//第三次 赋值后的p5的析构


	cout << "-----------------\n";
				   
}


/*
release版本下  编译器优化的代码

Person p;

void doWork2(Person & p)
{

}
*/
int main()
{

	//test01();
	//test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}
