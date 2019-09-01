#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
using namespace std;

//	this指针指向被调用的成员函数所属的对象。
//	this 指针可以解决命名冲突
//	this 指针可以返回调用函数的本体  对this指针进行解引用
class Person
{
public:
	Person(int age)
	{
		this->age = age;
	}


	Person & personAddAge(Person & p)
	{
		this->age += p.age;
		return *this;//*this 就是 p2 的本体
	}
	int age;
};

void test()
{
	Person p1(10);
	Person p2(10);

	p2.personAddAge(p1).personAddAge(p1).personAddAge(p1);

	cout << p2.age << endl;
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
