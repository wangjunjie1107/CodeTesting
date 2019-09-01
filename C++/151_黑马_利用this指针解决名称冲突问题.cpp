#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	int age;


	//每一个非静态成员函数内部
	//   都隐藏加了一个this指针
	Person(int age)
	{
		//this可以解决名称冲突


		//名称冲突 编译器不认识那个是参数，那个是被赋值的量  会导致结果出错
		//age = age;


		//利用this指针解决
		this->age = age; 
	}

	Person& personAddAge(Person & p)
	{
		this->age += p.age;
		//*this 是 p2 的本体  
		//this是 p2 的存放地址
		return *this; 
	}

};

void test01()
{
	Person p1(10);
	cout << "p1的年龄为： " << p1.age << endl;


	Person p2(10);

	// 对象 p2 加了三次 p1 的年龄
	p2.personAddAge(p1).personAddAge(p1).personAddAge(p1); //链式编程思想

	cout << "p2的年龄为： " << p2.age << endl;

}
int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
