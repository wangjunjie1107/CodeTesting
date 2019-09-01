#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;

class Person
{
public:
	//每一个非静态成员函数内部都隐藏加了一个this指针
	Person(int age)
	{
		//this可以解决名称冲突
		this->age = age;
	}

	Person& personAddAge(Person & p)
	{
		this->age += p.age;//p.age每次都为10，因为传入的是 p

		//返回 p2 的引用，也就是 p2 的本体
		return *this;  // *this指向p2的本体  
					  //this指向p2的指针
	}

	int age;
};

void test01()
{
	Person p1(10);//调用构造函数
	cout << "p1的年龄为： " << p1.age << endl;

	Person p2(10);

	//链式编程思想  p2.personAddAge(p1) 不是拷贝构造函数调用，只是普通类成员函数传参数 
	p2.personAddAge(p1).personAddAge(p1).personAddAge(p1);
	cout << "p2的年龄为： " << p2.age << endl;


}
int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}

